//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class NSString;

@interface SBPrototypeControllerSettings : SBUISettings
{
    _Bool _preventLockover;
    _Bool _allowPrototypeSettings;
    NSString *_testRecipeClassName;
    double _windowAlpha;
}

@property _Bool allowPrototypeSettings; // @synthesize allowPrototypeSettings=_allowPrototypeSettings;
@property _Bool preventLockover; // @synthesize preventLockover=_preventLockover;
@property double windowAlpha; // @synthesize windowAlpha=_windowAlpha;
@property(retain) NSString *testRecipeClassName; // @synthesize testRecipeClassName=_testRecipeClassName;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
