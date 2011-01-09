/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionRendererPrivate;



@interface FigCaptionRenderer : NSObject 
{
    FigCaptionRendererPrivate *_priv;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })captionRectForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGSize { float x1; float x2; })cellSizeForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void)finalize;
- (void)tearDown;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)hasCommandsForRow:(NSUInteger)arg1;
- (void)eraseCommandsForRow:(NSUInteger)arg1;
- (void)_addCommandData:(id)arg1 forRow:(NSUInteger)arg2;
- (void)drawUnichar:(unsigned short)arg1 color:(struct CGColor { }*)arg2 italics:(BOOL)arg3 underline:(BOOL)arg4 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 inContext:(struct CGContext { }*)arg6 orientation:(NSInteger)arg7;
- (void)processCaptionCommand:(NSUInteger)arg1 data:(id)arg2;
- (void)drawRow:(NSUInteger)arg1 inContext:(struct CGContext { }*)arg2 forRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 orientation:(NSInteger)arg4;
- (void)setFontName:(id)arg1;

@end