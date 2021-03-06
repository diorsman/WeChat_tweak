//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCBizTipViewDelegate.h"
#import "WCPayCountryCodeAndPhoneNumberItemDelegate.h"
#import "WCPayCountryCodeItemDelegate.h"

@class NSString, RichTextView, UIButton, UILabel, WCBaseTextFieldItem, WCBizInfoGroup, WCBizTipView, WCPayCVVItem, WCPayCountryCodeAndPhoneNumberItem, WCPayCountryCodeItem, WCPayPhoneTextItem, WCPayValidDateItem;

@interface WCPayResetBalanceTelephoneViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, ILinkEventExt, WCBizTipViewDelegate>
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id <WCPayResetBalanceTelephoneViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    _Bool m_bAutoFilledCardNumber;
    _Bool m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
    WCPayCountryCodeItem *_countryCodeItem;
    WCPayCountryCodeAndPhoneNumberItem *_countryCodeAndPhoneItem;
}

- (void).cxx_destruct;
- (void)CheckData;
- (void)FillCardNumberCancel;
- (void)OnClearAutoFilledCardNumber;
- (void)OnWCBizTipViewClosed;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
@property(retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem; // @synthesize countryCodeAndPhoneItem=_countryCodeAndPhoneItem;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
@property(retain, nonatomic) WCPayCountryCodeItem *countryCodeItem; // @synthesize countryCodeItem=_countryCodeItem;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)footerTipAction:(id)arg1;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (_Bool)isSupportForeignPhoneNum;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardNumber; // @synthesize m_bAutoFilledCardNumber;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)scanAction:(id)arg1;
- (void)setAutoFilledCardNumber;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setShowedFavorInfo;
- (void)setTitle:(id)arg1;
- (void)showDetailTip;
- (void)startLogicLoading;
- (void)stopLogicLoading;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

