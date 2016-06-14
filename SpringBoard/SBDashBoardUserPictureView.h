//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBUILegibility.h"

@class CNContact, NSString, _UILegibilitySettings, _UILegibilityView;

@interface SBDashBoardUserPictureView : SBDashBoardViewBase <SBUILegibility>
{
    CNContact *_contact;
    _UILegibilityView *_monogramLegibilityView;
    float _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    float _diameter;
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(float)arg2;
@property(nonatomic) float diameter; // @synthesize diameter=_diameter;
@property(nonatomic) float strength; // @synthesize strength=_legibilityStrength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_regenerateImage;
- (id)presentationRegions;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

