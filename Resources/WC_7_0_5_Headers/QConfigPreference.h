//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QConfigPreference : NSObject
{
    NSString *_businessKey;
    NSString *_configDirectoryPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(readonly, copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
- (id)initWithBusinessKey:(id)arg1 configDirectoryPath:(id)arg2;

@end

