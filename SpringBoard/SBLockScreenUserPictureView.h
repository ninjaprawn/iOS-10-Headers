//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayView.h"

@class CNContact, _UILegibilityView;

@interface SBLockScreenUserPictureView : SBLockOverlayView
{
    CNContact *_contact;
    float _strength;
    _UILegibilityView *_monogramLegibilityView;
    float _diameter;
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(float)arg2;
@property(nonatomic) float diameter; // @synthesize diameter=_diameter;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_regenerateImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned int)arg2;

@end
