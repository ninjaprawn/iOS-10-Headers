//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBStatusBarStateAggregatorPosting.h"
#import "UIStatusBarStateProvider.h"

@class NSHashTable, NSMutableArray, NSString, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>
{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    CDStruct_f23da3d9 _aggregatorData;
    int _aggregatorActions;
    CDStruct_f23da3d9 _lastPost;
    unsigned int _coalescentBlockDepth;
    char _itemNeedsPost[32];
    BOOL _anyItemNeedsPost;
    BOOL _nonItemDataNeedsPost;
    BOOL _posting;
    NSMutableArray *_stylesWithDetailUpdates;
}

- (void).cxx_destruct;
- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const CDStruct_f23da3d9 *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const CDStruct_f23da3d9 *)arg2;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const CDStruct_f23da3d9 *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_f23da3d9 *)arg1;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const CDStruct_f23da3d9 *)arg1;
- (BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const CDStruct_f23da3d9 *)arg3;
- (void)_didChangeDoubleHeightStatusStringForStyle:(int)arg1;
- (void)updateStatusBarItem:(int)arg1;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)getStatusBarData:(CDStruct_f23da3d9 *)arg1;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

