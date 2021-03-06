/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSString, NSTimer, UIKBCacheToken, UIKBKeyView, UIKBRenderConfig, UIKBSplitImageView, UIKBTree;

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {
    NSTimer *_activatedTimer;
    NSMutableDictionary *_activeViewIndex;
    UIKBCacheToken *_cacheToken;
    UIKBKeyView *_candidateGapView;
    UIKBTree *_defaultKeyplane;
    NSMutableDictionary *_delayedDeactivationKeys;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyCaps;
    UIKBTree *_keyplane;
    BOOL _performingDeactivation;
    UIKBRenderConfig *_renderConfig;
    NSMutableDictionary *_renderedKeyViews;
    BOOL _shouldDrawRect;
    NSMutableDictionary *_subviewIndex;
}

@property(readonly) BOOL cacheDeferable;
@property(readonly) NSString * cacheKey;
@property(retain) UIKBCacheToken * cacheToken;
@property(readonly) float cachedWidth;
@property(retain) UIKBTree * defaultKeyplane;
@property(readonly) BOOL keepNonPersistent;
@property(retain) UIKBTree * keyplane;
@property(retain) UIKBRenderConfig * renderConfig;

- (id)_setupSplitImageViewIfNeeded:(id)arg1 withImage:(id)arg2;
- (BOOL)_shouldDrawLowResBackground;
- (void)activateKeys;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (BOOL)cacheDeferable;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheIdentifierForKey:(id)arg1;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (id)cacheToken;
- (float)cachedWidth;
- (void)cancelDelayedDeactivation;
- (Class)classForKey:(id)arg1;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (int)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)deactivateKeys;
- (void)dealloc;
- (id)defaultKeyplane;
- (void)dimKeyCaps:(float)arg1 duration:(float)arg2;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2;
- (BOOL)keepNonPersistent;
- (id)keyplane;
- (void)performDelayedDeactivation:(id)arg1;
- (void)purgeKeyViews;
- (void)purgeSubviews;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (id)renderConfig;
- (void)scheduleDelayedDeactivation;
- (void)setCacheToken:(id)arg1;
- (void)setDefaultKeyplane:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (int)stateForKey:(id)arg1;
- (void)updateDecorationViewsIfNeeded;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (id)viewForKey:(id)arg1;

@end
