//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBStatusBarStateAggregator;

@protocol SBStatusBarStateAggregatorPosting <NSObject>
- (void)statusBarStateAggregatorDidFinishPost:(SBStatusBarStateAggregator *)arg1 withData:(const CDStruct_121c720f *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(SBStatusBarStateAggregator *)arg1 didUpdateNonItemData:(const CDStruct_121c720f *)arg2;
- (void)statusBarStateAggregator:(SBStatusBarStateAggregator *)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const CDStruct_121c720f *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(SBStatusBarStateAggregator *)arg1;
@end

