//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBApplicationServerHarmonyDelegate.h"

@class NSString;

@interface SBApplicationHarmonyService : NSObject <SBApplicationServerHarmonyDelegate>
{
}

+ (id)sharedInstance;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

