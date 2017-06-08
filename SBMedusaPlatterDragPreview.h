//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBIcon, SBIconView, SBMedusaDecoratedDeviceApplicationSceneViewController;

@interface SBMedusaPlatterDragPreview : UIView
{
    struct CGSize _platterSize;
    _Bool _flocked;
    _Bool _showsIconLabel;
    SBIcon *_icon;
    SBIconView *_iconView;
    SBMedusaDecoratedDeviceApplicationSceneViewController *_medusaDecoratedSceneViewController;
    unsigned long long _platterViewState;
    UIView *_iconContainerView;
}

+ (_Bool)shouldDisplayIconCloseBoxForPlatterViewState:(unsigned long long)arg1;
+ (_Bool)shouldDisplayIconAccessoriesForPlatterViewState:(unsigned long long)arg1;
+ (double)floatingApplicationDiffuseShadowRadius;
+ (double)iconLiftAlpha;
+ (double)liftScale;
+ (double)appCornerRadius;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(nonatomic) _Bool showsIconLabel; // @synthesize showsIconLabel=_showsIconLabel;
@property(nonatomic, getter=isFlocked) _Bool flocked; // @synthesize flocked=_flocked;
@property(nonatomic) unsigned long long platterViewState; // @synthesize platterViewState=_platterViewState;
@property(retain, nonatomic) SBMedusaDecoratedDeviceApplicationSceneViewController *medusaDecoratedSceneViewController; // @synthesize medusaDecoratedSceneViewController=_medusaDecoratedSceneViewController;
@property(readonly, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)dropDestinationAnimationCompleted;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)handleCleanup;
- (void)layoutSubviews;
- (void)setIconContentScale:(double)arg1 lifted:(_Bool)arg2;
- (double)cornerRadiusForAppPlatter;
- (void)updateIconViewComponentVisibility;
- (void)setComponentAlphas;
- (void)setPlatterViewState:(unsigned long long)arg1 andSize:(struct CGSize)arg2;
- (void)_setShadowForState:(unsigned long long)arg1;
- (id)initWithIconViewClass:(Class)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

