//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MMMusicPlayerErrInfo;

@protocol MMMusicPlayerExt

@optional
- (void)onDataBuffering:(double)arg1;
- (void)onForceStopMusic;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onMusicPlayStatusChanged:(unsigned long long)arg1 error:(MMMusicPlayerErrInfo *)arg2;
- (void)onNeedSetPlayPercent;
- (void)onNewSeekTime:(double)arg1;
@end

