//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportPackageCheckAction : WAReportBaseItem
{
    _Bool _stopByEnterForeground;
    unsigned int _allPackageSize;
    unsigned int _allPackageClientStoragePercent;
    unsigned int _clientStorageFreePercent;
    unsigned int _abtestStatus;
    unsigned int _weappCountThatHasPackage;
    unsigned int _costTime;
}

@property(nonatomic) unsigned int abtestStatus; // @synthesize abtestStatus=_abtestStatus;
@property(nonatomic) unsigned int allPackageClientStoragePercent; // @synthesize allPackageClientStoragePercent=_allPackageClientStoragePercent;
@property(nonatomic) unsigned int allPackageSize; // @synthesize allPackageSize=_allPackageSize;
@property(nonatomic) unsigned int clientStorageFreePercent; // @synthesize clientStorageFreePercent=_clientStorageFreePercent;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
- (id)reportString;
@property(nonatomic) _Bool stopByEnterForeground; // @synthesize stopByEnterForeground=_stopByEnterForeground;
@property(nonatomic) unsigned int weappCountThatHasPackage; // @synthesize weappCountThatHasPackage=_weappCountThatHasPackage;

@end

