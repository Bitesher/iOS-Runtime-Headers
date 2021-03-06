/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PLAssetContainerList>, NSMutableArray, NSOrderedSet, PLMomentLibrary, PUCollectionViewIntermediateDataSource, PUSessionInfo, PUZoomableGridViewControllerSpec;

@interface PUMomentsZoomLevelManager : NSObject {
    NSMutableArray *_allLevelInfos;
    BOOL _isInvalidatingLayoutOfZoomLevels;
    PLMomentLibrary *_momentLibrary;
    NSOrderedSet *_momentLibraryContainers;
    PUSessionInfo *_sessionInfo;
    PUCollectionViewIntermediateDataSource *_sharedIntermediateDataSource;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
}

@property(readonly) unsigned int highestZoomLevel;
@property(readonly) unsigned int lowestZoomLevel;
@property(readonly) NSOrderedSet * photoCollectionContainers;
@property(readonly) <PLAssetContainerList> * photoCollections;
@property(readonly) unsigned int preferredDefaultZoomLevel;
@property(retain) PUSessionInfo * sessionInfo;
@property(readonly) PUCollectionViewIntermediateDataSource * sharedIntermediateDataSource;
@property(readonly) PUZoomableGridViewControllerSpec * zoomableGridSpec;

- (void).cxx_destruct;
- (void)_defaultsDidChange:(id)arg1;
- (void)_updateSummarizeSectionsOnZoomLevelInfos;
- (void)dealloc;
- (id)existingViewControllerForZoomLevel:(unsigned int)arg1 inNavigationController:(id)arg2;
- (unsigned int)highestZoomLevel;
- (id)initWithSpec:(id)arg1;
- (id)jumpToZoomLevel:(unsigned int)arg1 inNavigationController:(id)arg2;
- (unsigned int)lowestZoomLevel;
- (void)modelDidChange;
- (id)newViewControllerForZoomLevel:(unsigned int)arg1;
- (id)photoCollectionContainers;
- (id)photoCollections;
- (unsigned int)preferredDefaultZoomLevel;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)sharedIntermediateDataSource;
- (BOOL)zoomLevel:(unsigned int)arg1 isHigherThanZoomLevel:(unsigned int)arg2;
- (unsigned int)zoomLevelAboveZoomLevel:(unsigned int)arg1;
- (unsigned int)zoomLevelBelowZoomLevel:(unsigned int)arg1;
- (void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2;
- (id)zoomLevelInfoForZoomLevel:(unsigned int)arg1;
- (id)zoomableGridSpec;

@end
