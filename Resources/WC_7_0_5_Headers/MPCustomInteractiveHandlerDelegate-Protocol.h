//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPCustomInteractiveHandler;

@protocol MPCustomInteractiveHandlerDelegate <NSObject>
- (void)onCustomInteractiveTransitioningBegin:(MPCustomInteractiveHandler *)arg1;

@optional
- (void)onCustomInteractiveTransitioningEnd:(MPCustomInteractiveHandler *)arg1 isComplete:(_Bool)arg2;
@end

