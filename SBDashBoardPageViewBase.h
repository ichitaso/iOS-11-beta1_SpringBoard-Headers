//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBDashBoardPageView.h"

@class UIViewController<SBDashBoardPageViewControllerProtocol>;

@interface SBDashBoardPageViewBase : SBDashBoardViewBase <SBDashBoardPageView>
{
    UIViewController<SBDashBoardPageViewControllerProtocol> *_pageViewController;
    double _contentWidth;
}

@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) __weak UIViewController<SBDashBoardPageViewControllerProtocol> *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;

@end

