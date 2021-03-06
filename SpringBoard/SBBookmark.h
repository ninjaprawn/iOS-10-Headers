//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLeafIconDataSource.h"

@class NSString, NSURL, UIWebClip;

@interface SBBookmark : NSObject <SBLeafIconDataSource>
{
    UIWebClip *_webClip;
}

+ (id)bookmarkWithWebClip:(id)arg1;
@property(readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (void).cxx_destruct;
- (BOOL)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3;
- (BOOL)iconAllowsLaunch:(id)arg1;
- (BOOL)iconCompleteUninstall:(id)arg1;
- (BOOL)iconSupportsUninstall:(id)arg1;
- (BOOL)iconIsBeta:(id)arg1;
- (BOOL)iconIsRecentlyUpdated:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (BOOL)iconProgressIsPaused:(id)arg1;
- (float)iconProgressPercent:(id)arg1;
- (int)iconProgressState:(id)arg1;
- (BOOL)iconCanTightenLabel:(id)arg1;
- (BOOL)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned int)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(int)arg2;
- (BOOL)isUninstallSupported;
- (void)_deviceUnlockedForFirstTime:(id)arg1;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithWebClip:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

