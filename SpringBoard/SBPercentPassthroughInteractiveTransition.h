//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBViewControllerInteractiveTransitioning.h"

@class NSString;

@interface SBPercentPassthroughInteractiveTransition : NSObject <SBViewControllerInteractiveTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    float _completionSpeed;
    int _completionCurve;
}

@property(nonatomic) int completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) float completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void).cxx_destruct;
- (BOOL)supportsRestarting;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelTransition;
- (void)finishInteractiveTransition;
- (void)updateTransition:(float)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL wantsInteractiveStart;

@end

