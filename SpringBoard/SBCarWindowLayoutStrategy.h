//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWindowLayoutStrategy.h"

@class NSString;

@interface SBCarWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    id <SBStarkSessionConfiguring> _configuration;
    unsigned int _layout;
}

+ (id)strategyWithConfiguration:(id)arg1 layout:(unsigned int)arg2;
+ (struct UIEdgeInsets)statusBarEdgeInsetsForConfiguration:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_isLayoutBoundsOnly;
- (BOOL)shouldClipForWindow:(id)arg1;
- (struct CGRect)frameForWindow:(id)arg1;
- (id)initWithConfiguration:(id)arg1 layout:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

