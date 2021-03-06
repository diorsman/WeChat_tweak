//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, CALayer, NSURL;

@interface AVSECommand : NSObject
{
    AVMutableComposition *_mutableComposition;
    AVMutableVideoComposition *_mutableVideoComposition;
    AVMutableAudioMix *_mutableAudioMix;
    CALayer *_watermarkLayer;
    NSURL *_outputURL;
}

- (void).cxx_destruct;
- (id)initWithComposition:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
@property(retain) AVMutableAudioMix *mutableAudioMix; // @synthesize mutableAudioMix=_mutableAudioMix;
@property(retain) AVMutableComposition *mutableComposition; // @synthesize mutableComposition=_mutableComposition;
@property(retain) AVMutableVideoComposition *mutableVideoComposition; // @synthesize mutableVideoComposition=_mutableVideoComposition;
@property(retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void)performWithAsset:(id)arg1;
@property(retain) CALayer *watermarkLayer; // @synthesize watermarkLayer=_watermarkLayer;

@end

