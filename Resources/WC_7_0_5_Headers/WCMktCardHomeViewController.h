//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMktCardHomeLogicControllerDelegate.h"
#import "WCMktMerchantItemCellDelegate.h"
#import "WCMktStoreSectionCellDelegate.h"
#import "WCNewCardDetailViewControllerDelegate.h"

@class MMTableView, NSString, WCMktCardHomeLogicController;

@interface WCMktCardHomeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCMktCardHomeLogicControllerDelegate, WCMktMerchantItemCellDelegate, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate, WCMktStoreSectionCellDelegate>
{
    WCMktCardHomeLogicController *_logicController;
    MMTableView *_tableView;
    NSString *_currentSelectCardDetailMerchantID;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSString *currentSelectCardDetailMerchantID; // @synthesize currentSelectCardDetailMerchantID=_currentSelectCardDetailMerchantID;
- (void)faqButtonClick;
- (id)genFooterButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)genTableFooterView;
- (id)getViewController;
- (void)handleHeaderRefresh;
- (void)handleMerchantInfoUpdateWithCardData:(id)arg1;
@property(retain, nonatomic) WCMktCardHomeLogicController *logicController; // @synthesize logicController=_logicController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)arg1 mchID:(id)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)arg1;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)arg1;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onTableViewNeedRefresh;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onUpdateStoreElemDataSuccWithIndexPath:(id)arg1;
- (void)onUpdateTopCellWithIndexPath:(id)arg1;
- (void)onUseCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)rightBarButtonClick;
- (void)scrollToRowWithIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupData;
- (void)setupEmptyView:(id)arg1;
- (void)setupTableView;
- (void)setupView;
- (void)storeCellClickSortrule;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateFooterView;
- (void)updateRightBarButton;
- (_Bool)useBlackStatusbar;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

