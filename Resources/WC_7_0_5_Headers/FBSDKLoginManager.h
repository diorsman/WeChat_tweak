//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKURLOpening.h"

@class FBSDKKeychainStore, FBSDKLoginManagerLogger, NSSet, NSString, UIViewController;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening>
{
    CDUnknownBlockType _handler;
    FBSDKLoginManagerLogger *_logger;
    long long _state;
    FBSDKKeychainStore *_keychainStore;
    _Bool _usedSFAuthSession;
    NSString *_authType;
    unsigned long long _defaultAudience;
    unsigned long long _loginBehavior;
    UIViewController *_fromViewController;
    NSSet *_requestedPermissions;
}

+ (void)initialize;
+ (id)stringForChallenge;
- (void).cxx_destruct;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)assertPermissions:(id)arg1;
@property(retain, nonatomic) NSString *authType; // @synthesize authType=_authType;
- (_Bool)canOpenURL:(id)arg1 forApplication:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)completeAuthentication:(id)arg1 expectChallenge:(_Bool)arg2;
@property(nonatomic) unsigned long long defaultAudience; // @synthesize defaultAudience=_defaultAudience;
- (void)determineRecentlyGrantedPermissions:(id *)arg1 recentlyDeclinedPermissions:(id *)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void)handleImplicitCancelOfLogIn;
- (id)init;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (_Bool)isAuthenticationURL:(id)arg1;
- (_Bool)isPerformingLogin;
@property(readonly, copy, nonatomic) NSString *loadExpectedChallenge;
- (id)logInParametersWithPermissions:(id)arg1 serverConfiguration:(id)arg2;
- (void)logInWithBehavior:(unsigned long long)arg1;
- (void)logInWithPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logOut;
@property(nonatomic) unsigned long long loginBehavior; // @synthesize loginBehavior=_loginBehavior;
- (void)performBrowserLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)raiseLoginException:(id)arg1;
- (void)reauthorizeDataAccess:(CDUnknownBlockType)arg1;
- (void)reauthorizeDataAccess:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSSet *requestedPermissions; // @synthesize requestedPermissions=_requestedPermissions;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (void)setRequestedPermissions:(id)arg1;
- (void)storeExpectedChallenge:(id)arg1;
- (_Bool)validateLoginStartState;
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

