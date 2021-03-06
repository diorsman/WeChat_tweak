//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "MMImageLoaderObserver.h"
#import "MPLandingVideoErrViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MMUIButton, MMUIImageView, MMUILabel, MMWebViewController, MPLandingVideoErrView, MPLandingVideoOversizeTipsView, MPPlayerHttpMediaWrap, NSString, UIImage, UIImageView, UIPanGestureRecognizer, UISlider, UITapGestureRecognizer, UITopTouchView, WAScreenBrightnessStateView, WCNetworkMediaSlider, WCPlayerPlayArgs, WCPlayerView;

@interface MPLandingVideoPlayerView : WCPlayerControlView <UIGestureRecognizerDelegate, MMImageLoaderObserver, MPLandingVideoErrViewDelegate>
{
    WCPlayerView *_playerView;
    unsigned int _controlsMask;
    unsigned long long _subIndex;
    _Bool _lockSlider;
    _Bool _touchesProgressMoved;
    _Bool _useCustomDuration;
    double _currentPlay;
    double _currentBuffer;
    double _totalDuration;
    float _playSpeedRate;
    unsigned long long _currentTimeTextLen;
    long long _panDirection;
    _Bool _adjustVolume;
    struct CGPoint _panGestureStartPoint;
    double _panGestureStartValue;
    _Bool _customCache;
    _Bool _showDanmu;
    _Bool _autoPlay;
    _Bool _needUpdateEvent;
    _Bool _enablePageGesture;
    _Bool _loop;
    _Bool _obeyMuteSwitch;
    _Bool _autoPauseIfOpenNative;
    _Bool _autoPauseIfNavigate;
    _Bool _forbidShowBufferingView;
    _Bool _liveVideo;
    _Bool _videoPlayerValid;
    _Bool _videoDurationValid;
    _Bool _videoSizeValid;
    _Bool _videoHidden;
    _Bool _isAppBackground;
    _Bool _userNeedPlay;
    _Bool _temporaryPause;
    _Bool _isVideoBeginPlay;
    _Bool _isVideoFinishPlay;
    _Bool _isShowBufferingView;
    _Bool _isShowingOversizeTips;
    _Bool _isInFullScreenTransition;
    _Bool _isSeeking;
    unsigned int _videoId;
    unsigned int _appService;
    unsigned int _initialTime;
    NSString *_userData;
    NSString *_scene;
    long long _orientation;
    long long _playerPlaceHolderViewTag;
    id <MPLandingVideoPlayerViewDelegate> _videoDelagate;
    MMWebViewController *_adWebViewController;
    WAScreenBrightnessStateView *_bvstatusView;
    long long _videoState;
    long long _controlState;
    WCPlayerPlayArgs *_playerInfo;
    MPPlayerHttpMediaWrap *_mediaWrap;
    UITopTouchView *_holdPlayerView;
    UITopTouchView *_gestureView;
    UITapGestureRecognizer *_playGes;
    UITapGestureRecognizer *_tabGes;
    UIPanGestureRecognizer *_panGes;
    NSString *_videoPath;
    NSString *_thumbUrl;
    UIImageView *_thumbImageView;
    UITopTouchView *_bottomView;
    UIImageView *_bottomBG;
    UIImage *_bottomBGFull;
    UIImage *_bottomBGNotFull;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_progressSlider;
    WCNetworkMediaSlider *_edgeProgressSlider;
    MMUILabel *_durationLabel;
    MMUIButton *_playBtn;
    MMUIButton *_muteBtn;
    MMUIButton *_fullBtn;
    MMUILabel *_liveLabel;
    UITopTouchView *_coverView;
    MMUILabel *_centerTime;
    UIImageView *_centerScrubTimeBG;
    MMUILabel *_centerScrubTime;
    MMUIButton *_centerPlayBtn;
    MMUIImageView *_fullBackBG;
    MMUIButton *_fullBackBtn;
    MMUILabel *_fullBackTitle;
    MPLandingVideoErrView *_playerErrView;
    MPLandingVideoOversizeTipsView *_oversizeTipsView;
    UISlider *_volumeViewSlider;
    struct CGSize _videoSize;
    struct CGRect _fullScreenPortraitFrame;
    struct CGRect _displayRect;
    struct CGAffineTransform _videoTransform;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
@property(retain, nonatomic) MMWebViewController *adWebViewController; // @synthesize adWebViewController=_adWebViewController;
- (void)appDidEnterBackground:(id)arg1;
@property(nonatomic) unsigned int appService; // @synthesize appService=_appService;
- (void)appWillEnterForeground:(id)arg1;
@property(nonatomic) _Bool autoPauseIfNavigate; // @synthesize autoPauseIfNavigate=_autoPauseIfNavigate;
@property(nonatomic) _Bool autoPauseIfOpenNative; // @synthesize autoPauseIfOpenNative=_autoPauseIfOpenNative;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) UIImageView *bottomBG; // @synthesize bottomBG=_bottomBG;
@property(retain, nonatomic) UIImage *bottomBGFull; // @synthesize bottomBGFull=_bottomBGFull;
@property(retain, nonatomic) UIImage *bottomBGNotFull; // @synthesize bottomBGNotFull=_bottomBGNotFull;
@property(retain, nonatomic) UITopTouchView *bottomView; // @synthesize bottomView=_bottomView;
- (void)bringFullBackBtnToFront:(_Bool)arg1;
@property(retain, nonatomic) WAScreenBrightnessStateView *bvstatusView; // @synthesize bvstatusView=_bvstatusView;
- (void)cancelDelayControlFadeOnMain:(id)arg1;
@property(retain, nonatomic) MMUIButton *centerPlayBtn; // @synthesize centerPlayBtn=_centerPlayBtn;
@property(retain, nonatomic) MMUILabel *centerScrubTime; // @synthesize centerScrubTime=_centerScrubTime;
@property(retain, nonatomic) UIImageView *centerScrubTimeBG; // @synthesize centerScrubTimeBG=_centerScrubTimeBG;
@property(retain, nonatomic) MMUILabel *centerTime; // @synthesize centerTime=_centerTime;
- (_Bool)checkControl:(unsigned int)arg1;
- (void)checkVideoReady;
@property(nonatomic) long long controlState; // @synthesize controlState=_controlState;
@property(retain, nonatomic) UITopTouchView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(nonatomic) _Bool customCache; // @synthesize customCache=_customCache;
- (void)dealloc;
- (void)delayControlFade;
- (void)delayControlFadeOnMain:(id)arg1;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (void)destroyPlayer;
- (void)didMoveToWindow;
@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) WCNetworkMediaSlider *edgeProgressSlider; // @synthesize edgeProgressSlider=_edgeProgressSlider;
@property(nonatomic) _Bool enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
- (void)enterFullScreenModeWithAnimated:(_Bool)arg1 additionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)exitFullScreenModeWithAnimated:(_Bool)arg1 additionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fadeControl;
- (void)fadeControlNow;
@property(nonatomic) _Bool forbidShowBufferingView; // @synthesize forbidShowBufferingView=_forbidShowBufferingView;
@property(retain, nonatomic) MMUIImageView *fullBackBG; // @synthesize fullBackBG=_fullBackBG;
@property(retain, nonatomic) MMUIButton *fullBackBtn; // @synthesize fullBackBtn=_fullBackBtn;
@property(retain, nonatomic) MMUILabel *fullBackTitle; // @synthesize fullBackTitle=_fullBackTitle;
@property(retain, nonatomic) MMUIButton *fullBtn; // @synthesize fullBtn=_fullBtn;
@property(nonatomic) struct CGRect fullScreenPortraitFrame; // @synthesize fullScreenPortraitFrame=_fullScreenPortraitFrame;
- (long long)fullscreenOrientation;
@property(retain, nonatomic) UITopTouchView *gestureView; // @synthesize gestureView=_gestureView;
- (unsigned int)getControlsMask;
- (struct CGRect)getDisplayRect;
- (id)getPanGesture;
- (double)getPlayedTotalTime;
- (double)getVideoCurrentTime;
- (float)getVideoDuration;
- (void)hiddenBufferingView;
- (void)hideBrightnessStatusView;
- (void)hideErrView;
@property(retain, nonatomic) UITopTouchView *holdPlayerView; // @synthesize holdPlayerView=_holdPlayerView;
- (void)horizontalMoveEnd:(struct CGPoint)arg1;
- (void)horizontalMoveStart:(struct CGPoint)arg1;
- (void)horizontalMoved:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int initialTime; // @synthesize initialTime=_initialTime;
@property(nonatomic) _Bool isAppBackground; // @synthesize isAppBackground=_isAppBackground;
- (_Bool)isControlsShow;
- (_Bool)isError;
- (_Bool)isFullScreen;
@property(nonatomic) _Bool isInFullScreenTransition; // @synthesize isInFullScreenTransition=_isInFullScreenTransition;
- (_Bool)isLocalPlay;
- (_Bool)isPause;
- (_Bool)isPlayEnd;
- (_Bool)isPlaying;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool isShowBufferingView; // @synthesize isShowBufferingView=_isShowBufferingView;
@property(nonatomic) _Bool isShowingOversizeTips; // @synthesize isShowingOversizeTips=_isShowingOversizeTips;
@property(nonatomic) _Bool isVideoBeginPlay; // @synthesize isVideoBeginPlay=_isVideoBeginPlay;
@property(nonatomic) _Bool isVideoFinishPlay; // @synthesize isVideoFinishPlay=_isVideoFinishPlay;
- (void)layoutControlView:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) MMUILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(nonatomic) _Bool liveVideo; // @synthesize liveVideo=_liveVideo;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(retain, nonatomic) MPPlayerHttpMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) MMUIButton *muteBtn; // @synthesize muteBtn=_muteBtn;
@property(nonatomic) _Bool needUpdateEvent; // @synthesize needUpdateEvent=_needUpdateEvent;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
- (void)onClickDanmu;
- (void)onClickFull;
- (void)onClickMuteVoice;
- (void)onClickPlay;
- (void)onErrViewRetryBtnClicked;
- (void)onGesture2Tap:(id)arg1;
- (void)onGesturePan:(id)arg1;
- (void)onGestureTap:(id)arg1;
- (void)onPlayerBeginSeek;
- (void)onSliderTouchDown;
- (void)onSliderTouchMove;
- (void)onSliderTouchUp;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPlayFail:(int)arg1 LocalizedErrorDes:(id)arg2;
- (void)onVideoPlayFinish;
- (void)onVideoPlayerOccurAction:(unsigned long long)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) MPLandingVideoOversizeTipsView *oversizeTipsView; // @synthesize oversizeTipsView=_oversizeTipsView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
- (void)pause;
- (long long)pauseCount;
- (void)pausePlayAndLoading;
- (void)pauseTemp:(_Bool)arg1;
- (void)play:(_Bool)arg1;
@property(retain, nonatomic) MMUIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UITapGestureRecognizer *playGes; // @synthesize playGes=_playGes;
@property(retain, nonatomic) MPLandingVideoErrView *playerErrView; // @synthesize playerErrView=_playerErrView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) long long playerPlaceHolderViewTag; // @synthesize playerPlaceHolderViewTag=_playerPlaceHolderViewTag;
@property(retain, nonatomic) WCNetworkMediaSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
- (void)refreshControl;
- (void)relayoutForRotationWhileFullScreen;
- (void)removeOversizeTips;
- (void)routeChange:(id)arg1;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
- (void)seek:(unsigned int)arg1;
- (void)setControls:(unsigned int)arg1;
- (void)setCurrentTimeText:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setObjectFit:(unsigned long long)arg1;
- (void)setOversizeTips:(unsigned long long)arg1 isPause:(_Bool)arg2;
- (void)setPlayBackRate:(float)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
@property(nonatomic) _Bool showDanmu; // @synthesize showDanmu=_showDanmu;
@property(retain, nonatomic) UITapGestureRecognizer *tabGes; // @synthesize tabGes=_tabGes;
@property(nonatomic) _Bool temporaryPause; // @synthesize temporaryPause=_temporaryPause;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
- (void)setThumbViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool userNeedPlay; // @synthesize userNeedPlay=_userNeedPlay;
@property(nonatomic) __weak id <MPLandingVideoPlayerViewDelegate> videoDelagate; // @synthesize videoDelagate=_videoDelagate;
@property(nonatomic) _Bool videoDurationValid; // @synthesize videoDurationValid=_videoDurationValid;
- (void)setVideoFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool videoHidden; // @synthesize videoHidden=_videoHidden;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void)setVideoPath:(id)arg1 initialTime:(unsigned int)arg2;
@property(nonatomic) _Bool videoPlayerValid; // @synthesize videoPlayerValid=_videoPlayerValid;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool videoSizeValid; // @synthesize videoSizeValid=_videoSizeValid;
@property(nonatomic) long long videoState; // @synthesize videoState=_videoState;
- (void)setVideoThumb:(id)arg1;
- (void)setVideoThumbImage:(id)arg1;
- (void)setVideoThumbImageViewContentMode:(long long)arg1;
@property(nonatomic) struct CGAffineTransform videoTransform; // @synthesize videoTransform=_videoTransform;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
- (void)showBufferingView;
- (void)showControl;
- (void)showControl:(_Bool)arg1;
- (double)showCurPlayTime:(double)arg1;
- (void)showErrViewWithErrMsg:(id)arg1 canRetry:(_Bool)arg2;
- (long long)state;
- (void)stop:(_Bool)arg1;
- (void)stopControlFade;
- (void)stopControlFadeOnMain;
- (id)timeFormat:(int)arg1;
- (void)touchesBeganBottom:(id)arg1 withEvent:(id)arg2;
- (void)touchesEndedBottom:(id)arg1 withEvent:(id)arg2;
- (void)updateCenterScrubTime;
- (int)updatePlayPause;
- (void)updateSubviews:(struct CGSize)arg1;
- (void)updateTransGesture;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoHidden;
- (void)verticalMoved:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

