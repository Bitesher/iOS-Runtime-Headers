/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL, NSString, UILabel;

@interface GKHyperlinkView : UIControl  {
    NSString *_linkTitle;
    UILabel *_titleLabel;
    NSURL *_linkURL;
}

@property(retain) NSURL * linkURL;
@property(retain) NSString * linkTitle;
@property(retain) UILabel * titleLabel;


- (id)linkTitle;
- (id)linkURL;
- (void)setLinkURL:(id)arg1;
- (void)setLinkTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleLabel;
- (void)layoutSubviews;

@end