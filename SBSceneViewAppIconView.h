//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBIconImageView, UILabel;

@interface SBSceneViewAppIconView : UIView
{
    _Bool _showsAppIconBorder;
    SBIconImageView *_imageView;
    UILabel *_label;
    UIView *_iconBorderView;
}

@property(retain, nonatomic) UIView *iconBorderView; // @synthesize iconBorderView=_iconBorderView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) SBIconImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showsAppIconBorder; // @synthesize showsAppIconBorder=_showsAppIconBorder;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

@end

