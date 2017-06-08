//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertItemPresenter.h"

@class NSString, SBSharedModalAlertItemPresenter;

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter>
{
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}

- (void).cxx_destruct;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canPresentMultipleAlertItemsSimultaneously;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

