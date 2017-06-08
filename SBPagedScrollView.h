//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSUIScrollView.h"

@class NSArray;

@interface SBPagedScrollView : BSUIScrollView
{
    _Bool _changingScrollViewLayout;
    NSArray *_pageViews;
    unsigned long long _currentPageIndex;
    struct _NSRange _visiblePageRange;
}

@property(nonatomic) struct _NSRange visiblePageRange; // @synthesize visiblePageRange=_visiblePageRange;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(copy, nonatomic) NSArray *pageViews; // @synthesize pageViews=_pageViews;
- (void).cxx_destruct;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(CDStruct_3b09cf25)arg1;
- (void)_bs_willBeginScrolling;
- (void)_updateCurrentPageForScrollOffset;
- (void)_updateVisiblePages;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (double)unclippedPageRelativeScrollOffset;
- (double)pageRelativeScrollOffset;
- (_Bool)resetContentOffsetToCurrentPage;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutPages;
- (void)_layoutScrollView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (CDStruct_3e878e9e)currentScrollInterval;
- (id)initWithFrame:(struct CGRect)arg1;

@end

