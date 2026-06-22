//  IOSBridge.mm
//  XYPlatformDemo
//
//  Created by Yu Lekai on 03/11/2016.
//  Modernized for Unity 2021.3+ and iOS 12+
//  Removed: ExitIOS, GetNotificationRequest, HasNotification.

#import "IOSBridge.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <UserNotifications/UserNotifications.h>

// Helper: request notification authorization if needed
static void RequestNotificationAuthIfNeeded(void) {
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    [center requestAuthorizationWithOptions:(UNAuthorizationOptionAlert |
                                             UNAuthorizationOptionSound |
                                             UNAuthorizationOptionBadge)
                          completionHandler:^(BOOL granted, NSError * _Nullable error) {
                              // silently ignore
                          }];
}

// ------------------------------------------------------------------------
// Initialization & badge
// ------------------------------------------------------------------------
void _CommonInit() {
    [[UIApplication sharedApplication] setIdleTimerDisabled:YES];
    _RemoveAllNotification();
}

void _ResetBadge() {
    [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
}

// ------------------------------------------------------------------------
// Notifications (modernized with UNUserNotificationCenter)
// ------------------------------------------------------------------------

void _RemoveNotification(int nid) {
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    [center removePendingNotificationRequestsWithIdentifiers:@[[NSString stringWithFormat:@"%d", nid]]];
}

void _RemoveAllNotification() {
    [[UIApplication sharedApplication] setApplicationIconBadgeNumber:0];
    [[UNUserNotificationCenter currentNotificationCenter] removeAllPendingNotificationRequests];
}

// Common implementation for setting a notification
// Always adds; iOS will replace existing notification with the same identifier.
static void AddNotification(int nid, const char *content, const char *title,
                            NSDateComponents *dateComponents, BOOL repeats)
{
    RequestNotificationAuthIfNeeded();

    UNMutableNotificationContent *notifContent = [[UNMutableNotificationContent alloc] init];
    notifContent.body = [NSString stringWithUTF8String:content];
    if (title && strlen(title) > 0) {
        notifContent.title = [NSString stringWithUTF8String:title];
    }
    notifContent.sound = [UNNotificationSound defaultSound];
    notifContent.badge = @1;

    UNCalendarNotificationTrigger *trigger = [UNCalendarNotificationTrigger triggerWithDateMatchingComponents:dateComponents repeats:repeats];

    UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:[NSString stringWithFormat:@"%d", nid]
                                                                          content:notifContent
                                                                          trigger:trigger];

    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    [center addNotificationRequest:request withCompletionHandler:^(NSError * _Nullable error) {
        if (error) {
            NSLog(@"[IOSBridge] Error adding notification %d: %@", nid, error.localizedDescription);
        }
    }];
}

void _SetNotification(int nid, const char *content, const char *title, int hour) {
    NSDateComponents *components = [[NSDateComponents alloc] init];
    components.hour = hour;
    components.minute = 0;
    AddNotification(nid, content, title, components, YES); // repeats daily by default
}

void _SetNotificationWeekly(int nid, const char *content, const char *title,
                            int weekday, int hour, int minute) {
    NSDateComponents *components = [[NSDateComponents alloc] init];
    components.weekday = weekday;   // 1 = Sunday, 2 = Monday, ... 7 = Saturday
    components.hour = hour;
    components.minute = minute;
    AddNotification(nid, content, title, components, YES); // repeats weekly
}

// ------------------------------------------------------------------------
// Brightness
// ------------------------------------------------------------------------
void _SetBrightness(float value) {
    [[UIScreen mainScreen] setBrightness:value];
}

float _GetBrightness() {
    return [[UIScreen mainScreen] brightness];
}

// ------------------------------------------------------------------------
// Battery
// ------------------------------------------------------------------------
float _GetBatteryLevel() {
    UIDevice *device = [UIDevice currentDevice];
    device.batteryMonitoringEnabled = YES;
    return device.batteryLevel;
}

// ------------------------------------------------------------------------
// Audio authorization & session
// WARNING: These functions may cause main-thread deadlock if called from
// Unity's main thread due to semaphore waits. Consider calling them from a
// background thread or refactoring to async if you encounter hangs.
// ------------------------------------------------------------------------
bool _RequestAudioAuthorization() {
    __block bool granted = false;
    AVAudioSession *session = [AVAudioSession sharedInstance];
    if ([session respondsToSelector:@selector(recordPermission)]) {
        // Modern API (iOS 8+)
        switch ([session recordPermission]) {
            case AVAudioSessionRecordPermissionGranted:
                granted = true;
                break;
            case AVAudioSessionRecordPermissionDenied:
                granted = false;
                break;
            case AVAudioSessionRecordPermissionUndetermined: {
                dispatch_semaphore_t sem = dispatch_semaphore_create(0);
                [session requestRecordPermission:^(BOOL allowed) {
                    granted = allowed;
                    dispatch_semaphore_signal(sem);
                }];
                dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
                break;
            }
        }
    } else {
        // Fallback to older AVCaptureDevice method (iOS 7)
        if ([AVCaptureDevice respondsToSelector:@selector(authorizationStatusForMediaType:)]) {
            AVAuthorizationStatus status = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeAudio];
            if (status == AVAuthorizationStatusAuthorized) {
                granted = true;
            } else if (status == AVAuthorizationStatusNotDetermined) {
                dispatch_semaphore_t sem = dispatch_semaphore_create(0);
                [AVCaptureDevice requestAccessForMediaType:AVMediaTypeAudio completionHandler:^(BOOL allowed) {
                    granted = allowed;
                    dispatch_semaphore_signal(sem);
                }];
                dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
            }
        }
    }
    return granted;
}

void _SetAudioSessionActive() {
    NSError *error = nil;
    // Use ambient category to mix with other audio; change to Playback if you need exclusive audio
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryAmbient error:&error];
    if (error) {
        NSLog(@"[IOSBridge] Audio session error: %@", error.localizedDescription);
    }
}

bool _GetAudioSessionActive() {
    return [[AVAudioSession sharedInstance] isOtherAudioPlaying];
}

// ------------------------------------------------------------------------
// Clipboard
// ------------------------------------------------------------------------
char* _GetTextFromClipboard() {
    NSString *text = [UIPasteboard generalPasteboard].string;
    return MakeStrCopy([text UTF8String]);
}

char* MakeStrCopy(const char* str) {
    if (str == NULL) return NULL;
    char* res = (char*)malloc(strlen(str) + 1);
    strcpy(res, str);
    return res;
}

// ------------------------------------------------------------------------
// System version (kept for backward compatibility)
// ------------------------------------------------------------------------
bool _IsIOSSystemVersionMoreThanNine() {
    return true; // all supported iOS versions > 9.0
}