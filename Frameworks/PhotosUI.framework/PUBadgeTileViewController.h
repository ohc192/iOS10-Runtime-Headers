/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {
    PUBadgeInfo * __badgeInfo;
    PLPhotoTileBadgeView * __badgeView;
    bool  __isOverContent;
    bool  __needsUpdateBadgeInfo;
    bool  __needsUpdateBadgeView;
    bool  __needsUpdateIrisBadge;
    PUAssetViewModel * _assetViewModel;
}

@property (setter=_setBadgeInfo:, nonatomic, copy) PUBadgeInfo *_badgeInfo;
@property (nonatomic, readonly) PLPhotoTileBadgeView *_badgeView;
@property (setter=_setOverContent:, nonatomic) bool _isOverContent;
@property (setter=_setNeedsUpdateBadgeInfo:, nonatomic) bool _needsUpdateBadgeInfo;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) bool _needsUpdateBadgeView;
@property (setter=_setNeedsUpdateIrisBadge:, nonatomic) bool _needsUpdateIrisBadge;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_badgeTileSizeForBadgeInfo:(id)arg1;
+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(id)arg2 isOverContent:(bool)arg3;
+ (struct CGSize { double x1; double x2; })badgeTileSizeForAssetViewModel:(id)arg1;

- (void).cxx_destruct;
- (id)_badgeInfo;
- (id)_badgeView;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeView;
- (void)_invalidateIrisBadge;
- (bool)_isOverContent;
- (bool)_needsUpdate;
- (bool)_needsUpdateBadgeInfo;
- (bool)_needsUpdateBadgeView;
- (bool)_needsUpdateIrisBadge;
- (void)_setBadgeInfo:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBadgeInfo:(bool)arg1;
- (void)_setNeedsUpdateBadgeView:(bool)arg1;
- (void)_setNeedsUpdateIrisBadge:(bool)arg1;
- (void)_setOverContent:(bool)arg1;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateIrisBadgeIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)loadView;
- (void)prepareForReuse;
- (void)setAssetViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end