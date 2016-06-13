//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBPIPContentViewLayoutSettings : NSObject
{
    int _position;
    float _size;
    NSMutableArray *_observers;
}

+ (void)removeObserver:(id)arg1;
+ (void)addObserver:(id)arg1;
+ (struct CGSize)maximumContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)minimumContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)defaultContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)currentContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (void)setContentViewSize:(struct CGSize)arg1;
+ (int)currentContentViewPosition;
+ (void)setContentViewPosition:(int)arg1;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(nonatomic) float size;
@property(nonatomic) int position;
- (id)init;

@end
