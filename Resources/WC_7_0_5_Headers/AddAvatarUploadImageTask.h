//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class NSString, UIImage;

@interface AddAvatarUploadImageTask : NSObject <PBMessageObserverDelegate, ICdnComMgrExt>
{
    unsigned int _state;
    id <AddAvatarUploadImageTaskDelegate> _delegate;
    NSString *_appId;
    UIImage *_uploadImage;
    NSString *_uploadFileName;
    NSString *_tmpFilePath;
    NSString *_imageCdnUrl;
    NSString *_imageCdnFileId;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)cancelUpload;
- (void)dealloc;
@property(nonatomic) __weak id <AddAvatarUploadImageTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAddAvatarHeadImgResp:(id)arg1;
@property(retain, nonatomic) NSString *imageCdnFileId; // @synthesize imageCdnFileId=_imageCdnFileId;
@property(retain, nonatomic) NSString *imageCdnUrl; // @synthesize imageCdnUrl=_imageCdnUrl;
- (id)initWithAppId:(id)arg1;
- (void)reset;
- (void)sendAddAvatarHeadImageReq;
- (void)setState:(unsigned int)arg1;
@property(retain, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
@property(retain, nonatomic) NSString *uploadFileName; // @synthesize uploadFileName=_uploadFileName;
@property(retain, nonatomic) UIImage *uploadImage; // @synthesize uploadImage=_uploadImage;
- (_Bool)startUploadByImage:(id)arg1;
- (_Bool)startUploadByImageCdnUrl:(id)arg1;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

