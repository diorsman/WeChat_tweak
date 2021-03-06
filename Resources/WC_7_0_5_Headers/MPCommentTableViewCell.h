//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MMUIButton, MMUILabel, MMWebImageView, MPCommentTableViewCellViewModel, RichTextView, UIView;

@interface MPCommentTableViewCell : UITableViewCell
{
    unsigned int _theme;
    MMWebImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIView *_topBgView;
    MMUILabel *_topLabel;
    MMUIButton *_likeBtn;
    RichTextView *_contentLabel;
    MMUIButton *_deleteBtn;
    UIView *_authorDividingLine;
    MMUILabel *_replyNicknameLabel;
    RichTextView *_replyContentLabel;
    MMUIButton *_replyLikeBtn;
    long long _cellType;
    MPCommentTableViewCellViewModel *_viewModel;
    id <MPCommentTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *authorDividingLine; // @synthesize authorDividingLine=_authorDividingLine;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak id <MPCommentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)initCommentLikeBtn;
- (void)initContentLabel;
- (void)initDeleteBtn;
- (void)initDividingLine;
- (void)initHeadImageView;
- (void)initNicknameLabel;
- (void)initReplyContentLabel;
- (void)initReplyLikeBtn;
- (void)initReplyNicknameLabel;
- (void)initSubviews;
- (void)initTopMark;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)onClickDeleteBtn;
- (void)onClickLikeBtn;
- (void)onClickReplyLikeBtn;
@property(retain, nonatomic) RichTextView *replyContentLabel; // @synthesize replyContentLabel=_replyContentLabel;
@property(retain, nonatomic) MMUIButton *replyLikeBtn; // @synthesize replyLikeBtn=_replyLikeBtn;
@property(retain, nonatomic) MMUILabel *replyNicknameLabel; // @synthesize replyNicknameLabel=_replyNicknameLabel;
@property(nonatomic) unsigned int theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) MMUILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) MPCommentTableViewCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateLikeBtn;
- (void)updateReplyLikeBtn;
- (void)updateWithViewModel:(id)arg1;

@end

