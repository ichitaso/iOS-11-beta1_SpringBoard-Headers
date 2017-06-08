//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomSettings.h"

@interface SBCenterZoomSettings : SBIconZoomSettings
{
    _Bool _zoomViewBelowIcons;
    double _centerRowCoordinate;
    long long _distanceEffect;
    double _firstHopIncrement;
    double _hopIncrementAcceleration;
    double _dockMass;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool zoomViewBelowIcons; // @synthesize zoomViewBelowIcons=_zoomViewBelowIcons;
@property double dockMass; // @synthesize dockMass=_dockMass;
@property double hopIncrementAcceleration; // @synthesize hopIncrementAcceleration=_hopIncrementAcceleration;
@property double firstHopIncrement; // @synthesize firstHopIncrement=_firstHopIncrement;
@property long long distanceEffect; // @synthesize distanceEffect=_distanceEffect;
@property double centerRowCoordinate; // @synthesize centerRowCoordinate=_centerRowCoordinate;
- (void)setDefaultValues;

@end

