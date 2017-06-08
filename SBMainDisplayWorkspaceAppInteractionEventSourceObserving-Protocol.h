//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, SBLayoutElement, SBMainDisplayLayoutState, SBMainDisplayWorkspaceAppInteractionEventSource;

@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>

@optional
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 keyboardFocusChangedToApplication:(NSString *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userTouchedApplication:(NSString *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 applicationsBecameVisible:(NSSet *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 applicationsBecameHidden:(NSSet *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userQuitApplicationInSwitcher:(NSString *)arg2;
- (void)eventSource:(SBMainDisplayWorkspaceAppInteractionEventSource *)arg1 userDeletedApplications:(NSSet *)arg2;
@end

