//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCUserComment;

@interface WCUserCommentUICache : NSObject
{
    WCUserComment *m_userComment;
    map_a50a422b m_contentHeight;
    map_729765ba m_userCommentLayoutStyles;
    map_a50a422b m_transContentHeight;
    map_729765ba m_userTransCommentLayoutStyles;
    _Bool _userHasStory;
    _Bool _refHasStory;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (map_a50a422b *)contentHeight;
- (void)dealloc;
- (_Bool)isEmpty;
@property(nonatomic) _Bool refHasStory; // @synthesize refHasStory=_refHasStory;
@property(retain, nonatomic) WCUserComment *userComment; // @synthesize userComment=m_userComment;
@property(nonatomic) _Bool userHasStory; // @synthesize userHasStory=_userHasStory;
- (map_a50a422b *)transContentHeight;
- (map_729765ba *)userCommentLayoutStyles;
- (map_729765ba *)userTransCommentLayoutStyles;

@end

