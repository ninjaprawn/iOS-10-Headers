//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLineFragment : NSObject
{
    unsigned int _index;
    float _lineWidth;
    struct _NSRange _range;
}

+ (id)fragmentWithIndex:(unsigned int)arg1 length:(unsigned int)arg2 lineWidth:(float)arg3;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)description;

@end

