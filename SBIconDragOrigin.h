//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSIndexPath, NSString, SBFolder;

@interface SBIconDragOrigin : NSObject <BSDescriptionProviding>
{
    SBFolder *_folder;
    NSIndexPath *_relativeIndexPath;
}

@property(copy, nonatomic) NSIndexPath *relativeIndexPath; // @synthesize relativeIndexPath=_relativeIndexPath;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

