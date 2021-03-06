//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBFolderViewDelegate.h"

@class NSString, SBFolderView, SBIconViewMap;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;
    SBFolderView *_folderContent;
}

- (void).cxx_destruct;
- (void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (_Bool)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDraggingEnded:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 concludeIconDrop:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (_Bool)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

