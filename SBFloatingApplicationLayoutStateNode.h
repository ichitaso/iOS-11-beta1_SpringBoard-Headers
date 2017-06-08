//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SBLayoutStateNode.h"

@class NSArray, NSString;

@interface SBFloatingApplicationLayoutStateNode : NSObject <NSSecureCoding, SBLayoutStateNode>
{
    id <SBLayoutStateNode> _parent;
    NSString *_bundleIdentifier;
    long long _layoutConfiguration;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) __weak id <SBLayoutStateNode> parent;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)_initWithParent:(id)arg1 bundleIdentifier:(id)arg2 layoutConfiguration:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
