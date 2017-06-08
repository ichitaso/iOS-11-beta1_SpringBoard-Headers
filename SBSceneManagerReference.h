//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDebugDescriptionProviding.h"

@class FBSDisplayIdentity, NSMutableSet, NSString, SBSceneManager;

@interface SBSceneManagerReference : NSObject <BSDebugDescriptionProviding>
{
    FBSDisplayIdentity *_displayIdentity;
    id <SBSceneManagerReferenceDelegate> _delegate;
    SBSceneManager *_manager;
    SBSceneManager *_weak_manager;
    _Bool _managerWasValid;
    _Bool _displayIsConnected;
    NSMutableSet *_retainingScenes;
    _Bool _invalidated;
}

@property(retain, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
- (void).cxx_destruct;
- (void)invalidate;
- (void)releaseForScene:(id)arg1;
- (void)retainForScene:(id)arg1;
- (void)setDisplayIsConnected:(_Bool)arg1;
- (_Bool)isDefunct;
- (_Bool)isRetaining;
- (void)setManager:(id)arg1;
- (id)manager;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_autoreleaseManager:(id)arg1;
- (void)_updateRetainWithBlock:(CDUnknownBlockType)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithDisplayIdentity:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

