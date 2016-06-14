//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationAlertDestination.h"
#import "NCNotificationViewControllerDelegate.h"

@class NCNotificationViewController, NSString, UIViewController;

@interface SBLongLookPrototypingDestination : NSObject <NCNotificationViewControllerDelegate, NCNotificationAlertDestination>
{
    id <NCNotificationAlertDestinationDelegate> _delegate;
    UIViewController *_presentingViewController;
    NCNotificationViewController *_presentedNotificationViewController;
}

@property(retain, nonatomic) NCNotificationViewController *presentedNotificationViewController; // @synthesize presentedNotificationViewController=_presentedNotificationViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void).cxx_destruct;
- (void)notificationViewController:(id)arg1 didDismissLongLook:(BOOL)arg2;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (BOOL)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

