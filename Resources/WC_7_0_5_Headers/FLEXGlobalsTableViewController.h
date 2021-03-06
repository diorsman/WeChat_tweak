//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray;

@interface FLEXGlobalsTableViewController : UITableViewController
{
    id <FLEXGlobalsTableViewControllerDelegate> _delegate;
    NSArray *_entries;
}

+ (id)defaultGlobalEntries;
+ (void)setApplicationWindow:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FLEXGlobalsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)donePressed:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)globalEntryAtIndexPath:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForRowAtIndexPath:(id)arg1;
- (id)viewControllerToPushForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;

@end

