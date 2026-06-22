//  IOSBridge.h
//  XYPlatformDemo
//
//  Created by Yu Lekai on 03/11/2016.
//  Copyright © 2016 Eason. All rights reserved.
//  Modernized for Unity 2021.3+ and iOS 12+

#ifndef IOSBridge_h
#define IOSBridge_h

#ifdef __cplusplus
extern "C" {
#endif

    void _ResetBadge(void);
    void _SetNotification(int nid, const char *content, const char *title, int hour);
    void _SetNotificationWeekly(int nid, const char *content, const char *title, int weekday, int hour, int minute);
    void _RemoveNotification(int nid);
    void _RemoveAllNotification(void);
    bool HasNotification(int nid);

    void _CommonInit(void);

    void _SetBrightness(float value);
    float _GetBrightness(void);
    void ExitIOS(void);

    float _GetBatteryLevel(void);
    bool _RequestAudioAuthorization(void);
    void _SetAudioSessionActive(void);
    bool _GetAudioSessionActive(void);
    bool _IsIOSSystemVersionMoreThanNine(void);
    char* _GetTextFromClipboard(void);
    char* MakeStrCopy(const char* str);

#ifdef __cplusplus
}
#endif

#endif /* IOSBridge_h */