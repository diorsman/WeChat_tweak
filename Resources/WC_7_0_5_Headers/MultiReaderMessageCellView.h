//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

#import "ReaderItemViewDelegate.h"

@class MultiReaderMessageViewModel, NSMutableArray, NSString, UIImageView;

@interface MultiReaderMessageCellView : ReaderMessageCellView <ReaderItemViewDelegate>
{
    UIImageView *m_bgImageView;
    unsigned int m_selectIndex;
    NSMutableArray *m_itemViewArr;
}

- (void).cxx_destruct;
- (id)cacheImageForCover:(id)arg1;
- (_Bool)canBeReused;
- (_Bool)canPeek;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)getReadWraps;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (_Bool)isItemNoCover:(id)arg1;
- (id)itemViewWithShowtype:(int)arg1 index:(unsigned int)arg2;
- (_Bool)jumpVideoPageView:(id)arg1 fromMsgWrap:(id)arg2 itemView:(id)arg3;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)layoutContentView;
- (void)onAppear;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onReaderItemBeginTouch:(unsigned int)arg1;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(id)arg2;
- (void)onReaderItemDidLoadCoverImage:(unsigned int)arg1 coverImage:(id)arg2 cover:(id)arg3;
- (void)onReaderItemLongPress:(unsigned int)arg1;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MultiReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

