//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMDiskUsageScannerDelegate.h"
#import "MMToastViewControllerDelegate.h"
#import "StorageUsageDetailViewDelegate.h"

@class MMDiskUsageScaner, MMUIScrollView, NSString, StorageUsageDetailView, StorageUsageLoadingView, StorageUsageSummaryModel, StorageUsageSummaryView, UIView;

@interface NewStorageUsageViewController : MMUIViewController <MMDiskUsageScannerDelegate, StorageUsageDetailViewDelegate, MMToastViewControllerDelegate>
{
    MMUIScrollView *m_backgroundView;
    UIView *m_headerView;
    StorageUsageLoadingView *m_loadingView;
    UIView *m_resultView;
    StorageUsageSummaryView *m_summaryView;
    StorageUsageDetailView *m_detailView;
    MMDiskUsageScaner *m_usageScanner;
    StorageUsageSummaryModel *m_summaryModel;
    _Bool m_hasScanned;
    _Bool m_isLoading;
    unsigned long long m_cleanSize;
}

- (void).cxx_destruct;
- (void)layoutLoadingView;
- (void)layoutResultView;
- (id)navigationBarBackgroundColor;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)onReturn;
- (void)scanDiskBegin;
- (void)showEnd;
- (void)showLoadingView;
- (void)showResultView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

