//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWindow.h"

@interface SBStarkNowPlayingWindow : SBWindow
{
    id <SBStarkWindowDelegate> _starkWindowDelegate;
}

@property(nonatomic) __weak id <SBStarkWindowDelegate> starkWindowDelegate; // @synthesize starkWindowDelegate=_starkWindowDelegate;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;

@end

