//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

@interface SBSIMLockEntryAlert : SBAlert
{
    long long _status;
}

- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)_forcesPortraitOrientation;
- (void)deactivate;
- (void)activate;
- (long long)status;
- (id)lockEntryView;
- (_Bool)hasTranslucentBackground;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;

@end

