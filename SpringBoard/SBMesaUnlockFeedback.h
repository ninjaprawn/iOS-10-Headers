//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBMesaUnlockFeedback : NSObject
{
    unsigned int _vibration;
    BOOL _showPasscode;
    BOOL _jiggleLock;
}

@property(nonatomic) BOOL jiggleLock; // @synthesize jiggleLock=_jiggleLock;
@property(nonatomic) unsigned int vibration; // @synthesize vibration=_vibration;
@property(nonatomic) BOOL showPasscode; // @synthesize showPasscode=_showPasscode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

