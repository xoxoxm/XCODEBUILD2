#import "PhotoManager.h"
#import <Photos/Photos.h>
#import <UIKit/UIKit.h>

// 全局提示文本（由 _InitAlartText 设置）
static NSString *alertTitle = nil;
static NSString *alertMessage = nil;
static NSString *alertBtnText = nil;

// 内部方法：显示弹窗
static void showAlertDialog(BOOL showSettingsButton) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *root = UnityGetGLViewController();
        if (!root) return;

        UIAlertController *alert = [UIAlertController alertControllerWithTitle:alertTitle
                                                                       message:alertMessage
                                                                preferredStyle:UIAlertControllerStyleAlert];

        UIAlertAction *okAction = [UIAlertAction actionWithTitle:alertBtnText ?: @"确定"
                                                           style:UIAlertActionStyleDefault
                                                         handler:nil];
        [alert addAction:okAction];

        if (showSettingsButton) {
            UIAlertAction *settingsAction = [UIAlertAction actionWithTitle:@"前往设置"
                                                                     style:UIAlertActionStyleDefault
                                                                   handler:^(UIAlertAction * _Nonnull action) {
                [[UIApplication sharedApplication] openURL:[NSURL URLWithString:UIApplicationOpenSettingsURLString]
                                                   options:@{}
                                         completionHandler:nil];
            }];
            [alert addAction:settingsAction];
        }

        [root presentViewController:alert animated:YES completion:nil];
    });
}

// 内部方法：将最新保存的照片添加到应用同名相册（如果不存在则创建）
static void addLatestAssetToCustomAlbum(NSString *albumName) {
    // 获取最新一张照片
    PHFetchOptions *options = [[PHFetchOptions alloc] init];
    options.sortDescriptors = @[[NSSortDescriptor sortDescriptorWithKey:@"creationDate" ascending:NO]];
    options.fetchLimit = 1;
    PHFetchResult<PHAsset *> *assets = [PHAsset fetchAssetsWithMediaType:PHAssetMediaTypeImage options:options];
    if (assets.count == 0) return;
    PHAsset *asset = assets.firstObject;

    // 查找同名相册
    PHFetchResult<PHAssetCollection *> *collections = [PHAssetCollection fetchAssetCollectionsWithType:PHAssetCollectionTypeAlbum
                                                                                               subtype:PHAssetCollectionSubtypeAlbumRegular
                                                                                               options:nil];
    PHAssetCollection *targetCollection = nil;
    for (PHAssetCollection *collection in collections) {
        if ([collection.localizedTitle isEqualToString:albumName]) {
            targetCollection = collection;
            break;
        }
    }

    if (targetCollection) {
        // 添加到已有相册
        [[PHPhotoLibrary sharedPhotoLibrary] performChanges:^{
            PHAssetCollectionChangeRequest *request = [PHAssetCollectionChangeRequest changeRequestForAssetCollection:targetCollection];
            [request addAssets:@[asset]];
        } completionHandler:^(BOOL success, NSError * _Nullable error) {
            if (!success) {
                NSLog(@"添加到相册失败: %@", error);
            }
        }];
    } else {
        // 创建新相册，然后添加照片
        [[PHPhotoLibrary sharedPhotoLibrary] performChanges:^{
            [PHAssetCollectionChangeRequest creationRequestForAssetCollectionWithTitle:albumName];
        } completionHandler:^(BOOL success, NSError * _Nullable error) {
            if (success) {
                // 再次查找刚创建的相册
                PHFetchResult<PHAssetCollection *> *newCollections = [PHAssetCollection fetchAssetCollectionsWithType:PHAssetCollectionTypeAlbum
                                                                                                             subtype:PHAssetCollectionSubtypeAlbumRegular
                                                                                                             options:nil];
                PHAssetCollection *newAlbum = nil;
                for (PHAssetCollection *collection in newCollections) {
                    if ([collection.localizedTitle isEqualToString:albumName]) {
                        newAlbum = collection;
                        break;
                    }
                }
                if (newAlbum) {
                    [[PHPhotoLibrary sharedPhotoLibrary] performChanges:^{
                        PHAssetCollectionChangeRequest *addRequest = [PHAssetCollectionChangeRequest changeRequestForAssetCollection:newAlbum];
                        [addRequest addAssets:@[asset]];
                    } completionHandler:^(BOOL addSuccess, NSError * _Nullable addError) {
                        if (!addSuccess) {
                            NSLog(@"添加到新相册失败: %@", addError);
                        }
                    }];
                }
            } else {
                NSLog(@"创建相册失败: %@", error);
            }
        }];
    }
}

// =================== 对外的 C 函数实现 ===================

void _InitAlartText(char *title, char *message, char *btnText) {
    // 释放旧的字符串
    if (alertTitle) { alertTitle = nil; }
    if (alertMessage) { alertMessage = nil; }
    if (alertBtnText) { alertBtnText = nil; }

    alertTitle = [NSString stringWithUTF8String:title ?: ""];
    alertMessage = [NSString stringWithUTF8String:message ?: ""];
    alertBtnText = [NSString stringWithUTF8String:btnText ?: ""];
}

void showAlart(void) {
    // 兼容旧接口，显示通用错误弹窗（不带设置跳转）
    showAlertDialog(NO);
}

void _SavePhoto(char *readAddr) {
    NSString *path = [NSString stringWithUTF8String:readAddr];
    if (!path) return;

    UIImage *image = [UIImage imageWithContentsOfFile:path];
    if (!image) return;

    PHAuthorizationStatus status = [PHPhotoLibrary authorizationStatus];
    if (status == PHAuthorizationStatusRestricted || status == PHAuthorizationStatusDenied) {
        // 权限不足，弹窗并提示可去设置
        showAlertDialog(YES);
        return;
    }

    // 保存到系统相册
    [[PHPhotoLibrary sharedPhotoLibrary] performChanges:^{
        [PHAssetChangeRequest creationRequestForAssetFromImage:image];
    } completionHandler:^(BOOL success, NSError * _Nullable error) {
        if (!success) {
            dispatch_async(dispatch_get_main_queue(), ^{
                showAlertDialog(NO);
            });
        } else {
            // 保存成功后，尝试添加到应用同名相册（静默执行，失败不影响）
            NSString *appName = [NSBundle mainBundle].infoDictionary[(NSString *)kCFBundleNameKey];
            if (!appName) appName = @"MyGame";
            addLatestAssetToCustomAlbum(appName);
        }
    }];
}

// 以下三个函数为旧版流程中的步骤，新版已合并，保留空实现确保链接不报错
void createdAssets(void) {
    // 已废弃，不再需要单独调用
}

void createdCollection(void) {
    // 已废弃，不再需要单独调用
}

void saveImageIntoAlbum(void) {
    // 已废弃，不再需要单独调用
}