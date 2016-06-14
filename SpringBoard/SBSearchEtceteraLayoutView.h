//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BSUIScrollViewDelegate.h"

@class NSString, SBPagedScrollView, SBSearchEtceteraLayoutContentView, SBSearchEtceteraNotificationsLayoutContentView, SBSearchEtceteraSearchLayoutContentView, SBSearchEtceteraTodayLayoutContentView, UIPageControl;

@interface SBSearchEtceteraLayoutView : UIView <BSUIScrollViewDelegate>
{
    SBSearchEtceteraTodayLayoutContentView *_todayContentView;
    SBSearchEtceteraSearchLayoutContentView *_searchContentView;
    SBSearchEtceteraNotificationsLayoutContentView *_notificationsContentView;
    SBSearchEtceteraLayoutContentView *_visibleView;
    unsigned int _currentMode;
    SBPagedScrollView *_scrollView;
    UIView *_notificationsPageView;
    UIView *_todayPageView;
    UIPageControl *_pageControl;
    BOOL _todayContentUnderlapsNavBar;
    unsigned int _currentStyle;
    float _navigationBarTopInset;
    float _contentBottomInset;
    id <SBSearchEtceteraLayoutViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSearchEtceteraLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float contentBottomInset; // @synthesize contentBottomInset=_contentBottomInset;
@property(nonatomic) float navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(nonatomic) BOOL todayContentUnderlapsNavBar; // @synthesize todayContentUnderlapsNavBar=_todayContentUnderlapsNavBar;
@property(nonatomic) unsigned int currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) unsigned int currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) SBSearchEtceteraNotificationsLayoutContentView *notificationsContentView; // @synthesize notificationsContentView=_notificationsContentView;
@property(retain, nonatomic) SBSearchEtceteraSearchLayoutContentView *searchContentView; // @synthesize searchContentView=_searchContentView;
@property(retain, nonatomic) SBSearchEtceteraTodayLayoutContentView *todayContentView; // @synthesize todayContentView=_todayContentView;
@property(readonly, retain, nonatomic, getter=_pageControl) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, retain, nonatomic, getter=_visibleView) SBSearchEtceteraLayoutContentView *visibleView; // @synthesize visibleView=_visibleView;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (unsigned int)_indexOfTodayPageView;
- (unsigned int)_indexOfNotificationsPageView;
- (void)updateVisiblePages;
- (void)_updateScrollingEnabledForSupportedModes;
- (void)_updateScrollViewVisibilityForSupportedModes;
- (void)_resetContentOffsetForSupportedModes;
- (BOOL)_shouldAllowScrollingForStyle:(unsigned int)arg1;
- (unsigned int)_currentScrollViewMode;
- (unsigned int)_nextLogicalModeIfResigningSearch;
- (id)_contentViewForControllerMode:(unsigned int)arg1;
- (void)_setCurrentMode:(unsigned int)arg1 force:(BOOL)arg2;
- (void)updateViewForInitialPresentation;
- (void)_layoutPageControl;
- (void)layoutSubviews;
- (void)_addPageControl;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

