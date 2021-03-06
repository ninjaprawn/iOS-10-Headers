//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBPolygon : NSObject
{
    NSMutableArray *_mutablePoints;
    NSMutableArray *_weights;
    struct CGPoint _centroid;
    struct CGPoint _weightedCentroid;
}

+ (id)_sortPoints:(id)arg1;
+ (struct CGPoint)_pointAtIndex:(unsigned int)arg1 ofPointArray:(id)arg2;
@property(nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=_weightedCentroid;
@property(retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights; // @synthesize weights=_weights;
@property(nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
- (void).cxx_destruct;
- (float)_meanRadius;
- (float)_meanFingertipRowAngle;
- (float)_baseOrientation;
- (void)_translate:(struct CGPoint)arg1;
- (void)_rotate:(float)arg1;
- (void)_scale:(float)arg1;
- (void)_flipHorizontally;
- (void)_applyTransform:(struct CGAffineTransform)arg1;
- (unsigned int)_thumbIndex;
- (BOOL)_isLeftHanded;
- (void)_updateWeightedCentroid;
- (void)_updateWeights;
- (void)_updateCentroid;
- (void)_updateProperties;
- (float)_weightAtIndex:(unsigned int)arg1;
- (struct CGPoint)_pointAtIndex:(unsigned int)arg1;
- (void)enumeratePointsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) float distanceOfFarthestPointFromCentroid;
@property(readonly, nonatomic) unsigned int pointCount;
- (id)points;
- (id)description;
- (id)initWithPoints:(id)arg1;
- (id)initWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned int)arg2;

@end

