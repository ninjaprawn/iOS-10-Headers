//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBAppViewHostRequester.h"
#import "SBDeckSwitcherItemContainerDelegate.h"
#import "SBDeckSwitcherPageViewProviderDelegate.h"
#import "SBMainAppSwitcherContentViewControlling.h"
#import "SBSwitcherAppSuggestionViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SBAppSwitcherScrollView, SBAppSwitcherSettings, SBAppView, SBBestAppSuggestion, SBDeckSwitcherPageViewProvider, SBDisplayItem, SBMainDisplayLayoutState, SBOrientationTransformWrapperView, SBSwitcherAppSuggestionViewController, SBWallpaperEffectView, SBWorkspaceTransitionRequest, UIView;

@interface SBDeckSwitcherViewController : UIViewController <SBDeckSwitcherPageViewProviderDelegate, SBAppViewHostRequester, UIScrollViewDelegate, _UISettingsKeyObserver, SBSwitcherAppSuggestionViewControllerDelegate, SBDeckSwitcherItemContainerDelegate, SBMainAppSwitcherContentViewControlling>
{
    id <SBMainAppSwitcherContentViewControllerDelegate> _delegate;
    NSMutableArray *_displayItems;
    SBDisplayItem *_returnToDisplayItem;
    SBDisplayItem *_returnToSideDisplayItem;
    SBDisplayItem *_initialDisplayItem;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    SBAppSwitcherScrollView *_scrollView;
    UIView *_backgroundDarkeningView;
    NSMutableDictionary *_visibleItemContainers;
    float _topmostItemMinimumFrameXOrigin;
    double _topmostItemMinimumScale;
    struct _NSRange _visibleItemRange;
    struct CGPoint _scrollViewLastContentOffset;
    BOOL _scrollViewLastScrolledForward;
    SBSwitcherAppSuggestionViewController *_appSuggestionViewController;
    SBDeckSwitcherPageViewProvider *_pageViewProvider;
    CDStruct_3ee5880e _transitionParameters;
    BOOL _transitionInProgress;
    BOOL _transitionPresenting;
    BOOL _transitionInteractive;
    BOOL _transitionFinishingAfterBeingInteractive;
    BOOL _transitionDidFinishDismissing;
    BOOL _didSendViewPresentingDismissing;
    SBWorkspaceTransitionRequest *_transitionRequest;
    BOOL _shouldHideTitlesAndIconsForInteraction;
    float _initialTitleAndIconOpacityTransitionProgress;
    SBAppView *_hideSideAppView;
    NSMutableArray *_blocksToPerformWhenScrollingEnds;
    NSMutableDictionary *_insertionRemovalStatus;
    BOOL _configuredScrollviewForThisPresentation;
    SBAppSwitcherSettings *_settings;
    BOOL _isScrolling;
    int _grabbedDraggingIndex;
    float _inputContentOffsetAdjustmentForIndexChange;
    float _outputContentOffsetAdjustmentForIndexChange;
    struct CGPoint _start;
    struct CGPoint _originalLocationInView;
    BOOL _invalidated;
    BOOL _isWallpaperConfigured;
}

+ (float)snapshotScale;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState; // @synthesize _initialLayoutState;
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem; // @synthesize _initialDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem; // @synthesize _returnToSideDisplayItem;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem; // @synthesize _returnToDisplayItem;
- (void).cxx_destruct;
- (int)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_applyPrototypeSettingsToConstants;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (float)minimumVerticalTranslationForKillingOfContainer:(id)arg1;
- (void)scrollViewKillingProgressUpdated:(float)arg1 ofContainer:(id)arg2;
- (struct CGRect)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2;
- (BOOL)shouldShowIconAndLabelOfContainer:(id)arg1;
- (void)selectedDisplayItemOfContainer:(id)arg1;
- (BOOL)canSelectDisplayItemOfContainer:(id)arg1 numberOfTaps:(int)arg2;
- (void)killDisplayItemOfContainer:(id)arg1 withVelocity:(float)arg2;
- (BOOL)isDisplayItemOfContainerRemovable:(id)arg1;
- (id)containerViewControllerForPageViewFromProvider:(id)arg1;
- (struct CGSize)contentSizeForDisplayItem:(id)arg1 fromProvider:(id)arg2;
- (struct CGSize)sizeForDisplayItem:(id)arg1 fromProvider:(id)arg2;
- (id)initialLayoutStateForPageViewFromProvider:(id)arg1;
- (id)nextDisplayItemForInteractiveTransitionForPageViewFromProvider:(id)arg1;
- (id)initialDisplayItemForPageViewFromProvider:(id)arg1;
- (int)orientationForPageViewFromProvider:(id)arg1;
- (struct CGPoint)_adjustedOffsetForIndex:(int)arg1 offset:(struct CGPoint)arg2 start:(struct CGPoint)arg3 originalLocationInView:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(double *)arg6 verticalVelocity:(double *)arg7;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (float)_scaleTransformedXOrigin:(float)arg1 scrollProgress:(float)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_cancelScrolling;
- (BOOL)_scrollViewThinksItsScrolling;
- (void)setScrolling:(BOOL)arg1;
- (float)_killGestureHysteresis;
- (id)_itemContainerForDisplayItem:(id)arg1;
- (BOOL)_isReadyForScrollViewLayout;
- (id)_visibleItemContainers;
- (struct _NSRange)_visibleItemRange;
- (double)_transitionProgress;
- (double)_insertionRemovalProgressForDisplayItem:(id)arg1;
- (id)_scrollView;
- (id)_displayItems;
- (BOOL)_shouldAdjustScrollViewTracking;
- (BOOL)_shouldShowIconAndTitleInItemContainers;
- (float)_preferredVisibleMarginForTopPage;
- (void)_didRemoveVisibleItemContainerForDisplayItem:(id)arg1;
- (void)_didAddVisibleItemContainer:(id)arg1 forDisplayItem:(id)arg2;
- (BOOL)_shouldUseDepth;
- (id)_animationFactoryForWallpaper;
- (BOOL)_shouldScrollForDismissalToItem:(id)arg1;
- (BOOL)_shouldFadeInToRevealSideAppForDismissal;
- (id)_animationSettingsForHidingSideAppForPresentation;
- (id)_animationSettingsForRevealingSideAppForDismissal;
- (void)_animateDismissalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_animatePresentationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (float)_titleAndIconOpacityForIndex:(unsigned int)arg1;
- (float)_titleOpacityForIndex:(unsigned int)arg1 scrollProgress:(double)arg2;
- (float)_titleOpacityForIndex:(unsigned int)arg1;
- (float)_opacityForIndex:(unsigned int)arg1 scrollProgress:(double)arg2;
- (float)_opacityForIndex:(unsigned int)arg1;
- (float)_blurForIndex:(unsigned int)arg1 scrollProgress:(double)arg2;
- (float)_blurForIndex:(unsigned int)arg1;
- (void)_applyVisibleMarginToItemContainer:(id)arg1;
- (BOOL)_priorIndex:(int)arg1 fullyObscuresCardForItemContainer:(id)arg2;
- (void)_cleanupDisappearedItemContainers;
- (void)_applyStyleToItemContainer:(id)arg1 forceRealBlur:(BOOL)arg2;
- (void)_applyStyleToItemContainer:(id)arg1;
- (void)_applyStyleToVisibleItemContainers;
- (struct CGSize)_contentSizeForPageViewOfDisplayItem:(id)arg1;
- (struct CGSize)_sizeForPageViewOfDisplayItem:(id)arg1 progressPresented:(float)arg2;
- (void)_setNormalizedScrollProgress:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_normalizedScrollProgress;
- (double)_desiredXOriginForQuantizedTopPage;
- (void)_setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateScrollViewContentOffsetToCenterIndex:(unsigned int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateContentSizePreservingScrollPositionOfPriorIndex:(unsigned int)arg1 subsequentIndex:(unsigned int)arg2 acrossMutation:(CDUnknownBlockType)arg3;
- (void)_updateContentSizePreservingScrollPositionOfDisplayItem:(id)arg1 atOriginalIndex:(unsigned int)arg2 acrossMutation:(CDUnknownBlockType)arg3;
- (void)_updateScrollViewFrameAndContentSize;
- (float)_contentSizeDeltaForItemDeletion;
- (struct CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned int)arg1;
- (BOOL)_isAboveTransitioningItemDuringDismissalAfterInteractivePresentationAndWillEndUpOffscreen:(id)arg1;
- (BOOL)_isAboveTransitioningItemDuringDismissalAfterInteractivePresentation:(id)arg1;
- (BOOL)_isAboveTransitioningItemDuringPresentationAndWillEndUpOffscreen:(id)arg1;
- (BOOL)_isAboveTransitioningItemDuringPresentation:(id)arg1;
- (BOOL)_displayItemWantsToBeKeptInViewHierarchy:(id)arg1;
- (id)_topVisibleItem;
- (BOOL)_isIndexVisible:(unsigned int)arg1;
- (BOOL)_isItemVisible:(id)arg1;
- (void)_removeVisibleItemContainerForDisplayItem:(id)arg1;
- (void)_updateVisibleItems;
- (struct CGAffineTransform)_transformForIndex:(unsigned int)arg1 progressPresented:(float)arg2 scrollProgress:(double)arg3;
- (double)_scaleForTransformForIndex:(unsigned int)arg1 progressPresented:(float)arg2 scrollProgress:(double)arg3;
- (double)_scaleForPresentedProgress:(float)arg1;
- (struct CGAffineTransform)_transformForIndex:(unsigned int)arg1;
- (double)_scrollProgressForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 progressPresented:(float)arg3 frameOrigin:(float)arg4 ignoringScrollOffset:(BOOL)arg5;
- (struct CGRect)_frameForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 transitionParameters:(CDStruct_3ee5880e)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(BOOL)arg5 ignoringKillingAdjustments:(BOOL)arg6 ignoringPinning:(BOOL)arg7;
- (float)_leadingOffsetForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 transitionParameters:(CDStruct_3ee5880e)arg3 scrollProgress:(double)arg4 ignoringKillingAdjustments:(BOOL)arg5;
- (double)_scrollProgressForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 depth:(double)arg3 ignoringKillOffset:(BOOL)arg4;
- (double)_depthForIndex:(unsigned int)arg1 displayItemsCount:(unsigned int)arg2 scrollProgress:(double)arg3 ignoringKillOffset:(BOOL)arg4;
- (float)_effectiveInsertionRemovalSlideInProgressForIndex:(unsigned int)arg1;
- (float)_effectiveIndexForIndex:(unsigned int)arg1;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned int)arg1;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned int)arg1 withUntransformedFrame:(struct CGRect)arg2 scrollProgress:(float)arg3;
- (struct CGRect)_frameForIndex:(unsigned int)arg1;
- (void)_ensureCardSubviewOrdering;
- (void)viewWillLayoutSubviews;
- (void)_layoutDisplayItem:(id)arg1;
- (void)_layoutDisplayItem:(id)arg1 withZoomScale:(float)arg2;
- (void)_layoutFirstDisplayItem;
- (void)_getItemToKeepStill:(id *)arg1 andDirection:(unsigned int *)arg2 whenRemovingItem:(id)arg3;
- (void)_getIndiciesAndDirectionToPreserveScrollPositionWhenInsertingAtIndex:(unsigned int)arg1 prior:(unsigned int *)arg2 subsequent:(unsigned int *)arg3 direction:(unsigned int *)arg4 animated:(BOOL)arg5;
- (id)_insertionRemovalSlideAnimation;
- (id)_insertingOrRemovingDisplayItems;
- (void)_endInsertionOrRemovalOfDisplayItem:(id)arg1;
- (CDStruct_dab69fe5)_insertionRemovalStatusForDisplayItem:(id)arg1;
- (void)_updateProgressOfInsertingOrRemovingDisplayItem:(id)arg1 progress:(float)arg2;
- (void)_beginInsertionOrRemovalOfDisplayItem:(id)arg1 direction:(unsigned int)arg2 style:(unsigned int)arg3 progress:(float)arg4;
- (int)_topIndexForLocationInScrollView:(struct CGPoint)arg1;
- (unsigned int)_indexForPresentationOrDismissalIsPresenting:(BOOL)arg1;
- (void)_sendViewDismissingToPageViewsForTransitionRequest:(id)arg1;
- (void)_sendViewPresentingToPageViewsForTransitionRequest:(id)arg1;
- (void)endTransitionWithSuccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endInteractionWithCommitment:(BOOL)arg1;
- (id)nextDisplayItem;
- (void)setTransitionParameters:(CDStruct_3ee5880e)arg1;
- (void)startInteractiveTransition:(BOOL)arg1 presenting:(BOOL)arg2 withRequest:(id)arg3;
- (BOOL)_isDismissing;
- (id)pageForDisplayItem:(id)arg1;
- (void)_revealSideAppForDismissalWithTransitionRequest:(id)arg1;
- (void)_unhostSideApp;
- (void)_hideSideAppForPresentation;
- (void)_cleanupWallpaper;
- (void)_animateWallpaperDismissal;
- (void)_animateWallpaperPresentationForTransitionRequest:(id)arg1;
- (void)_minimizeScrollDistanceForDismissalToItem:(id)arg1;
- (void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)orientationForSuggestionViewController:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
- (void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDisplayItem:(id)arg1 forReason:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertDisplayItem:(id)arg1 atIndex:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasInteractiveContentAtBottomOfScreen;
- (void)invalidate;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

