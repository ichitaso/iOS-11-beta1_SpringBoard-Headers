//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBProcessObserver.h"

@class FBApplicationProcess, FBApplicationProcessExitContext;

@protocol FBApplicationProcessObserver <FBProcessObserver>

@optional
- (void)applicationProcessDebuggingStateDidChange:(FBApplicationProcess *)arg1;
- (void)applicationProcessDidExit:(FBApplicationProcess *)arg1 withContext:(FBApplicationProcessExitContext *)arg2;
- (void)applicationProcessDidLaunch:(FBApplicationProcess *)arg1;
- (void)applicationProcessWillLaunch:(FBApplicationProcess *)arg1;
@end

