//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface SBHardwareButtonGestureParameters : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    long long _maximumPressCount;
    double _longPressTimeInterval;
    double _multiplePressTimeInterval;
}

@property(readonly, nonatomic) double multiplePressTimeInterval; // @synthesize multiplePressTimeInterval=_multiplePressTimeInterval;
@property(readonly, nonatomic) double longPressTimeInterval; // @synthesize longPressTimeInterval=_longPressTimeInterval;
@property(readonly, nonatomic) long long maximumPressCount; // @synthesize maximumPressCount=_maximumPressCount;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

