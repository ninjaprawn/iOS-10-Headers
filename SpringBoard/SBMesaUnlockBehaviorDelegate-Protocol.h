//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBLockScreenUnlockRequest, SBMesaUnlockFeedback;

@protocol SBMesaUnlockBehaviorDelegate <NSObject>
- (void)mesaUnlockBehavior:(id <SBMesaUnlockBehavior>)arg1 requestsUnlock:(SBLockScreenUnlockRequest *)arg2 withFeedback:(SBMesaUnlockFeedback *)arg3;
- (void)mesaUnlockBehavior:(id <SBMesaUnlockBehavior>)arg1 requestsFeedback:(SBMesaUnlockFeedback *)arg2;
@end

