//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSecureWindow.h"

#import "BSDescriptionProviding.h"
#import "SBUIActiveOrientationObserver.h"

@class NSString, _SBDummyRootVC;

@interface SBActiveInterfaceOrientationFollowingWindow : SBSecureWindow <SBUIActiveOrientationObserver, BSDescriptionProviding>
{
    _SBDummyRootVC *_rootVC;
}

- (void).cxx_destruct;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)setHidden:(BOOL)arg1;
- (id)initWithDebugName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

