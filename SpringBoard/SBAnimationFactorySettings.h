//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBAnimationFactorySettings : SBUISettings
{
    BOOL _isArchiveValue;
    BOOL _slowAnimations;
    float _slowDownFactor;
}

+ (id)settingsControllerModule;
@property(nonatomic) float slowDownFactor; // @synthesize slowDownFactor=_slowDownFactor;
@property(nonatomic) BOOL slowAnimations; // @synthesize slowAnimations=_slowAnimations;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setDefaultValues;

@end

