//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBDisplayItem, SBWorkspaceTransitionRequest;

@protocol SBAppSwitcherPageContentView <NSObject>
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg1;
- (void)invalidate;

@optional
- (void)transitionDidEnd:(BOOL)arg1 forPresentation:(BOOL)arg2;
- (void)interactionDidEnd:(BOOL)arg1;
- (void)updateTransitionProgress:(float)arg1;
- (void)viewDismissing:(SBDisplayItem *)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg4;
- (void)viewPresenting:(SBDisplayItem *)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg4;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
@end
