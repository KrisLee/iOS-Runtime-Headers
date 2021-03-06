/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKTileSourceClient>, GEOTileSource, NSError, VKStylesheet, VKTileKeyList, VKTileKeyMap, VKTilePool;

@interface VKTileSource : NSObject <GEOTileSourceClient> {
    <VKTileSourceClient> *_client;
    VKTileKeyList *_decoding;
    VKTileKeyList *_failedTiles;
    VKTileKeyMap *_pendingLoads;
    NSError *_recentError;
    VKStylesheet *_stylesheet;
    VKTilePool *_tilePool;
    GEOTileSource *_tileSource;
    int loadingTiles;
}

@property <VKTileSourceClient> * client;
@property(readonly) int maximumDownloadZoomLevel;
@property(readonly) int maximumZoomLevel;
@property(readonly) BOOL maximumZoomLevelBoundsCamera;
@property(readonly) int minimumDownloadZoomLevel;
@property(readonly) int minimumZoomLevel;
@property(readonly) BOOL minimumZoomLevelBoundsCamera;
@property(retain) VKStylesheet * stylesheet;
@property(readonly) int tileSize;
@property(readonly) GEOTileSource * tileSource;
@property(readonly) int zEquivalenceClass;

- (void)_failedToLoadSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 error:(id)arg3;
- (void)_fetchedTile:(id)arg1;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)clearCaches;
- (id)client;
- (void)dealloc;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)detailedDescription;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyForSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)failedToDecodeSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)foreachTileInPool:(id)arg1;
- (id)init;
- (int)maximumDownloadZoomLevel;
- (int)maximumZoomLevel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)mayUseNetwork;
- (int)minimumDownloadZoomLevel;
- (int)minimumZoomLevel;
- (BOOL)minimumZoomLevelBoundsCamera;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })nativeKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)setClient:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForDownloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)stylesheet;
- (void)tileAvailabilityChanged:(id)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 renderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (int)tileSize;
- (void)tileSource:(id)arg1 declinedToLoadTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFetchData:(id)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (id)tileSource;
- (Class)tileSourceClass;
- (void)tileSourceDidFinishWithNetwork:(id)arg1;
- (void)tileSourceWillGoToNetwork:(id)arg1;
- (int)zEquivalenceClass;

@end
