//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAbstractDefaultDomain.h"

@class NSArray, NSString;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain
{
}

+ (BOOL)__useDynamicMethodResolution;
- (void)flushExternalCaches;
- (void)removeFormattedPhoneNumberFromGlobalPreferences;
@property(retain, nonatomic) NSArray *keyboards;
@property(retain, nonatomic) NSArray *languages;
@property(retain, nonatomic) NSString *locale;
- (id)init;

@end

