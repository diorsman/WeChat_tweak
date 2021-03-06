//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "BaseScanLogicDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavImagePreViewDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IFavoritesExt.h"
#import "WCActionSheetDelegate.h"

@class ForwardMessageLogicController, NSString, ScanQRCodeLogicController, WCActionSheetWithScanWXCode;

@interface FavMultiImageDetailViewController : FavBaseDetailViewController <BaseScanLogicDelegate, WCActionSheetDelegate, IFavoritesExt, ForwardMessageLogicDelegate, FavImagePreViewDelegate, FavForwardLogicDelegate>
{
    unsigned int m_uiLongPressedIndex;
    _Bool m_hasIllegalData;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_favImgLongPressAction;
    ForwardMessageLogicController *m_forwardMsgLogic;
}

- (void).cxx_destruct;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)checkIllegalTypeWithDataList:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (id)getCurrentViewController;
- (id)getFavForawrdViewController;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (id)initWithFavItem:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2WC;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onSaveFavDataImg;
- (void)onScanEnds;
- (void)onWillLongPressFavPreImage:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

