//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IWebNetTaskCallBack.h"

@class MMTimer, NSString;

@interface MMResourceCdnDownloaderNotifier : IWebNetTaskCallBack
{
    id <MMResourceCdnDownloaderNotifierDelegate> _delegate;
    NSString *_identifier;
    MMTimer *_timer;
}

- (void).cxx_destruct;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <MMResourceCdnDownloaderNotifierDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidateTimer;
- (void)notifyWithDownloadInfo:(id)arg1;
- (void)onTimeout;
- (void)registerExtension;
- (void)scheduleTimer;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
- (void)startWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)stop;
- (void)unregisterExtension;

@end

