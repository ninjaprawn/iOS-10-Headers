//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBAppViewBackgroundView.h"
#import "SBWallpaperObserver.h"
#import "_SBFakeBlurObserver.h"

@class NSString, UIColor, UIImage, UIImageView, UIView<_SBFakeBlur>;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBAppViewBackgroundView>
{
    int _variant;
    UIColor *_wallpaperAverageColor;
    int _startStyle;
    int _endStyle;
    float _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    BOOL _shouldMaskBlur;
    BOOL _shouldMaskTint;
    BOOL _fullscreen;
    BOOL _forcesOpaque;
    BOOL _transformIgnoresRotation;
    BOOL _accessibilityReduceTransparencyEnabled;
}

+ (id)imageInRect:(struct CGRect)arg1 forVariant:(int)arg2 withStyle:(int)arg3 zoomFactor:(float)arg4 mask:(id)arg5 masksBlur:(BOOL)arg6 masksTint:(BOOL)arg7;
@property(retain, nonatomic) UIView *tintMaskingContainer; // @synthesize tintMaskingContainer=_tintMaskingContainer;
@property(retain, nonatomic) UIView *blurMaskingContainer; // @synthesize blurMaskingContainer=_blurMaskingContainer;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *transitionColorTintView; // @synthesize transitionColorTintView=_transitionColorTintView;
@property(retain, nonatomic) UIView *transitionGrayscaleTintView; // @synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView;
@property(retain, nonatomic) UIView<_SBFakeBlur> *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIView *colorTintView; // @synthesize colorTintView=_colorTintView;
@property(retain, nonatomic) UIView *grayscaleTintView; // @synthesize grayscaleTintView=_grayscaleTintView;
@property(retain, nonatomic) UIView<_SBFakeBlur> *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) BOOL transformIgnoresRotation; // @synthesize transformIgnoresRotation=_transformIgnoresRotation;
@property(nonatomic) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) BOOL forcesOpaque; // @synthesize forcesOpaque=_forcesOpaque;
- (void).cxx_destruct;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)updateBackgroundImage;
- (void)setAppearanceStorage:(id)arg1;
- (id)appearanceStorage;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)arg1;
- (void)_configureViews;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (BOOL)_needsBlurViewForStyle:(int)arg1;
- (void)_setTransitionFraction:(float)arg1;
@property(nonatomic) int wallpaperStyle;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (void)wallpaperDidChangeForVariant:(int)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(int)arg2;
- (void)layoutSubviews;
- (void)setMaskImage:(id)arg1 masksBlur:(BOOL)arg2 masksTint:(BOOL)arg3;
- (BOOL)currentTransitionStateIsOpaque;
- (void)setTransitionState:(CDStruct_04b3617e)arg1;
- (BOOL)prepareToAnimateToTransitionState:(inout CDStruct_04b3617e *)arg1;
- (void)setStyle:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithWallpaperVariant:(int)arg1 transformIgnoresRotation:(BOOL)arg2;
- (id)initWithWallpaperVariant:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL hasDiscreteWallpaperEffect;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
