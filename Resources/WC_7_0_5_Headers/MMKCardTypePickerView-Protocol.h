//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMKView.h"

@class MMKCardTypePickerViewOnSelectCallback, NSArray;

@protocol MMKCardTypePickerView <MMKView>
- (_Bool)getEnabled;
- (_Bool)getFocus;
- (void)select:(int)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setFocus:(_Bool)arg1;
- (void)setOnSelectCallback:(MMKCardTypePickerViewOnSelectCallback *)arg1;
- (void)setOptions:(NSArray *)arg1;
@end

