//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TenpayLogHooker : NSObject
{
    CDUnknownBlockType logHooker;
}

+ (id)shareInstance;
- (CDUnknownBlockType)getHooker;
@property(copy, nonatomic) CDUnknownBlockType logHooker; // @synthesize logHooker;
- (void)setHooker:(CDUnknownBlockType)arg1;
- (void)writeLog:(id)arg1;

@end

