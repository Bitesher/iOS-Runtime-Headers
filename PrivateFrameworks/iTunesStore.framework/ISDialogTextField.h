/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISDialogTextField : NSObject {
    int _keyboardType;
    BOOL _secure;
    NSString *_title;
    NSString *_value;
}

@property int keyboardType;
@property(getter=isSecure) BOOL secure;
@property(retain) NSString * title;
@property(retain) NSString * value;

+ (id)textFieldWithTitle:(id)arg1;

- (void)dealloc;
- (BOOL)isSecure;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)value;

@end
