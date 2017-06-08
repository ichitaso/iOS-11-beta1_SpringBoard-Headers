//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomSettings.h"

@class SBAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings
{
    _Bool _crossfadeWithZoom;
    _Bool _fadesIconGrid;
    SBAnimationSettings *_outerFolderFadeSettings;
    SBAnimationSettings *_crossfadeSettings;
    SBAnimationSettings *_iconGridFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *iconGridFadeSettings; // @synthesize iconGridFadeSettings=_iconGridFadeSettings;
@property _Bool fadesIconGrid; // @synthesize fadesIconGrid=_fadesIconGrid;
@property(retain) SBAnimationSettings *crossfadeSettings; // @synthesize crossfadeSettings=_crossfadeSettings;
@property _Bool crossfadeWithZoom; // @synthesize crossfadeWithZoom=_crossfadeWithZoom;
@property(retain) SBAnimationSettings *outerFolderFadeSettings; // @synthesize outerFolderFadeSettings=_outerFolderFadeSettings;
- (void).cxx_destruct;
- (id)effectiveCrossfadeAnimationSettings;
- (void)setDefaultValues;

@end

