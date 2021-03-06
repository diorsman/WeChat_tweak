//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QBScriptMessageHandlerDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class NSString, NSURL, QBProtocolCallback, QBScriptMessageHandler;

@interface QBWKWebViewProxy : NSObject <QBScriptMessageHandlerDelegate, WKNavigationDelegate, WKUIDelegate>
{
    QBScriptMessageHandler *_scriptMessageHandler;
    NSString *_selectedString;
    QBProtocolCallback *_callback;
    NSURL *_currentURL;
    NSURL *_currentMainURL;
    NSURL *_currentMutableMainURL;
    _Bool _isNewPageRequest;
    _Bool isULinkSwitchOn;
    _Bool _needInjectJsInNetwork;
    _Bool _isSelfProxyEnabled;
    id <WKNavigationDelegate> _navigationDelegate;
    id <WKUIDelegate> _UIDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WKUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
- (id)absoluteURLFromPostURLString:(id)arg1 baseURL:(id)arg2 locationString:(id)arg3 frameURL:(id)arg4;
- (void)addAllScriptMsgHandle:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)handler:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)init;
- (_Bool)isMainRequest:(id)arg1 navigationType:(long long)arg2;
@property(nonatomic) _Bool isSelfProxyEnabled; // @synthesize isSelfProxyEnabled=_isSelfProxyEnabled;
@property(nonatomic) __weak id <WKNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) _Bool needInjectJsInNetwork; // @synthesize needInjectJsInNetwork=_needInjectJsInNetwork;
- (void)processForXhr:(id)arg1 inWkWebView:(id)arg2 forFrameInfo:(id)arg3;
- (void)removeAllScriptMsgHandle:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy, nonatomic) NSString *selectedString;
- (void)updateLocalCK:(id)arg1 inWkWebView:(id)arg2 withURL:(id)arg3;
- (void)updateSelectedString:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webViewDidClose:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webview:(id)arg1 beginLoadRequest:(id)arg2;
- (void)webview:(id)arg1 beginReloadWithURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

