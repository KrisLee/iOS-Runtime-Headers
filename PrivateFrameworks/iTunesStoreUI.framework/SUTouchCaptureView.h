/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;



@interface SUTouchCaptureView : UIControl 
{
    NSArray *_passThroughViews;
}

@property(retain) NSArray *passThroughViews;

+ (void)_initializeSafeCategory;

- (id)passThroughViews;
- (void)setPassThroughViews:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)accessibilityActivate;
- (BOOL)_accessibilityEscape;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;

@end