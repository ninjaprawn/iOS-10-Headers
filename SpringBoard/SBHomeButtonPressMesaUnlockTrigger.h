//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMesaUnlockTrigger.h"

@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger
{
    BOOL _menuButtonDown;
    BOOL _primed;
}

- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (void)screenOff;
- (BOOL)bioUnlock;
- (id)succinctDescriptionBuilder;
- (id)description;

@end

