//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction
{
    int _pidToPiP;
    SBWorkspaceEntity *_entityToPiP;
    long long _transitionStyle;
    long long _inferredTransitionStyle;
    NSString *_reason;
}

@property(readonly, copy, nonatomic) SBWorkspaceEntity *entityToPiP; // @synthesize entityToPiP=_entityToPiP;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void).cxx_destruct;
- (long long)_transitionStyle;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@end

