//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFolder, SBIconModel;

@protocol SBIconStateUnarchiveContext <NSObject>
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteSignificantDeviation;
- (void)_noteRepresentationIsCorrupted;
- (long long)_currentParseDepth;
- (void)_noteExitedNode;
- (void)_noteEnteredNode;
- (SBFolder *)_popFolder;
- (SBFolder *)_currentFolder;
- (void)_pushFolder:(SBFolder *)arg1;
- (SBIconModel *)_iconSource;
@end

