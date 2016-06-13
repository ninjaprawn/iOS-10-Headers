//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SBHighlightView : UIView
{
    UIImageView *_highlight;
    float _highlightAlpha;
    float _highlightHeight;
}

+ (id)_highlightImageWithHeight:(float)arg1 alpha:(float)arg2;
@property(readonly, nonatomic) float highlightHeight; // @synthesize highlightHeight=_highlightHeight;
@property(readonly, nonatomic) float highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 highlightAlpha:(float)arg2 highlightHeight:(float)arg3;

@end
