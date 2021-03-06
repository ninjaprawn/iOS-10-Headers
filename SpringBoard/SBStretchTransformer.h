//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "SBDosidoAnimator.h"

@class CAMutableMeshTransform, NSString, SBStretchTransformerView, UIView;

@interface SBStretchTransformer : NSObject <CAAnimationDelegate, SBDosidoAnimator>
{
    float _percentage;
    CAMutableMeshTransform *_mesh;
    CDUnknownBlockType _completionBlock;
    float _stretchFactor;
    UIView *_parentView;
    SBStretchTransformerView *_transformView;
    UIView *_view;
    unsigned int _anchorEdge;
    int _orientation;
}

@property(nonatomic, setter=_setOrientation:) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic, setter=_setAnchorEdge:) unsigned int anchorEdge; // @synthesize anchorEdge=_anchorEdge;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_animateToZeroStretchFactor;
- (void)updateMeshTransform:(id)arg1 stretchFactor:(float)arg2;
- (void)_setStretchFactor:(float)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)cancelDosido;
- (void)animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) float stepPercentage;
@property(readonly, nonatomic, getter=isStepped) BOOL stepped;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 anchorEdge:(unsigned int)arg2 orientation:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

