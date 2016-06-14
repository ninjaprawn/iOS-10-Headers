//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDeckSwitcherViewController.h"

@class NSMutableDictionary, UIImageView;

@interface SBReduceMotionDeckSwitcherViewController : SBDeckSwitcherViewController
{
    NSMutableDictionary *_visibleIconTitleContainers;
    UIImageView *_outerShadowView;
}

- (void).cxx_destruct;
- (void)_updateScrollViewPagingWidth;
- (id)_iconTitleContainerForDisplayItem:(id)arg1;
- (id)_reduceMotionAnimationFactory;
- (struct CGRect)_frameForAllItemsInScrollView;
- (double)_scrollProgressForEffectiveIndex:(float)arg1 displayItemsCount:(unsigned int)arg2 progressPresented:(float)arg3 frameOrigin:(float)arg4;
- (float)_opacityForIconTitleViewAtIndex:(unsigned int)arg1;
- (void)_updateIconTitleViews;
- (void)_updateOuterShadowView;
- (id)_animationFactoryForWallpaper;
- (BOOL)_shouldScrollForDismissalToItem:(id)arg1;
- (BOOL)_shouldFadeInToRevealSideAppForDismissal;
- (id)_animationSettingsForHidingSideAppForPresentation;
- (id)_animationSettingsForRevealingSideAppForDismissal;
- (void)_animateDismissalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_animatePresentationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldAdjustScrollViewTracking;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (float)_opacityForIndex:(unsigned int)arg1 scrollProgress:(double)arg2;
- (BOOL)_shouldShowIconAndTitleInItemContainers;
- (void)_applyStyleToItemContainer:(id)arg1 forceRealBlur:(BOOL)arg2;
- (void)_updateScrollViewFrameAndContentSize;
- (float)_preferredVisibleMarginForTopPage;
- (void)_didRemoveVisibleItemContainerForDisplayItem:(id)arg1;
- (void)_didAddVisibleItemContainer:(id)arg1 forDisplayItem:(id)arg2;
- (double)_scrollProgressForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 progressPresented:(float)arg3 frameOrigin:(float)arg4 ignoringScrollOffset:(BOOL)arg5;
- (struct CGRect)_frameForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 transitionParameters:(CDStruct_3ee5880e)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(BOOL)arg5 ignoringKillingAdjustments:(BOOL)arg6 ignoringPinning:(BOOL)arg7;
- (float)_leadingOffsetForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 transitionParameters:(CDStruct_3ee5880e)arg3 scrollProgress:(double)arg4 ignoringKillingAdjustments:(BOOL)arg5;
- (BOOL)_shouldUseDepth;
- (struct CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

