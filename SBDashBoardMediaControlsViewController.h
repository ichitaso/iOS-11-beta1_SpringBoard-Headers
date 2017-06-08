//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardNowPlayingViewController.h"

#import "MPULockScreenMediaControlsDelegate.h"
#import "SBDashBoardAdjunctItemHosting.h"

@class MPULockScreenMediaControlsViewController, MediaControlsPanelViewController, NSString;

@interface SBDashBoardMediaControlsViewController : SBDashBoardNowPlayingViewController <MPULockScreenMediaControlsDelegate, SBDashBoardAdjunctItemHosting>
{
    MPULockScreenMediaControlsViewController *_mediaControlsViewController;
    MediaControlsPanelViewController *_mediaControlsPanelViewController;
    struct CGSize _containerSize;
}

+ (Class)viewClass;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (void).cxx_destruct;
- (struct CGRect)_suggestedFrameForMediaControls;
- (void)_updatePersistentUpdatesEnabled:(_Bool)arg1;
- (void)_layoutMediaControls;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)mediaControlsViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (struct CGSize)preferredContentSize;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMediaControlsViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
