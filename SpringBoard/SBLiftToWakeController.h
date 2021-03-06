//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMWakeGestureDelegate.h"

@class CMWakeGestureManager, NSHashTable, NSString;

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate>
{
    BOOL _screenOn;
    CMWakeGestureManager *_wakeGestureManager;
    NSHashTable *_observers;
    int _wakeGestureState;
}

+ (id)sharedController;
+ (BOOL)isLiftToWakeAvailable;
@property(nonatomic) int wakeGestureState; // @synthesize wakeGestureState=_wakeGestureState;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CMWakeGestureManager *wakeGestureManager; // @synthesize wakeGestureManager=_wakeGestureManager;
- (void).cxx_destruct;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(int)arg2;
- (void)_sendTransitionToObservers:(int)arg1;
- (void)_stopObservingIfNecessary;
- (void)_startObservingIfNecessary;
- (void)_handleBacklightLevelChanged:(id)arg1;
- (void)_screenTurnedOn;
- (void)_screenTurnedOff;
- (void)_ignoredTransition:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBacklightController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

