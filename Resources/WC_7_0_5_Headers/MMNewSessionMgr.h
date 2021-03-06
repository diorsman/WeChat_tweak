//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDescMgrExt.h"
#import "IContactMgrExt.h"
#import "IEnterpriseMsgExt.h"
#import "IMsgExt.h"
#import "ISessionInfoExt.h"
#import "MMService.h"
#import "MMSessionRefreshExt.h"

@class MMChatContentUploadLogic, MMSessionDB, NSArray, NSMutableArray, NSMutableDictionary, NSString, SessionSortLogic;

@interface MMNewSessionMgr : MMService <IEnterpriseMsgExt, ISessionInfoExt, EmoticonDescMgrExt, MMSessionRefreshExt, MMService, IMsgExt, IContactMgrExt>
{
    NSMutableArray *m_arrSession;
    MMSessionDB *m_sessionStorage;
    NSString *m_nsActiveUserName;
    SessionSortLogic *m_oSessionSortLogic;
    unsigned int m_uiTotalUnReadCount;
    unsigned int m_appIconTotalUnreadCount;
    NSMutableDictionary *m_dicAtMeCount;
    NSMutableDictionary *m_dicNewInvCount;
    NSMutableDictionary *m_dicTransferCount;
    NSMutableDictionary *m_dictAACount;
    NSMutableDictionary *m_dictUpdatableMsgDigest;
    MMChatContentUploadLogic *m_chatUploadLogic;
    NSArray *m_compareSorterArray;
    NSArray *m_sessionFilterArray;
    _Bool m_shouldReload;
    _Bool m_shouldChangeUnreadCount;
    NSMutableArray *m_notifySessionChangeArray;
    NSMutableArray *m_notifyNewMsgArrivingArray;
    _Bool m_bNotifySound;
    NSMutableDictionary *m_dicAtMeType;
}

- (void).cxx_destruct;
- (void)AddOrModifySession:(id)arg1 withNotifyFlag:(int)arg2;
- (void)AddSessionToTop:(id)arg1;
- (void)AsyncFulFillSession:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (void)CleanupPreLoadSessionCache;
- (void)DeleteAllSession;
- (void)DeleteSessionAtIndex:(unsigned int)arg1;
- (void)DeleteSessionOfUser:(id)arg1;
- (void)DeleteSessionWithoutDeleteMessage:(id)arg1;
- (unsigned int)GenSendMsgTime;
- (id)GetActiveUser;
- (id)GetSessionAtIndex:(unsigned int)arg1;
- (id)GetSessionByUserName:(id)arg1;
- (unsigned int)GetSessionCount;
- (id)GetSessionDeleteInfo:(id)arg1;
- (long long)GetSessionIndexByUserName:(id)arg1;
- (id)GetSessionInfoList;
- (id)GetSessionUserNameAtIndex:(unsigned int)arg1;
- (id)GetSyncUserNamesOnSessionListWithMaxCount:(unsigned int)arg1;
- (unsigned int)GetTotalUnreadCount;
- (unsigned int)GetTotalUnreadCountForAppIcon;
- (unsigned int)GetUnReadCountExcludingActiveUser:(id)arg1;
- (id)GetUserNamesOnSessionList;
- (_Bool)HasActiveUser;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (_Bool)IsActiveUser:(id)arg1;
- (_Bool)IsSessionNeedDelayLoad;
- (_Bool)IsSessionWithNullMsg:(id)arg1;
- (_Bool)IsTopSessionCountExceed;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (id)SessionEnumerator;
- (id)SessionNewArray;
- (void)SetActiveSession:(id)arg1;
- (void)TopSessionByName:(id)arg1;
- (void)UntopSessionByName:(id)arg1;
- (void)addContact:(id)arg1 AtUser:(id)arg2;
- (void)appFirstBecomeActive;
- (void)checkAndMergeTopFlag;
- (_Bool)checkContactVerifySysmsgSwitch;
- (void)checkLoadData;
- (void)checkSessionTop:(id)arg1 contact:(id)arg2;
- (_Bool)checkStrangerFirstChat:(id)arg1;
- (void)clearAAMessageCount:(id)arg1;
- (void)clearAtMeCount:(id)arg1;
- (void)clearNeedContactVerifyFlag:(id)arg1;
- (void)clearNewInvApprove:(id)arg1;
- (void)clearNewInvCount:(id)arg1;
- (void)clearTransferCount:(id)arg1;
- (void)clearUpdatableMsgNotify:(id)arg1;
- (void)dealloc;
- (void)deleteAtUserList:(id)arg1;
- (void)deleteSessionAtIndex:(unsigned int)arg1 forceDelete:(_Bool)arg2;
- (void)executeContactVerifyBanner;
- (void)filterSessionDeleted:(id)arg1 modified:(id)arg2;
- (void)fulFillSession:(id)arg1;
- (id)genSessionInfoByContact:(id)arg1;
- (id)genSessionInfoByUserName:(id)arg1;
- (id)getCompareSorterArray;
- (id)getContactByNameForce:(id)arg1;
- (id)getSessionFilterArray;
- (unsigned int)getSessionIndexOfUser:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isMsgNeedProcess:(id)arg1;
- (_Bool)isNeedCallNewMsgArrival:(id)arg1;
- (_Bool)isNeedDeleteMsg:(id)arg1 forceDelete:(_Bool)arg2;
- (_Bool)isNeedSaveSessionInfo:(id)arg1;
- (_Bool)isSessionTopable:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isUserNeedProcess:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)onAddMsgDigetstForSession:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 draftTime:(unsigned int)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)p_buildSession:(_Bool)arg1;
- (void)p_notifyNewMsg:(id)arg1 withNotifyFlag:(int)arg2;
- (void)p_notifySessionChangeArrayAddObject:(id)arg1;
- (void)p_refreshNewSessionMgr;
- (void)processContactWhenAddMsg:(id)arg1;
- (void)processOnAddMsgWithNotifyFlag:(int)arg1 UsrName:(id)arg2;
- (_Bool)realCheckStrangerFirstChat:(id)arg1;
- (void)rebuildSessionInfo;
- (void)recountUnReadCount;
- (void)recountUnReadCountAndFireExtension;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)resortSessions;
- (void)temporaryTopSessionByContact:(id)arg1;
- (void)tryGetContactImage:(id)arg1;
- (void)tryToBuildSession:(_Bool)arg1;
- (void)updateSessions:(id)arg1 NotifyUsrName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

