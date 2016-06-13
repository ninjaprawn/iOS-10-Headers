//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"

@class NSString;

@interface SBAppSwitcherServiceCellView : UIView <SBMainAppSwitcherPageContentView>
{
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg1;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
