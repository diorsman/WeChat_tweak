//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCAdFullCardGestureInfo : NSObject <NSCoding>
{
    unsigned long long _startTime;
    unsigned long long _endTime;
    NSString *_points;
    double _distance;
    NSString *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
- (id)getLineColor;
- (id)getTargetCGPointsArray;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *points; // @synthesize points=_points;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;

@end

