//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBForceStageInteractionGestureRecognizer, SBSystemGestureManager, UIHBClickGestureRecognizer, UIHBLongClickGestureRecognizer;

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject
{
    SBSystemGestureManager *_systemGestureManager;
    UIHBClickGestureRecognizer *_initialButtonDownGestureRecognizer;
    UIHBClickGestureRecognizer *_singlePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_singlePressUpAfterHintGestureRecognizer;
    SBForceStageInteractionGestureRecognizer *_singlePressHintGestureRecognizer;
    UIHBLongClickGestureRecognizer *_longPressGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressDownGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_triplePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_doubleTapUpGestureRecognizer;
}

@property(retain, nonatomic) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer; // @synthesize doubleTapUpGestureRecognizer=_doubleTapUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer; // @synthesize triplePressUpGestureRecognizer=_triplePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer; // @synthesize doublePressUpGestureRecognizer=_doublePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer; // @synthesize doublePressDownGestureRecognizer=_doublePressDownGestureRecognizer;
@property(retain, nonatomic) UIHBLongClickGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SBForceStageInteractionGestureRecognizer *singlePressHintGestureRecognizer; // @synthesize singlePressHintGestureRecognizer=_singlePressHintGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpAfterHintGestureRecognizer; // @synthesize singlePressUpAfterHintGestureRecognizer=_singlePressUpAfterHintGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer; // @synthesize singlePressUpGestureRecognizer=_singlePressUpGestureRecognizer;
@property(retain, nonatomic) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer; // @synthesize initialButtonDownGestureRecognizer=_initialButtonDownGestureRecognizer;
@property(retain, nonatomic) SBSystemGestureManager *systemGestureManager; // @synthesize systemGestureManager=_systemGestureManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldConfigureDependencies;

@end

