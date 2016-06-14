//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBZoomView.h"

@interface SBFullscreenZoomView : SBZoomView
{
    BOOL _hasImage;
    id _surface;
}

- (void).cxx_destruct;
- (void)_addBlackBackground;
@property(readonly, nonatomic) __weak id surface;
- (id)initWithView:(id)arg1 containingContextHostSnapshot:(id)arg2 screen:(id)arg3;
- (id)initWithContextHostView:(id)arg1 screen:(id)arg2;
- (id)initWithImage:(id)arg1 screen:(id)arg2 opaque:(BOOL)arg3;
- (id)initWithContainingBounds:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2 statusBarFrame:(struct CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(int)arg5 doubleHeightStatusBar:(BOOL)arg6 preventSplit:(BOOL)arg7 needsZoomFilter:(BOOL)arg8 asyncDecodeImage:(BOOL)arg9 forJail:(BOOL)arg10;
- (id)_initWithView:(id)arg1 screen:(id)arg2 needsBlackBackground:(BOOL)arg3;
- (id)_initWithFrame:(struct CGRect)arg1;

@end

