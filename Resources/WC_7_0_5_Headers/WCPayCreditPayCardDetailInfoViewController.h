//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCActionSheetDelegate.h"

@class NSString, UIButton;

@interface WCPayCreditPayCardDetailInfoViewController : WCPayBaseViewController <WCActionSheetDelegate>
{
    id <WCPayCreditPayCardDetailInfoViewControllerDelegate> m_delegate;
    UIButton *m_footerButton;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addEachSection;
- (void)addExpiredSection;
- (void)dealloc;
- (id)getBillTipWording;
- (id)getContactBankFooterView;
- (id)getTableViewHeaderView;
- (void)makeCreditCanUseCell:(id)arg1;
- (void)makeCreditUsedCell:(id)arg1;
- (void)makeExtCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onClickExtCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)onOperate;
- (void)onUnBind;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadNavigationBar;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)showBankDetailCell;
- (void)showBillAmountCell;
- (void)showCreditCardDetailInfoCell;
- (void)showCreditRightsCell;
- (void)showRepayCell;
- (void)showUpgradeCell;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

