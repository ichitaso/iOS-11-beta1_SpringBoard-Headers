//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBIconViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSOrderedSet, NSString, SBIconModel, SBIconView, UIImageView, UIPanGestureRecognizer, UIStackView, UIView, _UIBackdropView, _UIBackdropViewSettings;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate>
{
    NSOrderedSet *_recentDisplayItems;
    unsigned long long _selectedIndex;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    _UIBackdropViewSettings *_blurSettings;
    _UIBackdropView *_backgroundBackdropView;
    UIView *_blurredBackgroundView;
    UIImageView *_selectionSquareView;
    SBIconView *_selectedIconView;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    UIStackView *_stackView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _isTouchDown;
    _Bool _isCommandDown;
    _Bool _isIconSelected;
    id <SBCommandTabViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=_isIconSelected, setter=_setIsIconSelected:) _Bool isIconSelected; // @synthesize isIconSelected=_isIconSelected;
@property(nonatomic, getter=_isCommandDown, setter=_setIsCommandDown:) _Bool isCommandDown; // @synthesize isCommandDown=_isCommandDown;
@property(nonatomic, getter=_isTouchDown, setter=_setIsTouchDown:) _Bool isTouchDown; // @synthesize isTouchDown=_isTouchDown;
@property(retain, nonatomic, getter=_stackView, setter=_setStackView:) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic, getter=_selectionXLayoutConstraint, setter=_setSelectionXLayoutConstraint:) NSLayoutConstraint *selectionXLayoutConstraint; // @synthesize selectionXLayoutConstraint=_selectionXLayoutConstraint;
@property(retain, nonatomic, getter=_selectedIconView, setter=_setSelectedIconView:) SBIconView *selectedIconView; // @synthesize selectedIconView=_selectedIconView;
@property(retain, nonatomic, getter=_selectionSquareView, setter=_setSelectionSquareView:) UIImageView *selectionSquareView; // @synthesize selectionSquareView=_selectionSquareView;
@property(retain, nonatomic, getter=_blurredBackgroundView, setter=_setBlurredBackgroundView:) UIView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(retain, nonatomic, getter=_backgroundBackdropView, setter=_setBackgroundBackdropView:) _UIBackdropView *backgroundBackdropView; // @synthesize backgroundBackdropView=_backgroundBackdropView;
@property(retain, nonatomic, getter=_blurSettings, setter=_setBlurSettings:) _UIBackdropViewSettings *blurSettings; // @synthesize blurSettings=_blurSettings;
@property(nonatomic) __weak id <SBCommandTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_noteDidSelectApplicationDisplayItem;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_handleUIGesture:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (unsigned long long)_indexOfDisplayItem:(id)arg1;
- (void)_layoutAppIcons;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)iconTouchBegan:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (id)selectedApplicationDisplayItem;
- (void)previous;
- (void)next;
- (void)showCommandTabBar;
- (void)viewDidLoad;
- (id)init;
- (id)initWithRecentDisplayItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

