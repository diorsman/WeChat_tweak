//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMKCgi : NSObject
{
    struct Handle<std::__1::shared_ptr<kinda::KCgi>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getCgiId;
- (id)getCgiUrl;
- (int)getChannelType;
- (_Bool)getNeedNotify;
- (id)getRequestData;
- (int)getRetryCount;
- (id)getRouteInfo;
- (int)getTimeout;
- (id)initWithCpp:(const shared_ptr_3cc194db *)arg1;
- (void)onResp:(int)arg1 responseData:(id)arg2;

@end

