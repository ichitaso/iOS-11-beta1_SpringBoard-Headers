//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBApplication, UIView;

@protocol SBLoginAppSceneHoster <NSObject>
@property(nonatomic) _Bool deferHIDEvents;
@property(readonly, nonatomic) SBApplication *hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate;
- (void)updateSettingsWithTransitionBlock:(FBSSceneTransitionContext * (^)(FBSMutableSceneSettings *))arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

