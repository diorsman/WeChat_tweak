//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WAPageSheetDelegate.h"
#import "WASubscriptionMessagePageSheetDelegate.h"

@class NSArray, NSString, WASubscriptionMessageDataReporter;

@interface WASubscriptionMessageLogic : MMObject <WASubscriptionMessagePageSheetDelegate, WAPageSheetDelegate>
{
    id <WASubscriptionMessageLogicDelegate> _delegate;
    id <WASubscriptionMessageLogicDataSource> _dataSource;
    NSArray *_templateIDArray;
    NSString *_username;
    WASubscriptionMessageDataReporter *_dataReporter;
}

- (void).cxx_destruct;
- (void)callFinishedDelegateWithResult:(id)arg1 success:(_Bool)arg2 cancel:(_Bool)arg3 errorMessage:(id)arg4 errorCode:(long long)arg5;
- (id)containerViewController;
@property(retain, nonatomic) WASubscriptionMessageDataReporter *dataReporter; // @synthesize dataReporter=_dataReporter;
@property(nonatomic) __weak id <WASubscriptionMessageLogicDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WASubscriptionMessageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithTemplateIDArray:(id)arg1 username:(id)arg2;
- (CDUnknownBlockType)requestListByIDFailHandler;
- (CDUnknownBlockType)requestListByIDSucceessHandler;
- (CDUnknownBlockType)requestSubscribeFailHandler;
- (CDUnknownBlockType)requestSubscribeSuccessHandler;
- (void)sendListRequest;
- (void)sendSubscribeRequestWithViewModel:(id)arg1;
@property(copy, nonatomic) NSArray *templateIDArray; // @synthesize templateIDArray=_templateIDArray;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)start;
- (void)subscriptionMessagePageSheet:(id)arg1 infoButtonClickedAtIndex:(unsigned long long)arg2;
- (void)subscriptionMessagePageSheet:(id)arg1 operationTypeChanged:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

