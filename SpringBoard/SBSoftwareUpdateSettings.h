//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBSoftwareUpdateSettings : SBUISettings
{
    unsigned int _defaultRepopDuration;
    unsigned int _repopStrategyTest;
}

+ (id)settingsControllerModule;
@property(nonatomic) unsigned int repopStrategyTest; // @synthesize repopStrategyTest=_repopStrategyTest;
@property(nonatomic) unsigned int defaultRepopDuration; // @synthesize defaultRepopDuration=_defaultRepopDuration;
- (void)setDefaultValues;

@end

