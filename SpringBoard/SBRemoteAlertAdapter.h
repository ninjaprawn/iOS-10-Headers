//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertAdapter.h"

#import "_SBRemoteAlertHostViewControllerDelegate.h"

@class NSMutableSet, NSString, _SBRemoteAlertHostViewController;

@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate>
{
    _SBRemoteAlertHostViewController *_remoteAlertHostViewController;
    id <SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate;
    NSString *_impersonatedApplicationBundleID;
    BOOL _dismissWithHomeButton;
    BOOL _userRequestedHomeButtonDismissal;
    int _desiredButtonEvents;
    BOOL _wantsWallpaperTunnel;
    BOOL _hasTranslucentBackground;
    int _requestedBackgroundStyle;
    BOOL _allowsAlertStacking;
    int _dismissalAnimationStyle;
    BOOL _disableFadeInAnimation;
    NSMutableSet *_idleTimerDisabledReasons;
    double _requestedAutoLockTime;
    BOOL _hasCustomStatusBarStyle;
    int _customStatusBarStyle;
    int _desiredStatusBarStyleOverrides;
    BOOL _wantsToShowStatusBar;
    BOOL _wantsToManageStatusBarAtActivation;
    BOOL _canManageStatusBarVisibility;
    BOOL _suppressesSiri;
    BOOL _activatedForSiri;
    BOOL _dismissOnUILock;
    int _desiredLaunchingInterfaceOrientation;
    BOOL _dontCancelStatusBarStyleOverrides;
    CDUnknownBlockType _lockUIAndDismissActions;
    CDUnknownBlockType _clientActivationHandler;
    CDUnknownBlockType _clientDeactivationHandler;
    int _whitePointAdaptivityStyle;
    BOOL _beingPresentedObscured;
}

+ (void)requestWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestRemoteViewService:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_requestWithServiceName:(id)arg1 serviceClass:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic, getter=isBeingPresentedObscured) BOOL beingPresentedObscured; // @synthesize beingPresentedObscured=_beingPresentedObscured;
@property(nonatomic, getter=_remoteAlertAdapterDelegate, setter=_setRemoteAlertAdapterDelegate:) __weak id <SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate; // @synthesize _remoteAlertAdapterDelegate;
@property(nonatomic) BOOL activatedForSiri; // @synthesize activatedForSiri=_activatedForSiri;
@property(readonly, nonatomic) BOOL disablesFadeInAnimation; // @synthesize disablesFadeInAnimation=_disableFadeInAnimation;
@property(readonly, nonatomic) BOOL dismissOnUILock; // @synthesize dismissOnUILock=_dismissOnUILock;
@property(nonatomic) int requestedBackgroundStyle; // @synthesize requestedBackgroundStyle=_requestedBackgroundStyle;
@property(readonly, nonatomic) BOOL wantsWallpaperTunnel; // @synthesize wantsWallpaperTunnel=_wantsWallpaperTunnel;
@property(readonly, nonatomic) BOOL userRequestedHomeButtonDismissal; // @synthesize userRequestedHomeButtonDismissal=_userRequestedHomeButtonDismissal;
@property(readonly, nonatomic) int dismissalAnimationStyle; // @synthesize dismissalAnimationStyle=_dismissalAnimationStyle;
- (void).cxx_destruct;
- (int)preferredWhitePointAdaptivityStyle;
- (BOOL)isRemote;
- (BOOL)matchesInCallUIService;
- (BOOL)matchesAnyInCallService;
- (BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(int)arg1;
- (void)remoteAlertWantsToLockUIAndDismiss;
- (void)remoteAlertWantsToDisableFadeInAnimation:(BOOL)arg1;
- (void)remoteAlertWantsToDismissOnUILock:(BOOL)arg1;
- (void)remoteAlertWantsToSetStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsToSetAutoLockDuration:(double)arg1;
- (void)remoteAlertWantsToSetIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1;
- (void)remoteAlertWantstoSetDismissalAnimationStyle:(int)arg1;
- (void)remoteAlertWantsToAllowAlertStacking:(BOOL)arg1;
- (void)remoteAlertWantsMenuButtonDismissal:(BOOL)arg1;
- (void)remoteAlertWantsToSetBackgroundStyle:(int)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsWallpaperTunnelActive:(BOOL)arg1;
- (void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(int)arg1;
- (void)remoteAlertWantsToAllowBanners:(BOOL)arg1;
- (void)remoteAlertDidTerminateWithError:(id)arg1;
- (void)remoteAlertDidRequestDismissal;
- (void)_didTerminateWithError:(id)arg1;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (id)_displayLayoutElementIdentifier;
- (void)_setSuppressesSiri:(BOOL)arg1;
- (void)_setShouldDisableFadeInAnimation:(BOOL)arg1;
- (void)_setCustomStatusBarStyle:(int)arg1;
- (void)_setHasTranslucentBackground:(BOOL)arg1;
- (void)_setLaunchingInterfaceOrientation:(int)arg1;
- (void)_setDismissalAnimationStyle:(int)arg1;
- (void)_setWantsWallpaperTunnel:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)_setImpersonatedApplicationBundleID:(id)arg1;
- (void)_setDismissWithHomeButton:(BOOL)arg1;
- (void)_terminate;
- (BOOL)managesOwnStatusBarAtActivation;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)showsSpringBoardStatusBar;
- (int)statusBarStyleOverridesToCancel;
- (int)statusBarStyle;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (BOOL)hasTranslucentBackground;
- (BOOL)suppressesSiri;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (void)handleDoubleHeightStatusBarTap;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonTap;
- (double)autoLockTime;
- (void)deactivate;
- (void)activate;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)setCanManageStatusBarVisibility:(BOOL)arg1;
- (void)setWantsToManageStatusBarAtActivation:(BOOL)arg1;
- (void)setActivationHandler:(CDUnknownBlockType)arg1 deactivationHandler:(CDUnknownBlockType)arg2;
- (void)setLockUIAndDismissActions:(CDUnknownBlockType)arg1;
- (void)noteActivatedForCustomReason:(id)arg1;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)noteShouldStopDisablingStatusBarOverrides;
@property(readonly, nonatomic) __weak NSString *serviceBundleIdentifier;
- (id)_impersonatesApplicationWithBundleID;
- (void)_cleanupIdleTimerDisabledReasons;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)_initWithRemoteAlertHostViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

