//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WARemoteJSCoreIDWrap : NSObject
{
    unsigned int _jscType;
    unsigned int _jscIndex;
    NSString *_jscID;
    NSString *_jscName;
}

+ (id)jscIDForType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
+ (id)jscNameForType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
@property(copy, nonatomic) NSString *jscID; // @synthesize jscID=_jscID;
@property(nonatomic) unsigned int jscIndex; // @synthesize jscIndex=_jscIndex;
@property(copy, nonatomic) NSString *jscName; // @synthesize jscName=_jscName;
@property(nonatomic) unsigned int jscType; // @synthesize jscType=_jscType;

@end

