//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBPressSequenceRecognizer;

@protocol SBPressSequenceRecognizerDelegate <NSObject>
- (void)pressSequenceRecognizerDidCompleteSequence:(SBPressSequenceRecognizer *)arg1;

@optional
- (void)pressSequenceRecognizerDidFail:(SBPressSequenceRecognizer *)arg1;
- (void)pressSequenceRecognizer:(SBPressSequenceRecognizer *)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
@end

