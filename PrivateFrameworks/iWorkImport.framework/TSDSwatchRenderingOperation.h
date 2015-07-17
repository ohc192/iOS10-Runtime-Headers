/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSwatchRenderingOperation : NSOperation {
    struct CGImage { } *mDeliveredImage;
    TSKDocumentRoot *mDocumentRoot;
    NSString *mIdentifier;
    float mImageScale;
    struct CGSize { 
        float width; 
        float height; 
    } mImageSize;
    unsigned int mInsertPopoverPageNumber;
    unsigned int mInsertPopoverPageType;
    NSObject<TSSPreset> *mPreset;
    NSObject *mRenderingTicket;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mSwatchFrame;
    UIView *mView;
}

@property (nonatomic, readonly) struct CGImage { }*deliveredImage;
@property (readonly) TSKDocumentRoot *documentRoot;
@property (copy) NSString *identifier;
@property (readonly) float imageScale;
@property (readonly) struct CGSize { float x1; float x2; } imageSize;
@property unsigned int insertPopoverPageNumber;
@property unsigned int insertPopoverPageType;
@property (readonly) NSObject<TSSPreset> *preset;
@property (retain) NSObject *renderingTicket;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } swatchFrame;
@property (retain) UIView *view;

- (void)dealloc;
- (void)deliverCGImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)deliveredImage;
- (void)doWorkWithReadLock;
- (id)documentRoot;
- (id)identifier;
- (float)imageScale;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 documentRoot:(id)arg5;
- (unsigned int)insertPopoverPageNumber;
- (unsigned int)insertPopoverPageType;
- (void)main;
- (BOOL)needsPressedStateBackground;
- (void)p_animateSwatchIn;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (struct CGImage { }*)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage { }*)arg1;
- (id)preset;
- (id)renderingTicket;
- (void)setIdentifier:(id)arg1;
- (void)setInsertPopoverPageNumber:(unsigned int)arg1;
- (void)setInsertPopoverPageType:(unsigned int)arg1;
- (void)setRenderingTicket:(id)arg1;
- (void)setView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })swatchEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })swatchFrame;
- (id)view;

@end