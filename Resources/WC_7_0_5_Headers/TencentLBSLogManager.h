//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TencentLBSLogManager : NSObject
{
    NSString *_appleDataPath;
    NSString *_tencentDataPath;
    NSString *_badDataPath;
    NSString *_calmanPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appleDataPath; // @synthesize appleDataPath=_appleDataPath;
@property(copy, nonatomic) NSString *badDataPath; // @synthesize badDataPath=_badDataPath;
@property(copy, nonatomic) NSString *calmanPath; // @synthesize calmanPath=_calmanPath;
- (void)createFileAtPath:(id)arg1;
- (void)deleteFileAtPath:(id)arg1;
- (id)getAllLocationData;
- (id)init;
- (void)newFile;
- (id)readFileToData:(id)arg1;
@property(copy, nonatomic) NSString *tencentDataPath; // @synthesize tencentDataPath=_tencentDataPath;
- (void)upLoadLogData;
- (void)upLoadLogData:(id)arg1;
- (void)writeAppleToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeBadLocationToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeCalmanDataToFile:(id)arg1;
- (void)writeDataToFile:(id)arg1 filePath:(id)arg2;
- (void)writeLogToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;

@end

