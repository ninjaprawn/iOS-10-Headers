//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class NSMutableArray, SBAlert, SBAppStatusBarSettingsAssertion, SBSceneLayoutAnimationWrapperView, SBUILockScreenNotificationAnimationHandler, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
    SBWindowSelfHostWrapper *_pipWindowWrapper;
    UIView *_viewToAnimate;
    NSMutableArray *_appsRequiringHostView;
    BOOL _finishedZooming;
    BOOL _finishedActivating;
    BOOL _finishedCrossfadingToHostView;
    BOOL _finishedNotificationAnimations;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBUILockScreenNotificationAnimationHandler *_notificationAnimationHandler;
}

- (void).cxx_destruct;
- (id)_lockScreenViewController;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_noteNotificationAnimationsDidFinish;
- (void)_finishedZooming;
- (void)_applicationDependencyStateChanged;
- (BOOL)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (id)animationSettings;
- (void)_doAnimation:(CDUnknownBlockType)arg1;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_willSetupStartDependencies;
- (id)_animationProgressDependencies;
- (BOOL)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(BOOL)arg1;
- (BOOL)_shouldDismissBanner;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;

@end

