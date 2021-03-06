//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImageScrollView.h"

#import "MMAssetPickerBrowserViewProtocol.h"

@class MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString;

@interface MMImagePreviewBrowserView : ImageScrollView <MMAssetPickerBrowserViewProtocol>
{
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void)loadAsset;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

