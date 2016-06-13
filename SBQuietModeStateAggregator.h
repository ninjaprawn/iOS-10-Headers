//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"

@class BBObserver, NSString;

@interface SBQuietModeStateAggregator : NSObject <BBObserverDelegate>
{
    BOOL _quietModeEnabled;
    BOOL _quietModeEnabledAndActive;
    unsigned int _quietModeState;
    BBObserver *_observer;
}

@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) unsigned int quietModeState; // @synthesize quietModeState=_quietModeState;
@property(readonly, nonatomic, getter=isQuietModeEnabledAndActive) BOOL quietModeEnabledAndActive; // @synthesize quietModeEnabledAndActive=_quietModeEnabledAndActive;
@property(readonly, nonatomic, getter=isQuietModeEnabled) BOOL quietModeEnabled; // @synthesize quietModeEnabled=_quietModeEnabled;
- (void).cxx_destruct;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned int)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
