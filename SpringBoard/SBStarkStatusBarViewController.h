//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIStatusBarStyleDelegate.h"

@class NSMutableSet, NSString, SBStarkStatusBarStateProvider, UIStatusBar, UIView;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    UIStatusBar *_statusBarView;
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;
    NSMutableSet *_statusBarHideReasons;
    int _requestedStyle;
    BOOL _styleHasBeenRequested;
    float _statusBarWidth;
    UIView *_separatorView;
    BOOL _separatorHidden;
}

- (void).cxx_destruct;
- (void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
- (BOOL)_isStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_layoutStatusBar:(id)arg1;
- (id)newFakeStatusBarWithStyle:(int)arg1;
- (id)newFakeStatusBar;
- (void)updateStatusBarWithRequestedStyle:(int)arg1 animationFactory:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(nonatomic) __weak id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

