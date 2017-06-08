//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

#import "SBCountedMapValue.h"

@class NSString, SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage <SBCountedMapValue>
{
    SBIconLabelImageParameters *_parameters;
    struct CGPoint _maxSizeOffset;
}

+ (void)checkinLabelImage:(id)arg1;
+ (id)_parametersWithDefaultStyle:(id)arg1;
+ (id)checkoutLabelImageForParameters:(id)arg1;
+ (id)_drawLabelImageForParameters:(id)arg1;
+ (id)_labelImageCountedMap;
+ (void)drawImageInRect:(struct CGRect)arg1 fromParameters:(id)arg2;
+ (struct CGRect)rectFromParameters:(id)arg1 constrainedToRect:(struct CGRect)arg2;
+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (struct CGRect)_rectWithDrawing:(_Bool)arg1 inRect:(struct CGRect)arg2 fromParameters:(id)arg3;
@property(readonly, nonatomic) struct CGPoint maxSizeOffset; // @synthesize maxSizeOffset=_maxSizeOffset;
@property(readonly, copy, nonatomic) SBIconLabelImageParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject> countedMapKey;
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 maxSizeOffset:(struct CGPoint)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
