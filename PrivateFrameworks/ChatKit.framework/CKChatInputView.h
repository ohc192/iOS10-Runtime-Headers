/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatInputView : UIView <CKMessageEntryContentViewDelegate> {
    UIButton * _audioButton;
    UIButton * _balloonButton;
    CKCollapsableToolbar * _buttonBar;
    CKMessageEntryContentView * _contentView;
    NSObject<CKChatInputViewDelegate> * _delegate;
    UIButton * _photoButton;
    UIButton * _searchButton;
    UIButton * _sendButton;
}

@property (nonatomic, retain) UIButton *audioButton;
@property (nonatomic, retain) UIButton *balloonButton;
@property (nonatomic, retain) CKCollapsableToolbar *buttonBar;
@property (nonatomic, retain) CKMessageEntryContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKChatInputViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *photoButton;
@property (nonatomic, retain) UIButton *searchButton;
@property (nonatomic, retain) UIButton *sendButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioButton;
- (id)balloonButton;
- (id)buttonBar;
- (id)contentView;
- (id)delegate;
- (id)initWithCapabilities:(int)arg1;
- (void)layoutSubviews;
- (void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
- (bool)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
- (bool)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(bool)arg2;
- (id)photoButton;
- (id)searchButton;
- (id)sendButton;
- (void)setAudioButton:(id)arg1;
- (void)setBalloonButton:(id)arg1;
- (void)setButtonBar:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotoButton:(id)arg1;
- (void)setSearchButton:(id)arg1;
- (void)setSendButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
