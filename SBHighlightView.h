//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SBHighlightView : UIView
{
    UIImageView *_highlight;
    double _highlightAlpha;
    double _highlightHeight;
}

+ (id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2;
@property(readonly, nonatomic) double highlightHeight; // @synthesize highlightHeight=_highlightHeight;
@property(readonly, nonatomic) double highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3;

@end
