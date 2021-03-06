//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IExptServiceExt.h"
#import "IMMFontMgrExt.h"
#import "IMsgExt.h"
#import "INewABTestMgrExt.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "WCAdvertiseCommentUploadMgrDelegate.h"
#import "WCBGImgLogicNotity.h"
#import "WCBGRecommendMgrDelegate.h"
#import "WCCdnDownloadImageDelegate.h"
#import "WCCommentUploadMgrDelegate.h"
#import "WCDownloadMgrDelegate.h"
#import "WCFacadeExt.h"
#import "WCGroupMgrExt.h"
#import "WCHomepageDelegate.h"
#import "WCLogicMgrDelegate.h"
#import "WCNotificationCenterMgrDelegate.h"
#import "WCPlayerDownloadMgrInterface.h"
#import "WCPreloadLogicDelegate.h"
#import "WCTimelineDelegate.h"
#import "WCUploadMgrDelegate.h"

@class MemoryMappedKV, MyWCDB, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, WCAdvertiseCommentUploadMgr, WCAdvertiseDataHelper, WCAdvertiseLogicMgr, WCBGImgLogic, WCBGRecommendMgr, WCBrowseInfo, WCCanvasTypeMgr, WCCommentUploadMgr, WCDataItem, WCDownloadImageCdnMgr, WCDownloadMgr, WCDownloadVideoCDNMgr, WCGroupMgr, WCInputTextCacheMgr, WCLogicMgr, WCNotificationCenterMgr, WCOperationSetting, WCPatternCacheMgr, WCPreloadLogicMgr, WCRealFeedExposureItem, WCSnsABTestMgr, WCSnsLocalCacheMgr, WCStrangerCommentMgr, WCTimelineMgr, WCUploadMgr;

@interface WCFacade : MMService <IContactMgrExt, MMConfigMgrExt, INewABTestMgrExt, PBMessageObserverDelegate, IExptServiceExt, MMService, WCBGImgLogicNotity, WCDownloadMgrDelegate, WCTimelineDelegate, WCCommentUploadMgrDelegate, WCUploadMgrDelegate, WCNotificationCenterMgrDelegate, WCHomepageDelegate, WCLogicMgrDelegate, WCFacadeExt, WCBGRecommendMgrDelegate, WCGroupMgrExt, WCAdvertiseCommentUploadMgrDelegate, IMMFontMgrExt, WCPreloadLogicDelegate, IMsgExt, WCCdnDownloadImageDelegate, WCPlayerDownloadMgrInterface>
{
    MyWCDB *m_database;
    WCAdvertiseDataHelper *m_adDataHelper;
    NSMutableArray *m_timelineWithLocalDatas;
    NSMutableDictionary *m_dicTimelineDataItem;
    NSMutableDictionary *m_dicTimeLineDataUICache;
    NSMutableDictionary *m_dicUserCommentsUICache;
    WCUploadMgr *m_uploadMgr;
    WCBGImgLogic *m_bgImgLogic;
    WCTimelineMgr *m_timelineMgr;
    WCPreloadLogicMgr *m_preloadLogicMgr;
    WCDownloadMgr *m_downloadMgr;
    WCDownloadImageCdnMgr *m_downloadImageCdnMgr;
    WCCommentUploadMgr *m_commentUploadMgr;
    WCAdvertiseCommentUploadMgr *m_advertiseCommentUploadMgr;
    WCNotificationCenterMgr *m_messageMgr;
    WCLogicMgr *m_logicMgr;
    WCAdvertiseLogicMgr *m_advertiseLogicMgr;
    WCBGRecommendMgr *m_bgMaster;
    WCStrangerCommentMgr *m_strangerCommentMgr;
    WCGroupMgr *m_groupMgr;
    WCPatternCacheMgr *m_patternCacheMgr;
    WCInputTextCacheMgr *m_inputTextCacheMgr;
    WCSnsABTestMgr *m_snsABTestMgr;
    WCSnsLocalCacheMgr *m_snsLocalCacheMgr;
    WCCanvasTypeMgr *m_canvasTypeMgr;
    WCDownloadVideoCDNMgr *m_downloadCDNMgr;
    WCDownloadVideoCDNMgr *m_downloadCDNAdVideoMgr;
    NSMutableDictionary *m_homepageMgrDic;
    NSMutableDictionary *m_networkEventDic;
    NSMutableSet *m_deletedItemSet;
    NSMutableSet *m_notShowImgTypeSet;
    NSMutableDictionary *m_dicSightStatusCache;
    NSMutableDictionary *m_dicSightDownloadProgressCache;
    NSMutableDictionary *m_dicSightViewCache;
    NSMutableSet *m_setAddedIDForClickedRatio;
    NSMutableSet *m_setAddedIDForThumbLoadedEfficency;
    NSMutableSet *m_setAddedIDForPicLoadedEfficency;
    WCBrowseInfo *m_browseInfo;
    NSMutableDictionary *m_dicStatExposureFeedId;
    int m_currentPage;
    WCDataItem *m_latestSeenDataItem;
    WCOperationSetting *m_operSetting;
    unsigned long long startEnterBackGroundTime;
    unsigned int m_clickCameraTime;
    WCDataItem *m_dataItemForHotVideo;
    WCDataItem *m_dataItemForHotImage;
    WCRealFeedExposureItem *realFeedExposureItem;
    MemoryMappedKV *realFeedExposureItemMMkv;
    _Bool _isCliCfgTimelineVideoAutoPlayOn;
    int _likeCommentStoryBubbleDynaCfgVal;
    NSRecursiveLock *_lock;
}

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (void)reportSnsPostDragPic:(int)arg1 snsPostSave:(int)arg2;
- (void).cxx_destruct;
- (unsigned long long)GetMediaVideoDownloadingModeWithMediaItem:(id)arg1;
- (id)GetRecommendUsr;
- (unsigned long long)GetWCAlbumVideoDownloadMode:(id)arg1;
- (unsigned long long)GetWCVideoDownloadMode:(id)arg1;
- (_Bool)IsMediaItemInDownloadQueue:(id)arg1;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)LLComment_onBeforeReturnDataItem:(id)arg1;
- (void)LLComment_onBeforeReturnStrangerDataItem:(id)arg1 partner:(id)arg2;
- (void)LLComment_onBeforeReturnUnCommentDataItem:(id)arg1 comment:(id)arg2;
- (void)LLComment_onBeforeReturnUnLikeDataItem:(id)arg1;
- (void)LLDelete_onAfterDeleteDataItemFinished:(id)arg1;
- (void)LLDelete_onBeforeDeleteDataItem:(id)arg1;
- (void)LLUpload_onAfterAddUploadTask:(id)arg1;
- (void)LLUpload_onAfterUploadTaskFailed:(id)arg1;
- (void)LLUpload_onAfterUploadTaskFinished:(id)arg1;
- (void)LLUpload_onAfterUploadTaskRestarted:(id)arg1;
- (void)LLUpload_onBeforeAddUploadTask:(id)arg1;
- (_Bool)LL_onBeforeReturnDataItem:(id)arg1;
- (void)MergeWCAdvertiseDataAdInfo:(id)arg1;
- (void)MergeWCAdvertiseDataComments:(id)arg1;
- (void)NotifyBackgroundChanged;
- (void)NotifyToDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)NotifyToUploadWithTask:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (void)SetBGImgByImg:(id)arg1;
- (void)SetBGImgByMedia:(id)arg1;
- (void)SetWCAdvertiseDataExposured:(id)arg1;
- (void)SetWCAdvertiseDataIgnoreTip:(_Bool)arg1 DataItem:(id)arg2;
- (void)SetWCAdvertiseDataIgnoreTip:(_Bool)arg1 ignoreCommengMsg:(_Bool)arg2 DataItem:(id)arg3;
- (void)SpanUnInterestWCAdvertiseReasonListForData:(id)arg1;
- (void)StartDownloadImage:(id)arg1 DownloadType:(int)arg2;
- (void)StartDownloadMultiImage:(id)arg1 targetMedias:(id)arg2;
- (void)StopDownloadVideoWithMediaItem:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (void)UnInterestWCAdvertiseData:(id)arg1;
- (void)WCFacadeBrowseInfoReportOnBackground;
- (void)WCFacadeBrowseInfoReportOnForeground;
- (void)WCFacadeBrowseInfoReportOnRegisterExt;
- (void)WCFacadeBrowseInfoReportOnTerminate;
- (void)WCFacadeBrowseInfoReportOnUnRegisterExt;
- (id)adDataHelper;
- (void)addFailDataItem:(id)arg1;
- (void)addFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 withScene:(int)arg3;
- (id)advertiseLogicMgr;
- (id)asyncLogEndViewAlbum:(id)arg1;
- (id)asyncLogEndViewUrl:(id)arg1;
- (id)asyncLogFavFeed:(id)arg1 url:(id)arg2;
- (id)asyncLogForwardToFriend:(id)arg1 friendName:(id)arg2 url:(id)arg3;
- (id)asyncLogForwardToGroup:(id)arg1 groupName:(id)arg2 url:(id)arg3;
- (id)asyncLogOpInfoForForwardAttachVideo:(id)arg1;
- (id)asyncLogOpInfoForForwardPostFeed:(id)arg1;
- (id)asyncLogOpInfoForNormalPostFeed;
- (id)backgroundImageByContact:(id)arg1;
- (void)beginHomepage:(id)arg1;
- (void)beginHomepageOnlySightAndPhoto:(id)arg1;
- (void)beginNetworkActivity:(long long)arg1 cgi:(long long)arg2;
- (void)beginTimeline;
- (id)bgImgLogic;
- (id)bgMaster;
- (void)cacheFreeStatus:(id)arg1;
- (void)cacheRepeatUrlAfterConfirmWithDocId:(id)arg1 snsOperationWrap:(id)arg2;
- (void)cacheRewardStatus:(id)arg1;
- (void)cacheText:(id)arg1 refDataItem:(id)arg2 refCommentItem:(id)arg3 PasteLogic:(id)arg4;
- (_Bool)canUpdateAllGroups;
- (void)cancelDownloadMedia:(id)arg1 downloadType:(int)arg2;
- (id)canvasTypeMgr;
- (id)cdnGetSnsOperationsWithFeedId:(id)arg1;
- (_Bool)checkInvalidAdData;
- (unsigned long long)cleanFacadeCache;
- (_Bool)cleanFailDataItemForSpam:(id)arg1;
- (void)clearAllSightPlayStatusCache;
- (void)clearDelayShowInfoCache;
- (void)clearSightViewCache;
- (void)clickDelayShowFeed:(id)arg1;
- (id)commentMgr;
- (void)commentObject:(id)arg1 ForAd:(id)arg2;
- (void)commentObject:(id)arg1 toStranger:(id)arg2 content:(id)arg3 ref:(id)arg4 source:(long long)arg5;
- (double)contentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (double)contentHeightWithUserComment:(id)arg1 width:(double)arg2;
- (_Bool)couldPreloadBigImageForUser:(id)arg1 limit:(int)arg2;
- (_Bool)couldRunSightPreload:(id)arg1;
- (_Bool)couldShowRepeatUrlMenuItem:(id)arg1;
- (long long)countOfTimelineDataItem;
- (id)dataItemWithId:(id)arg1;
- (id)database;
- (void)dealloc;
- (void)deduplicateTimelineDataItems;
- (void)delayDownloadVideoRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)deleteAdvertiseList:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteAllTimelineDataItems;
- (void)deleteDataItem:(id)arg1;
- (void)deleteDataItemLocal:(id)arg1;
- (void)deleteFailedComment:(id)arg1;
- (void)deleteGroup:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteSightDownloadProgressByItemID:(id)arg1;
- (void)deleteSightViewByItemID:(id)arg1;
- (id)deletedItemSet;
- (id)downloadCDNAdVideoMgr;
- (id)downloadCDNMgr;
- (id)downloadImageCdnMgr;
- (void)downloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)downloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
- (id)downloadMgr;
- (void)endHomepage:(id)arg1;
- (void)endHomepageOnlySightAndPhoto:(id)arg1;
- (void)endNetworkActivity:(long long)arg1 cgi:(long long)arg2;
- (void)endTimeline;
- (void)exposeDataItem:(id)arg1;
- (void)exposurStatExitTimeLine;
- (void)exposureDelayShowFeed:(id)arg1;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)forceDownloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)forceDownloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
- (id)genUserCommentKey:(id)arg1;
- (id)getAdvertiseData:(id)arg1;
- (id)getAllAdDataItems;
- (id)getAllGroups;
- (id)getAllMessages;
- (id)getBGStorage;
- (id)getBrowseInfo;
- (id)getCacheText:(id)arg1 refCommentItem:(id)arg2 PasteLogic:(id)arg3;
- (id)getCanvasAdOutsideIconInfo;
- (int)getCurrentPage;
- (id)getCurrentUserHomepage;
- (id)getCustomGroups;
- (id)getDataItemByID:(id)arg1;
- (id)getDataItemByID:(id)arg1 addLocal:(_Bool)arg2;
- (id)getDataItemsByIds:(id)arg1;
- (id)getDownloadImageCdnMgr;
- (id)getDownloadMgr;
- (id)getExposureFeedIdDic;
- (id)getFailedComment;
- (id)getFailedLike;
- (id)getFailedUploads;
- (id)getGroupByID:(id)arg1;
- (id)getHomepageData:(id)arg1;
- (unsigned long long)getHomepageLimitFeedId:(id)arg1;
- (id)getHomepageOnlySightAndPhotoData:(id)arg1;
- (long long)getHomepageTotalCount:(id)arg1;
- (id)getHotImageItem;
- (id)getHotVideoItem;
- (unsigned int)getImageDownloadStatus:(id)arg1 downloadType:(int)arg2;
- (id)getLastPostGroups;
- (id)getLastPostPrivacySettingPath;
- (id)getLastSeenItemForClickRatio;
- (id)getLastUnReadMessage;
- (id)getLatestDataItem;
- (id)getLatestReadMessage;
- (unsigned long long)getLatestReadMessageCreateTime;
- (id)getLayerIdForDataItem:(id)arg1;
- (id)getLocalSightDataItemsForWhatsNew;
- (unsigned int)getMaxCacheLogCount;
- (unsigned int)getMaxCacheTime;
- (id)getMessageFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (int)getPostPrivacy;
- (int)getRealFeedExposureClearCount;
- (int)getRealFeedExposureCountLimit;
- (id)getRealFeedExposureFeedIds;
- (id)getRedEnvelopesInfoByDataItem:(id)arg1;
- (id)getShowTip:(id)arg1 layerId:(id)arg2;
- (id)getSightDownloadProgressByItemID:(id)arg1;
- (id)getSightPlayStatusByItemID:(id)arg1;
- (id)getSightViewByItemID:(id)arg1;
- (id)getSnsOperationWrapWithFeedId:(id)arg1;
- (id)getSnsOperationsWithFeedId:(id)arg1;
- (id)getStrangerDataItemByID:(id)arg1 ofPartner:(id)arg2;
- (id)getTimeLineWebViewExtraInfo:(id)arg1;
- (id)getTimelineDataInCacheByItemID:(id)arg1;
- (id)getTimelineDataItemOfIndex:(long long)arg1;
- (id)getTimelineMgr;
- (unsigned int)getTimelineShowFlag;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (unsigned int)getUnReadMessageCount;
- (id)getUnReadMessages;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getUploadingDataItems;
- (id)getUserCommentsUICacheFor:(id)arg1 addIfNotHave:(_Bool)arg2;
- (id)getWCOperSetting;
- (id)groupMgr;
- (_Bool)hadExposuredWithFeedId:(id)arg1;
- (void)handleUnreadMsgListSyncWithCreateTime:(unsigned long long)arg1;
- (_Bool)hasAdvertiseData:(id)arg1;
- (_Bool)hasAdvertiseInCache;
- (_Bool)hasBGImg:(id)arg1;
- (_Bool)hasFirstClickDataItemForPreloadBigImage:(id)arg1;
- (_Bool)hasPreloadDataItemForBigImage:(id)arg1;
- (_Bool)hasPreloadDataItemForSmallImage:(id)arg1;
- (_Bool)haveSeenItemForClickRatio:(id)arg1;
- (_Bool)hiddenTip:(id)arg1 dataItem:(id)arg2;
- (_Bool)hitActionListShowTip:(id)arg1 layerId:(id)arg2;
- (_Bool)hitTheDelayShowExp:(id)arg1;
- (id)homepageMgr:(id)arg1;
- (void)increaseWCAdvertiseDataExposureCnt:(id)arg1;
- (id)init;
- (id)innerGetHomepage:(id)arg1;
- (id)inputTextCacheMgr;
- (_Bool)isAdReceived:(id)arg1;
- (_Bool)isBGImgLikedForUser:(id)arg1;
- (_Bool)isCanvasTypesAllValid:(id)arg1;
@property(nonatomic) _Bool isCliCfgTimelineVideoAutoPlayOn; // @synthesize isCliCfgTimelineVideoAutoPlayOn=_isCliCfgTimelineVideoAutoPlayOn;
- (_Bool)isDataItemDeleted:(id)arg1;
- (_Bool)isDataItemShowDetail:(id)arg1;
- (_Bool)isFirstTip:(id)arg1 layerId:(id)arg2;
- (_Bool)isImageDownloading:(id)arg1 downloadType:(int)arg2;
- (_Bool)isImportTagFromGroupEnable;
- (_Bool)isInPreloadAroundImgLimitTime;
- (_Bool)isNetworkActive;
- (_Bool)isOnRepeatUrlExperiment:(id)arg1;
- (_Bool)isShowLatestSnsPostPrivacy;
- (_Bool)isShowNewTimelineEventNotification;
- (_Bool)isShowThumbForType:(long long)arg1;
- (_Bool)isTimeLineViewControllerActuallyAppearing;
- (_Bool)isTimelineVideoSightAutoPlayEnable;
- (_Bool)isUserInGroup:(id)arg1 GroupID:(id)arg2;
- (_Bool)isUserNameInDontSeeList:(id)arg1;
- (_Bool)isValidRecommendUsr:(id)arg1;
- (id)layoutStylesOfContentDescWithDataItem:(id)arg1 width:(double)arg2 isShowDetail:(_Bool)arg3 scene:(int)arg4;
- (id)layoutStylesOfContentWithUserComment:(id)arg1 width:(double)arg2;
- (id)layoutStylesOfLikeUserWithDataItem:(id)arg1 width:(double)arg2;
- (id)layoutStylesOfTransContentWithUserComment:(id)arg1 width:(double)arg2;
@property(nonatomic) int likeCommentStoryBubbleDynaCfgVal; // @synthesize likeCommentStoryBubbleDynaCfgVal=_likeCommentStoryBubbleDynaCfgVal;
- (void)likeObject:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)likeObjectByID:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)likeObjectByID:(id)arg1 toStranger:(id)arg2 source:(long long)arg3;
- (double)likeUserHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (id)loadLastPostPrivacySetting;
- (id)loadRealFeedExposureItem;
- (void)localDeleteAllGroups;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (void)logAdContext:(id)arg1 adPreFeedList:(id)arg2 adNextFeedList:(id)arg3;
- (void)logChangeAlbumBkgImage:(id)arg1;
- (void)logClickAdPoiInfo:(id)arg1;
- (void)logClickFailFeed:(id)arg1 index:(unsigned int)arg2 failCount:(unsigned int)arg3;
- (void)logClickHeadImageToAlbum:(id)arg1 userName:(id)arg2;
- (void)logClickHeadImageToProfile:(id)arg1 userName:(id)arg2;
- (void)logClickNickNameToAlbum:(id)arg1 userName:(id)arg2;
- (void)logClickNickNameToProfile:(id)arg1 userName:(id)arg2;
- (void)logClickPoiInfo:(id)arg1;
- (void)logClickToPlayMusic:(id)arg1 musicInfo:(id)arg2;
- (void)logClickToViewBigImage:(id)arg1 mediaId:(id)arg2 pictureIndex:(int)arg3;
- (void)logClickToViewSight:(id)arg1 mediaId:(id)arg2;
- (void)logClickToViewUrl:(id)arg1;
- (void)logClickUnreadMessage:(unsigned int)arg1;
- (void)logCommentFeed:(id)arg1;
- (void)logDataListChanged:(unsigned int)arg1 startFeed:(id)arg2 endFeed:(id)arg3;
- (void)logDeleteFeed:(id)arg1;
- (void)logEndScreenShot:(unsigned long long)arg1;
- (void)logEndViewBigImage:(id)arg1 downloadedPictureCount:(unsigned int)arg2;
- (void)logEndViewSight:(id)arg1;
- (void)logEnterBackground;
- (void)logEnterForeground;
- (void)logEnterTimeline:(_Bool)arg1 unreadMessageCount:(unsigned int)arg2;
- (void)logExitTimeline:(_Bool)arg1 hasNewFeedInServer:(_Bool)arg2 startReadId:(id)arg3 endReadId:(id)arg4 waitLoadedFeedId:(id)arg5 browseFeedCount:(unsigned int)arg6 browseNewFeedCount:(unsigned int)arg7;
- (void)logExposeFeed:(id)arg1 reason:(id)arg2;
- (void)logFeedCommentPosition:(id)arg1 comment:(id)arg2 frame:(struct CGRect)arg3 timeStamp:(unsigned long long)arg4;
- (void)logFeedContentPosition:(id)arg1 frame:(struct CGRect)arg2 timeStamp:(unsigned long long)arg3;
- (void)logFeedLikeListPosition:(id)arg1 frame:(struct CGRect)arg2 timeStamp:(unsigned long long)arg3;
- (void)logLikeFeed:(id)arg1;
- (void)logOtherContentPostiont:(id)arg1 frame:(struct CGRect)arg2 timeStamp:(unsigned long long)arg3;
- (void)logPreviewBigImageCount:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)logRefCommentFeed:(id)arg1 refComment:(id)arg2;
- (void)logRefreshHead:(unsigned int)arg1;
- (void)logRefreshNextPage:(unsigned int)arg1 hasEnoughLocalData:(_Bool)arg2;
- (void)logShowFloatView:(id)arg1;
- (void)logSimpleScreenShot;
- (void)logSnsSightClick:(id)arg1 sightVideoExist:(_Bool)arg2 autoPlay:(_Bool)arg3;
- (void)logStartCommentFeed:(id)arg1;
- (void)logStartRefCommentFeed:(id)arg1 refComment:(id)arg2;
- (void)logStartScreenShot:(double)arg1 topBarHeight:(double)arg2 screenWidth:(double)arg3 screenHeight:(double)arg4 visibleTopOffset:(double)arg5 visibleBottomOffset:(double)arg6 timeStamp:(unsigned long long)arg7;
- (void)logTranslateFeedComment:(id)arg1 comment:(id)arg2;
- (void)logTranslateFeedContent:(id)arg1;
- (void)logUploadFinished:(id)arg1;
- (void)logUserAction:(int)arg1 onScene:(int)arg2 forFeed:(id)arg3;
- (id)logicMgr;
- (void)markDataItemDeleted:(id)arg1;
- (void)markHasShowSnsCommitDragTip;
- (void)markMessageAllReadWithSyncMessage:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (void)markMessageRead:(id)arg1;
- (void)mergeSnsOperationsWithFeedId:(id)arg1 feedCreateTime:(unsigned int)arg2 snsOperationsData:(id)arg3;
- (id)messageMgrWithDB;
- (void)modifyDataItem:(id)arg1 notify:(_Bool)arg2;
- (_Bool)needUploadData;
- (id)networkEventDic;
- (void)notifyTimelineVcWillAppear;
- (void)notifyTimelineVcWillPop;
- (void)notifyTotalCountWhenDataItemDeleted:(id)arg1;
- (void)onAdCanvasViewStateChange:(int)arg1;
- (void)onAdDetailPageStateChange:(int)arg1;
- (void)onAdForwardCanvasViewStateChange:(int)arg1;
- (void)onAdForwardSteamVideoStateChange:(int)arg1;
- (void)onAdFullScreenImageViewStateChange:(int)arg1;
- (void)onAdFullScreenSightStateChange:(int)arg1;
- (void)onAdLongVideoViewStateChange:(int)arg1;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(int)arg2;
- (void)onAdvertiseCommentReturn:(id)arg1;
- (void)onAdvertiseItemDeleted:(id)arg1;
- (void)onAlbumViewForMySelfStateChange:(int)arg1;
- (void)onAlbumViewForOthersStateChange:(int)arg1;
- (void)onBGStorageUpdated;
- (void)onBeginDownload:(id)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageAddedQueue:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageBegin:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageCancel:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageFail:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageFinish:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageProcessChanged:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onClickCameraButtonForStat;
- (void)onClickPostButtonForStat:(_Bool)arg1 contentType:(unsigned int)arg2;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onCommentReturn:(id)arg1;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onDataItemExposeFinisehd:(int)arg1 dataItem:(id)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
- (void)onExptItemListChange;
- (void)onExternalArticleViewStateChange:(int)arg1;
- (void)onFontSizeChange;
- (void)onFullScreenImageViewStateChange:(int)arg1;
- (void)onFullScreenSightViewStateChange:(int)arg1;
- (void)onHomepage:(id)arg1 BGImgChanged:(id)arg2;
- (void)onHomepage:(id)arg1 limitFeedIdChanged:(unsigned long long)arg2;
- (void)onHomepage:(id)arg1 totalCountChanged:(long long)arg2;
- (void)onHomepageUpdate:(int)arg1 tip:(id)arg2 username:(id)arg3 withAdded:(id)arg4 andChanged:(id)arg5 andDeleted:(id)arg6;
- (void)onLatestWCObjectChanged:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)onMPArticleViewStateChange:(int)arg1;
- (void)onMessageListViewStateChange:(int)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onNewPostViewStateChange:(int)arg1;
- (void)onNoMoreTimelineData;
- (void)onPOIDetailForDataItem:(id)arg1 StateChange:(int)arg2;
- (void)onPreloadSnsVideoForDataItem:(id)arg1;
- (void)onRemoveCachesOfContentWithDataItemId:(id)arg1;
- (void)onRemoveCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)onReveiceStrangerMessage:(id)arg1;
- (void)onReveiceWCMessages:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onSetWCMessageNotifyFinished:(int)arg1 dataItemID:(id)arg2 opFlag:(_Bool)arg3;
- (void)onTimeLineViewStateChange:(int)arg1;
- (void)onTimelineDataChanged:(id)arg1 andAdItems:(id)arg2;
- (void)onTimelineDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onUpdateAdObjectDetail:(id)arg1;
- (void)onUpdateDataItemDetailFinisehd:(int)arg1 dataItem:(id)arg2;
- (void)onUploadFailed:(id)arg1;
- (void)onUploadFinished:(id)arg1;
- (void)onUploadRestarted:(id)arg1;
- (void)onWCDeleteGroupReturn:(_Bool)arg1 groupID:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupUpdated;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)onWebViewForURL:(id)arg1 Ad:(_Bool)arg2 StreamVideo:(_Bool)arg3 StateChange:(int)arg4;
- (void)operateUrlFeed:(int)arg1 dataItem:(id)arg2;
- (void)parseSnsCanvasAdOutsideIcon:(id)arg1;
- (id)pathForExposureDicCache;
- (id)pathForWCOperationSetting;
- (id)patternCacheMgr;
- (void)pausePreloadImage;
- (unsigned long long)preGetFacadeCacheSize;
- (id)preloadLogic;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(int)arg2;
- (void)recordFeedExposureWithFeedId:(id)arg1 appId:(id)arg2 isFold:(_Bool)arg3;
- (void)recordRealFeedExposureWithFeedId:(id)arg1;
- (void)reloadDatabase;
- (void)reloadTimelineDataItems;
- (void)removeCachesByContact:(id)arg1;
- (void)removeCachesOfContentWithDataItemId:(id)arg1;
- (void)removeCachesOfContentWithUserComment:(id)arg1;
- (void)removeCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)removeCachesOfTransContentWithUserComment:(id)arg1;
- (void)removeContentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)removeContentHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)removeFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)removeItemForClickBigImage:(id)arg1;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 withScene:(int)arg3;
- (void)removePreloadItemForBigImage:(id)arg1;
- (void)removeSucPreloadInfoForItemId:(id)arg1;
- (void)removeTipData:(id)arg1 layerId:(id)arg2;
- (void)removeTransContentHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)replaceTipData:(id)arg1 dataItem:(id)arg2 layerId:(id)arg3;
- (void)reportBrowseInfo;
- (void)reportData;
- (void)reportIfForwardByWeishi:(id)arg1;
- (void)reportSightPlayWithURL:(id)arg1 AndSnsPublishId:(id)arg2 AndIsCollapsed:(int)arg3;
- (void)reportWeishiItem:(id)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (void)restartUploadDataItem:(id)arg1;
- (void)resumePreloadImage;
- (_Bool)saveExposureFeedIdDic;
- (void)saveLastPostPrivacySetting:(id)arg1;
- (_Bool)saveRealFeedExposureItem;
- (void)saveSnsLocalCache;
- (void)setBGImgLikedForUser:(id)arg1 source:(long long)arg2;
- (void)setContentDescHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3;
- (void)setContentHeight:(double)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (void)setDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (void)setDataItemHate:(id)arg1;
- (void)setDataItemPrivate:(id)arg1;
- (void)setDataItemPublic:(id)arg1;
- (void)setDelayShowInfoNeedDelay:(id)arg1;
- (void)setDownloadScene:(int)arg1;
- (void)setHasReadHotImageTip;
- (void)setHasReadHotVideoTip;
- (void)setHotImageItem:(id)arg1;
- (void)setHotVideoItem:(id)arg1;
- (void)setLayoutStylesOfContent:(id)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (void)setLayoutStylesOfContentDesc:(id)arg1 withDataItem:(id)arg2 width:(double)arg3 isShowDetail:(_Bool)arg4 scene:(int)arg5;
- (void)setLayoutStylesOfLikeUser:(id)arg1 withDataItem:(id)arg2 width:(double)arg3;
- (void)setLayoutStylesOfTransContent:(id)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (void)setMessageNotificationForDataItem:(id)arg1 ignored:(_Bool)arg2;
- (void)setPostPrivacy:(int)arg1;
- (void)setPostPrivacy:(int)arg1 withLabelNames:(id)arg2;
- (void)setShowNewTimelineEventNotification:(_Bool)arg1;
- (void)setShowTime:(unsigned int)arg1 WithFeedId:(id)arg2;
- (void)setSightDownloadProgress:(float)arg1 andItemID:(id)arg2;
- (void)setSightPlayStatus:(_Bool)arg1 andItemID:(id)arg2;
- (void)setSightView:(id)arg1 andItemID:(id)arg2;
- (void)setStartEnterBackGroundTime;
@property(nonatomic) int switchInfo;
- (void)setTransContentHeight:(double)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (void)setlikeUserHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3;
- (_Bool)shouldLogBigImageLoadedEfficency:(id)arg1;
- (_Bool)shouldLogSmallImageLoadedEfficency:(id)arg1;
- (_Bool)shouldShowSnsCommitDragTip;
- (id)snsABTestMgr;
- (id)snsLocalCacheMgr;
- (unsigned long long)startDownloadSightMedia:(id)arg1;
- (unsigned long long)startDownloadSightMedia:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)startPreloadSnsVideoForDataItem:(id)arg1;
- (void)stopSightMgrHolding;
- (id)strangerCommentMgrWithDB;
- (void)timelineListStatusSync;
- (id)timelineMgr;
- (double)transContentHeightWithUserComment:(id)arg1 width:(double)arg2;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(_Bool)arg3 endTime:(_Bool)arg4;
- (void)tryLogBigImageLoadedEfficency:(id)arg1 mid:(id)arg2 loadedResult:(unsigned int)arg3 costTime:(unsigned int)arg4;
- (void)tryLogClickBigImage:(id)arg1 clickIndex:(unsigned int)arg2 clickCount:(unsigned int)arg3 downloadCount:(unsigned int)arg4 scanIndexArrayStr:(id)arg5 scaleOutIndexArrayStr:(id)arg6 scaleInIndexArrayStr:(id)arg7 IsCollapsed:(unsigned int)arg8;
- (void)tryLogPreloadImageResult;
- (void)tryLogPreloadSucForBigImageLoadedEfficency:(id)arg1 mid:(id)arg2;
- (void)tryLogPreloadSucForSmallImageLoadedEfficency:(id)arg1;
- (void)tryLogSmallImageLoadedEfficency:(id)arg1 loadedResult:(unsigned int)arg2 costTime:(unsigned int)arg3 loadedCount:(unsigned int)arg4;
- (void)tryReportABTestResult;
- (void)tryReportData;
- (void)trySaveWCOperSetting;
- (_Bool)unCommentObject:(id)arg1 ofUser:(id)arg2 comment:(id)arg3;
- (_Bool)unLikeObject:(id)arg1 ofUser:(id)arg2;
- (void)uncacheText:(id)arg1 refCommentItem:(id)arg2;
- (void)updateAdvertiseInfo:(id)arg1;
- (void)updateAllGroups;
- (void)updateBGStorage;
- (void)updateBackGroundTime;
- (void)updateCurrentPage:(int)arg1;
- (void)updateDataItemDetail:(id)arg1;
- (void)updateDataItemDetail:(id)arg1 source:(int)arg2 RemindFriendsInfoData:(id)arg3;
- (void)updateDataItemDetailByItem:(id)arg1;
- (void)updateDataItemDetailWithGroupDetail:(id)arg1;
- (void)updateDownloadConcurrentCount;
- (_Bool)updateHomePageHead:(id)arg1;
- (_Bool)updateHomePageHead:(id)arg1 source:(long long)arg2;
- (_Bool)updateHomePageOnlySightAndPhotoHead:(id)arg1;
- (_Bool)updateHomePageOnlySightAndPhotoTail:(id)arg1;
- (_Bool)updateHomePageTail:(id)arg1;
- (void)updateLastSeenItemForClickRatio:(id)arg1;
- (void)updateSightThumbToMatchVideoIfNeededWithMediaItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)updateTimelineHead;
- (_Bool)updateTimelineTail;
- (void)updateVideoDownloadModeWithMediaId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (id)uploadDataItem:(id)arg1;
- (id)uploadMgr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

