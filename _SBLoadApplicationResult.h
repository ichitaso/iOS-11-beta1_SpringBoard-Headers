//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _SBLoadApplicationResult : NSObject
{
    _Bool _success;
    _Bool _update;
    NSString *_errorDescription;
}

@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic, getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

