//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewControllerDelegate.h"

@class CContact, MMUIViewController, NSArray, NSDictionary, NSIndexPath, UITableView, UITableViewCell;

@protocol ContactSelectViewDelegate <MMUIViewControllerDelegate>
- (void)onSelectContact:(CContact *)arg1;

@optional
- (void)actionMenu:(long long)arg1 tableView:(UITableView *)arg2 indexPath:(NSIndexPath *)arg3 contact:(CContact *)arg4;
- (MMUIViewController *)getSafeSearchViewController;
- (_Bool)isContactSelectPanelViewSearching;
- (void)makeTopCell:(UITableViewCell *)arg1;
- (void)onContactSelectSearchSections:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (void)onContactsDataNeedChange;
- (_Bool)onFilterContactCandidate:(CContact *)arg1;
- (NSArray *)onGetSortedMultiSelectUsrs;
- (void)onNotifyWillDoAsyncRecommend:(NSArray *)arg1;
- (void)onSelectBrandContact;
- (void)onSelectHistoryGroup;
- (void)onSelectOpenIMGroup;
- (void)onSelectRadarCreateRoom;
- (void)onSelectRecommendGroup:(CContact *)arg1;
- (void)onSelectSearchSnsContact:(CContact *)arg1;
- (void)onSelectTopCell;
- (void)onSelectWowBlackListBlock;
- (void)onSelectWowBlackListHide;
- (_Bool)onShouldSelectContact:(CContact *)arg1;
- (void)onViewContact:(CContact *)arg1;
@end

