//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class DeviceAudioParam, DeviceVideoParam;

@interface ConfDeviceParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeviceAudioParam *audioParam; // @dynamic audioParam;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(retain, nonatomic) DeviceVideoParam *videoParam; // @dynamic videoParam;

@end
