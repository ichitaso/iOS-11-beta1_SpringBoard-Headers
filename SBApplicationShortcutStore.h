//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface SBApplicationShortcutStore : NSObject
{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    unsigned long long _cachedVersion;
    _Bool _isLoaded;
    _Bool _isDirty;
    NSString *_bundleIdentifier;
}

+ (void)clearStore;
+ (id)_storeURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)_saveQueue_save;
- (void)_stateLock_markDirty;
- (void)_stateLock_loadFromDiskIfNeeded;
- (id)_plistArrayFromApplicationShortcutItems:(id)arg1;
- (id)_applicationShortcutItemsFromPlistArray:(id)arg1;
- (id)_url;
- (void)saveSynchronously;
- (void)invalidateCache;
- (void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, copy, nonatomic) NSArray *languages;
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;

@end

