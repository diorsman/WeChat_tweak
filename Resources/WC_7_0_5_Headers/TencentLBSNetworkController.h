//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TencentLBSNetworkController : NSObject
{
    _Bool _useHttp;
    _Bool _startBeacon;
    _Bool _writeLog;
    _Bool _uploadLog;
    _Bool _load;
    _Bool _request;
    double _postTimeInterval;
    double _applistDayInterval;
    double _beaconTimeInterval;
    NSMutableArray *_rangedRegions;
    NSArray *_beaconUUIDs;
    NSString *_path;
    NSString *_file;
    NSMutableDictionary *_controller;
}

+ (id)aes_decrypt:(id)arg1;
+ (id)aes_encrypt:(id)arg1;
+ (id)decodeData:(id)arg1;
+ (id)decryptAes:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (id)encryptAes:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double applistDayInterval; // @synthesize applistDayInterval=_applistDayInterval;
@property(nonatomic) double beaconTimeInterval; // @synthesize beaconTimeInterval=_beaconTimeInterval;
@property(retain, nonatomic) NSArray *beaconUUIDs; // @synthesize beaconUUIDs=_beaconUUIDs;
@property(retain) NSMutableDictionary *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
- (id)getControllerDictionary;
- (id)init;
@property(nonatomic) _Bool load; // @synthesize load=_load;
- (void)loadCC;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) double postTimeInterval; // @synthesize postTimeInterval=_postTimeInterval;
@property(retain, nonatomic) NSMutableArray *rangedRegions; // @synthesize rangedRegions=_rangedRegions;
@property(nonatomic) _Bool request; // @synthesize request=_request;
- (void)requestCC;
@property(nonatomic) _Bool startBeacon; // @synthesize startBeacon=_startBeacon;
@property(nonatomic) _Bool uploadLog; // @synthesize uploadLog=_uploadLog;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(nonatomic) _Bool writeLog; // @synthesize writeLog=_writeLog;
- (void)updateCC:(id)arg1;

@end

