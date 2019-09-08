//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class CContact, CMessageWrap, MMSessionInfoExt, NSString;

@interface MMSessionInfo : NSObject <WCTTableCoding>
{
    NSString *m_nsUserName;
    NSString *m_nsFilePath;
    unsigned int m_uUnReadCount;
    _Bool m_bShowUnReadAsRedDot;
    CContact *m_contact;
    CMessageWrap *m_msgWrap;
    unsigned int m_uLastTime;
    _Bool m_bIsTop;
    unsigned int m_uTopTime;
    unsigned int m_uUnTopTime;
    unsigned int m_uAtMeCount;
    unsigned int m_uGreenLabelType;
    NSString *m_draftMsg;
    unsigned int m_draftMsgTime;
    NSString *m_atUserList;
    unsigned int m_uNewInvCount;
    _Bool m_uNewInvApprove;
    _Bool m_bNeedContactVerify;
    unsigned int m_uNewNotifyMsgCount;
    unsigned int m_uBrandNotifyType;
    NSString *m_nsBrandNotifyPrefixName;
    unsigned int m_uTransferCount;
    unsigned int m_uAACount;
    unsigned int _m_uAtAllCount;
    unsigned int _ConIntRes2;
    MMSessionInfoExt *m_extendFields;
    NSString *m_waUpdatableMsgDigest;
}

+ (const struct WCTProperty *)ConIntRes2;
+ (void)__wcdb_column_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)m_bShowUnReadAsRedDot;
+ (const struct WCTProperty *)m_extendFields;
+ (const struct WCTProperty *)m_nsFilePath;
+ (const struct WCTProperty *)m_nsUserName;
+ (const struct WCTProperty *)m_uLastTime;
+ (const struct WCTProperty *)m_uUnReadCount;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
- (long long)compare:(id)arg1;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSString *m_atUserList; // @synthesize m_atUserList;
@property(nonatomic) _Bool m_bIsTop; // @synthesize m_bIsTop;
@property(nonatomic) _Bool m_bNeedContactVerify; // @synthesize m_bNeedContactVerify;
@property(nonatomic) _Bool m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) NSString *m_draftMsg; // @synthesize m_draftMsg;
@property(nonatomic) unsigned int m_draftMsgTime; // @synthesize m_draftMsgTime;
@property(retain, nonatomic) MMSessionInfoExt *m_extendFields; // @synthesize m_extendFields;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(copy, nonatomic) NSString *m_nsBrandNotifyPrefixName; // @synthesize m_nsBrandNotifyPrefixName;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(nonatomic) unsigned int m_uAACount; // @synthesize m_uAACount;
@property(nonatomic) unsigned int m_uAtAllCount; // @synthesize m_uAtAllCount=_m_uAtAllCount;
@property(nonatomic) unsigned int m_uAtMeCount; // @synthesize m_uAtMeCount;
@property(nonatomic) unsigned int m_uBrandNotifyType; // @synthesize m_uBrandNotifyType;
@property(nonatomic) unsigned int m_uGreenLabelType; // @synthesize m_uGreenLabelType;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(nonatomic) _Bool m_uNewInvApprove; // @synthesize m_uNewInvApprove;
@property(nonatomic) unsigned int m_uNewInvCount; // @synthesize m_uNewInvCount;
@property(nonatomic) unsigned int m_uNewNotifyMsgCount; // @synthesize m_uNewNotifyMsgCount;
@property(nonatomic) unsigned int m_uTopTime; // @synthesize m_uTopTime;
@property(nonatomic) unsigned int m_uTransferCount; // @synthesize m_uTransferCount;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(nonatomic) unsigned int m_uUnTopTime; // @synthesize m_uUnTopTime;
@property(retain, nonatomic) NSString *m_waUpdatableMsgDigest; // @synthesize m_waUpdatableMsgDigest;
- (void)tryLoadExtInfo;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
