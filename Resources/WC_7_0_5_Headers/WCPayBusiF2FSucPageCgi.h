//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@interface WCPayBusiF2FSucPageCgi : WCPayBaseCgi
{
    id <WCPayBusiF2FSucPageCgiDelegate> _m_cgiDelegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WCPayBusiF2FSucPageCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
- (void)startRequest:(id)arg1;

@end

