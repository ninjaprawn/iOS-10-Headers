//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString, UIColor, UIView;

@interface SBDashBoardComponent : NSObject <NSCopying>
{
    BOOL _hidden;
    int _type;
    unsigned int _properties;
    NSString *_identifier;
    int _priority;
    int _flag;
    float _alpha;
    NSString *_string;
    UIColor *_color;
    NSNumber *_value;
    UIView *_view;
    struct CGPoint _offset;
}

+ (id)callToActionLabel;
+ (id)tinting;
+ (id)wallpaper;
+ (id)slideableContent;
+ (id)pageContent;
+ (id)pageControl;
+ (id)logoutButton;
+ (id)statusBar;
+ (id)dateView;
+ (id)componentWithType:(int)arg1;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int properties; // @synthesize properties=_properties;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)resetProperties:(unsigned int)arg1;
- (void)resetAllProperties;
- (BOOL)hasValueForProperty:(unsigned int)arg1;
- (id)offset:(struct CGPoint)arg1;
- (id)view:(id)arg1;
- (id)value:(id)arg1;
- (id)string:(id)arg1;
- (id)flag:(int)arg1;
- (id)hidden:(BOOL)arg1;
- (id)identifier:(id)arg1;
- (id)priority:(int)arg1;
- (id)init;

@end

