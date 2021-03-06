//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSArray, NSURL;

@interface SBManyApplicationsAlertItem : SBAlertItem
{
    NSURL *_url;
    NSArray *_applications;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)deactivateForButton;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithURL:(id)arg1 applications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

