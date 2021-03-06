//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WASubscriptionMessagePageSheetContentViewProtocol.h"
#import "WASubscriptionMessagePageSheetFooterViewDelegate.h"
#import "WASubscriptionMessagePageSheetHeaderViewDelegate.h"

@class NSString, UILabel, WASubscriptionMessagePageSheetFooterView, WASubscriptionMessagePageSheetHeaderView, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessagePageSheetSingleStyleView : MMUIView <WASubscriptionMessagePageSheetHeaderViewDelegate, WASubscriptionMessagePageSheetFooterViewDelegate, WASubscriptionMessagePageSheetContentViewProtocol>
{
    id <WASubscriptionMessagePageSheetContentViewDelegate> contentViewDelegate;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    WASubscriptionMessagePageSheetHeaderView *_headerView;
    WASubscriptionMessagePageSheetFooterView *_footerView;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
- (void)addSubViews:(id)arg1;
- (double)calculateDescriptionHeight:(double)arg1;
- (double)calculateHeight:(double)arg1;
@property(nonatomic) __weak id <WASubscriptionMessagePageSheetContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) WASubscriptionMessagePageSheetFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WASubscriptionMessagePageSheetHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)loadAllSubviews;
- (void)onFooterViewCancelButtonClicked:(id)arg1;
- (void)onFooterViewConfirmButtonClicked:(id)arg1;
- (void)onFooterViewDeclineButtonClicked:(id)arg1;
- (void)onHeaderViewInfoButtonClicked:(id)arg1;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

