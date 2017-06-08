//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBReusableViewMap, SBWindow, UIView<SBReusableView>;

@protocol SBReusableViewMapDelegate <NSObject>
- (SBWindow *)windowForRecycledViewsInViewMap:(SBReusableViewMap *)arg1;
- (unsigned long long)viewMap:(SBReusableViewMap *)arg1 maxRecycledViewsOfClass:(Class)arg2;

@optional
- (_Bool)viewMap:(SBReusableViewMap *)arg1 shouldRecycleView:(UIView<SBReusableView> *)arg2;
@end

