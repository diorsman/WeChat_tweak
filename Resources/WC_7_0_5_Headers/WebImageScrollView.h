//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate.h"
#import "MMImageScrollViewHelperDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "MediaFullScreenInterface.h"
#import "UIScrollViewDelegate.h"

@class MMImageScrollViewHelper, MMWebImageView, NSArray, NSString, UIActivityIndicatorView, WXFullScreenGestureRecognizer;

@interface WebImageScrollView : MMUIScrollView <FullScreenGestureDelegate, MMWebImageViewDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, MediaFullScreenInterface>
{
    MMWebImageView *webImageView;
    UIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WXFullScreenGestureRecognizer *m_gesture;
    _Bool m_bImageLoadDone;
    _Bool m_bFullScreenAnimationDone;
    _Bool _useWindowFrame;
    id <WebImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)becomeInvisible;
- (void)becomeVisible;
- (void)beginFullScreenAnimation:(id)arg1;
- (void)displayWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool enableDragToClose;
- (void)finishFullScreenAnimation:(struct CGRect)arg1;
- (id)getImageView;
- (id)getQuitAnimationView;
- (id)getScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
@property __weak id <WebImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDoubleTap:(id)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenSingleTap;
- (void)onLoadImageOK:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)resetLoadingIndicator;
- (void)resizeToFrame:(struct CGRect)arg1;
- (double)screenHeight;
- (double)screenWidth;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setImageUrl:(id)arg1;
@property(nonatomic) _Bool useWindowFrame; // @synthesize useWindowFrame=_useWindowFrame;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)tryReloadView;
- (void)updateScrollable;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

