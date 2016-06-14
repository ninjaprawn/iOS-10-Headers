//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBIcon, SBIconView, _UILegibilitySettings;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    BOOL _accessibilityIncreaseContrastEnabled;
    BOOL _wantsFocusHighlight;
    SBIcon *_icon;
    SBIconView *_iconView;
    id <SBIconViewDelegate> _iconViewDelegate;
    Class _iconViewClass;
    int _iconLocation;
    _UILegibilitySettings *_settings;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL wantsFocusHighlight; // @synthesize wantsFocusHighlight=_wantsFocusHighlight;
@property(nonatomic) BOOL accessibilityIncreaseContrastEnabled; // @synthesize accessibilityIncreaseContrastEnabled=_accessibilityIncreaseContrastEnabled;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) int iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(nonatomic) __weak id <SBIconViewDelegate> iconViewDelegate; // @synthesize iconViewDelegate=_iconViewDelegate;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (BOOL)_hasValidInputs;
- (id)_font;
- (float)_scale;
- (BOOL)_canUseMemoryPool;
- (id)_focusHighlightColor;
- (struct CGSize)_maxSize;
- (BOOL)_canTightenLabel;
- (BOOL)_canEllipsizeLabel;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 forLocation:(int)arg2;
- (id)buildParameters;

@end

