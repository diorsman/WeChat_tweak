//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMHevcHelper, NSMutableDictionary, NSURL;

@interface MMImageLoaderReqContext : NSObject
{
    _Bool _isRetry;
    _Bool _isDownLoadHevc;
    _Bool _isReqHevc;
    _Bool _isOpenBlankMonitor;
    unsigned int _imgType;
    int _fromType;
    unsigned int _hevcIdKeyID;
    unsigned int _hevcKvStatId;
    unsigned int _posInTL;
    NSURL *_imgUrl;
    NSMutableDictionary *_extraInfo;
    MMHevcHelper *_hevcHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void)flushHevcIdKeyEvents;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) MMHevcHelper *hevcHelper; // @synthesize hevcHelper=_hevcHelper;
@property(nonatomic) unsigned int hevcIdKeyID; // @synthesize hevcIdKeyID=_hevcIdKeyID;
@property(nonatomic) unsigned int hevcKvStatId; // @synthesize hevcKvStatId=_hevcKvStatId;
@property(nonatomic) unsigned int imgType; // @synthesize imgType=_imgType;
@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;
- (id)initWithImgType:(unsigned int)arg1 imgUrl:(id)arg2 fromType:(int)arg3 hevcIdKeyID:(unsigned int)arg4 hevcKvStatId:(unsigned int)arg5 posInTL:(unsigned int)arg6 isOpenBlankMonitor:(_Bool)arg7;
@property(nonatomic) _Bool isDownLoadHevc; // @synthesize isDownLoadHevc=_isDownLoadHevc;
@property(readonly, nonatomic) _Bool isOpenBlankMonitor; // @synthesize isOpenBlankMonitor=_isOpenBlankMonitor;
@property(nonatomic) _Bool isReqHevc; // @synthesize isReqHevc=_isReqHevc;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(readonly, nonatomic) unsigned int posInTL; // @synthesize posInTL=_posInTL;
- (void)reportHevcIdKeyEvent:(int)arg1;
- (void)reportHevcIdKeyEvent:(int)arg1 value:(unsigned int)arg2;
- (void)reportHevcKvStat:(id)arg1;

@end

