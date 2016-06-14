//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBUserEventInterface : NSObject
{
    id <SBUserEventInterfaceObserver> _observer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_userEventReceived;
- (void)_userEventPresenceExpired;
- (void)_userEventPresenceTriggered;
- (void)_userEventsDidUnIdle;
- (void)_userEventsDidIdle;
- (int)_hidModeForMode:(int)arg1;
- (void)callbackOnNextUserEvent;
- (void)resetWithInterval:(double)arg1 mode:(int)arg2 observer:(id)arg3;
- (id)init;

@end

