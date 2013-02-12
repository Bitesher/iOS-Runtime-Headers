/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface GMMClientCapabilities : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSInteger _availableImageMemory;
    BOOL _hasAvailableImageMemory;
    BOOL _hasMaxImageHeight;
    BOOL _hasMaxImageWidth;
    NSInteger _maxImageHeight;
    NSInteger _maxImageWidth;
    NSMutableArray *_preferredImageFormats;
}

@property(retain) NSMutableArray *preferredImageFormats; /* unknown property attribute: V_preferredImageFormats */
@property BOOL hasAvailableImageMemory; /* unknown property attribute: V_hasAvailableImageMemory */
@property NSInteger availableImageMemory; /* unknown property attribute: V_availableImageMemory */
@property BOOL hasMaxImageHeight; /* unknown property attribute: V_hasMaxImageHeight */
@property NSInteger maxImageHeight; /* unknown property attribute: V_maxImageHeight */
@property BOOL hasMaxImageWidth; /* unknown property attribute: V_hasMaxImageWidth */
@property NSInteger maxImageWidth; /* unknown property attribute: V_maxImageWidth */
@property(readonly) NSInteger preferredImageFormatsCount;

+ (id)standardCapabilities;

- (void)addPreferredImageFormat:(NSInteger)arg1;
- (NSInteger)availableImageMemory;
- (void)dealloc;
- (BOOL)hasAvailableImageMemory;
- (BOOL)hasMaxImageHeight;
- (BOOL)hasMaxImageWidth;
- (id)init;
- (NSInteger)maxImageHeight;
- (NSInteger)maxImageWidth;
- (NSInteger)preferredImageFormatAtIndex:(NSUInteger)arg1;
- (id)preferredImageFormats;
- (NSInteger)preferredImageFormatsCount;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setAvailableImageMemory:(NSInteger)arg1;
- (void)setHasAvailableImageMemory:(BOOL)arg1;
- (void)setHasMaxImageHeight:(BOOL)arg1;
- (void)setHasMaxImageWidth:(BOOL)arg1;
- (void)setMaxImageHeight:(NSInteger)arg1;
- (void)setMaxImageWidth:(NSInteger)arg1;
- (void)setPreferredImageFormat:(NSInteger)arg1 atIndex:(NSInteger)arg2;
- (void)setPreferredImageFormats:(id)arg1;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end