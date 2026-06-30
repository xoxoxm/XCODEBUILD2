#include "IOSBridge.h"

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <UserNotifications/UserNotifications.h>

void _CommonInit()
{
    [UIApplication sharedApplication].idleTimerDisabled = YES;
    _RemoveAllNotification();
}

void _ResetBadge()
{
    [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
}

// ---------- 通知相关 ----------
bool HasNotification(int nid)
{
    NSString *identifier = [NSString stringWithFormat:@"%d", nid];
    // 这里只能检查“已注册”的通知请求，但UserNotifications没有同步查询方法。
    // 原逻辑是在添加时检查是否已存在，我们可以在添加时通过维护一个静态字典来模拟，
    // 但为了简单且保持接口一致，此处直接返回 false，意味着每次都会重新添加。
    // 如果你需要完全还原“重复通知只保留一个”的行为，请参考文末的说明。
    return false;
}

void _RemoveNotification(int nid)
{
    NSString *identifier = [NSString stringWithFormat:@"%d", nid];
    [[UNUserNotificationCenter currentNotificationCenter] removePendingNotificationRequestsWithIdentifiers:@[identifier]];
}

void _RemoveAllNotification()
{
    [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    [[UNUserNotificationCenter currentNotificationCenter] removeAllPendingNotificationRequests];
}

void _SetNotification(int nid, const char *content, const char* title, int hour)
{
    NSString *identifier = [NSString stringWithFormat:@"%d", nid];
    
    // 如果已经存在同 id 的待发送通知，则不重复添加
    // 由于 UserNotifications 没有同步查询，这里先移除旧的再添加，保证不会重复
    [[UNUserNotificationCenter currentNotificationCenter] removePendingNotificationRequestsWithIdentifiers:@[identifier]];
    
    UNMutableNotificationContent *noteContent = [[UNMutableNotificationContent alloc] init];
    noteContent.body = [NSString stringWithUTF8String:content];
    if (title && strlen(title) > 0) {
        noteContent.title = [NSString stringWithUTF8String:title];
    }
    noteContent.sound = [UNNotificationSound defaultSound];
    noteContent.badge = @1;
    
    // 设置触发时间：每天指定 hour 时
    NSDateComponents *components = [[NSDateComponents alloc] init];
    components.hour = hour;
    components.minute = 0;
    UNCalendarNotificationTrigger *trigger = [UNCalendarNotificationTrigger triggerWithDateMatchingComponents:components repeats:YES];
    
    UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:identifier
                                                                          content:noteContent
                                                                          trigger:trigger];
    
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    [center requestAuthorizationWithOptions:(UNAuthorizationOptionBadge | UNAuthorizationOptionSound | UNAuthorizationOptionAlert)
                          completionHandler:^(BOOL granted, NSError * _Nullable error) {
                              if (granted) {
                                  [center addNotificationRequest:request withCompletionHandler:^(NSError * _Nullable error) {
                                      if (error) {
                                          NSLog(@"添加通知失败: %@", error);
                                      }
                                  }];
                              }
                          }];
}

void _SetNotificationWeekly(int nid, const char *content, const char* title, int weekday, int hour, int minute)
{
    NSString *identifier = [NSString stringWithFormat:@"%d", nid];
    
    // 先移除旧的
    [[UNUserNotificationCenter currentNotificationCenter] removePendingNotificationRequestsWithIdentifiers:@[identifier]];
    
    UNMutableNotificationContent *noteContent = [[UNMutableNotificationContent alloc] init];
    noteContent.body = [NSString stringWithUTF8String:content];
    if (title && strlen(title) > 0) {
        noteContent.title = [NSString stringWithUTF8String:title];
    }
    noteContent.sound = [UNNotificationSound defaultSound];
    noteContent.badge = @1;
    
    // 设置每周 weekday 的指定时间
    NSDateComponents *components = [[NSDateComponents alloc] init];
    components.weekday = weekday;   // 1=周日, 2=周一,...7=周六
    components.hour = hour;
    components.minute = minute;
    UNCalendarNotificationTrigger *trigger = [UNCalendarNotificationTrigger triggerWithDateMatchingComponents:components repeats:YES];
    
    UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:identifier
                                                                          content:noteContent
                                                                          trigger:trigger];
    
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    [center requestAuthorizationWithOptions:(UNAuthorizationOptionBadge | UNAuthorizationOptionSound | UNAuthorizationOptionAlert)
                          completionHandler:^(BOOL granted, NSError * _Nullable error) {
                              if (granted) {
                                  [center addNotificationRequest:request withCompletionHandler:^(NSError * _Nullable error) {
                                      if (error) {
                                          NSLog(@"添加通知失败: %@", error);
                                      }
                                  }];
                              }
                          }];
}

// ---------- 屏幕亮度 ----------
void _SetBrightness(float value)
{
    [[UIScreen mainScreen] setBrightness:value];
}

float _GetBrightness()
{
    return [[UIScreen mainScreen] brightness];
}

// ---------- 退出应用（已禁用）----------
void ExitIOS()
{
    // 不再执行 exit(0)，iOS 不允许主动退出
}

// ---------- 电池电量 ----------
float _GetBatteryLevel()
{
    [[UIDevice currentDevice] setBatteryMonitoringEnabled:YES];
    return [[UIDevice currentDevice] batteryLevel];
}

// ---------- 麦克风权限 ----------
bool audioAuthAgree = false;
bool _RequestAudioAuthorization()
{
    AVAuthorizationStatus audioAuthStatus = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeAudio];
    if(audioAuthStatus == AVAuthorizationStatusNotDetermined) {
        [AVCaptureDevice requestAccessForMediaType:AVMediaTypeAudio completionHandler:^(BOOL granted) {
            audioAuthAgree = granted;
        }];
        return audioAuthAgree;
    } else if(audioAuthStatus == AVAuthorizationStatusDenied || audioAuthStatus == AVAuthorizationStatusRestricted) {
        [AVCaptureDevice requestAccessForMediaType:AVMediaTypeAudio completionHandler:^(BOOL granted) {
            audioAuthAgree = granted;
        }];
        return audioAuthAgree;
    }
    return true; // 已授权
}

bool audioActive = false;
void _SetAudioSessionActive()
{
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategorySoloAmbient error:nil];
}

bool _GetAudioSessionActive()
{
    AVAudioSession *audioSession = [AVAudioSession sharedInstance];
    return [audioSession isOtherAudioPlaying];
}

// ---------- 剪贴板 ----------
char* _GetTextFromClipboard()
{
    UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
    NSString *text = pasteboard.string;
    return MakeStrCopy([text UTF8String]);
}

char* MakeStrCopy(const char* str)
{
    if(str == NULL)
        return NULL;
    char* res = (char*)malloc(strlen(str)+1);
    strcpy(res, str);
    return res;
}

// ---------- 系统版本 ----------
bool _IsIOSSystemVersionMoreThanNine()
{
    NSString *version = [UIDevice currentDevice].systemVersion;
    if(version.doubleValue >= 9.0) {
        return true;
    }
    return false;
}