//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

#import "SBSceneViewHostRequester.h"

@class NSString, SBBestAppSuggestion, SBDeviceApplicationSceneView, SBOrientationTransformWrapperView;

@interface SBSwitcherAppSuggestionSlideUpView : SBSwitcherWallpaperPageContentView <SBSceneViewHostRequester>
{
    SBBestAppSuggestion *_bestAppSuggestion;
    SBDeviceApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_appViewLayoutWrapper;
    long long _resultingOrientation;
}

- (void).cxx_destruct;
- (void)_configureContentView;
- (long long)sceneViewHostingPriority:(id)arg1;
- (id)sceneViewHostingRequestIdentifier:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1 appSuggestion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

