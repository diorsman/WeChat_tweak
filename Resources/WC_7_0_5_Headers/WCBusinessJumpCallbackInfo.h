//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WCBusinessJumpCallbackInfo : NSObject
{
    long long _sceneValue;
    NSString *_appid;
    NSString *_callbackUrl;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) long long sceneValue; // @synthesize sceneValue=_sceneValue;

@end

