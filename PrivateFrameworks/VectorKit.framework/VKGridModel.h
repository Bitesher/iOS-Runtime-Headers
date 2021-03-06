/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLMesh, VGLRenderState, VKMapModel, VKStylesheet;

@interface VKGridModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {
    struct { 
        double v[4][4]; 
    struct { 
        double v[4][4]; 
    struct Vec2Imp<float> { 
        float x; 
        float y; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _fillColor;
    double _gridMix;
    } _gridView;
    } _invFwidth;
    } _lineColor;
    VKMapModel *_mapModel;
    VGLMesh *_mesh;
    } _projection;
    VGLRenderState *_renderState;
    BOOL _simpleGridEnabled;
}

@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } fillColor;
@property VKMapModel * mapModel;
@property BOOL simpleGridEnabled;
@property(readonly) VKStylesheet * stylesheet;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void)dealloc;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })fillColor;
- (id)init;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (id)mapModel;
- (void)setMapModel:(id)arg1;
- (void)setSimpleGridEnabled:(BOOL)arg1;
- (BOOL)simpleGridEnabled;
- (id)stylesheet;
- (void)stylesheetDidChange;
- (unsigned int)supportedRenderPasses;
- (void)updateGridColor;

@end
