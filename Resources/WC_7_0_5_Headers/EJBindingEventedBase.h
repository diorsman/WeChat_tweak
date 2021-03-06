//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingBase.h"

@class NSMutableDictionary;

@interface EJBindingEventedBase : EJBindingBase
{
    NSMutableDictionary *eventListeners;
    NSMutableDictionary *onCallbacks;
}

+ (void *)_ptr_to_func_addEventListener;
+ (void *)_ptr_to_func_removeEventListener;
- (struct OpaqueJSValue *)_func_addEventListener:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_removeEventListener:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)dealloc;
- (struct OpaqueJSValue *)getCallbackWithType:(id)arg1 ctx:(struct OpaqueJSContext *)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)setCallbackWithType:(id)arg1 ctx:(struct OpaqueJSContext *)arg2 callback:(struct OpaqueJSValue *)arg3;
- (void)triggerEvent:(id)arg1 isMain:(_Bool)arg2;
- (void)triggerEvent:(id)arg1 isMain:(_Bool)arg2 argc:(int)arg3 argv:(const struct OpaqueJSValue **)arg4;
- (void)triggerEvent:(id)arg1 isMain:(_Bool)arg2 properties:(CDStruct_a447ca18 *)arg3;

@end

