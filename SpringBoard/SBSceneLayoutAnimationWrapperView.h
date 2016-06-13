//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBSceneLayoutReferenceOrientedView.h"

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView>
{
    int _layoutOrientation;
    int _referenceOrientation;
}

@property(nonatomic) int layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) int referenceOrientation; // @synthesize referenceOrientation=_referenceOrientation;
- (void)crossfadeWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)elementWrapperViewForLayoutRole:(int)arg1;
@property(readonly, nonatomic) NSArray *elementWrapperViews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
