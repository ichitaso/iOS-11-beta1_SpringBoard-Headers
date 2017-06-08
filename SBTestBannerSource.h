//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIBannerSource.h"

@class NSMutableArray, NSString;

@interface SBTestBannerSource : NSObject <SBUIBannerSource>
{
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
    long long _count;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewDidAppear:(id)arg1;
- (void)bannerViewWillAppear:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (void)dismissBanner;
- (void)enqueueBanner;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

