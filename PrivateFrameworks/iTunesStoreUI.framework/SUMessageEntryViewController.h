/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUMessageEntryViewControllerDelegate>, NSArray, NSString, SUMessageEntryView, UIImagePickerController;

@interface SUMessageEntryViewController : SUViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SUMessageEntryViewDelegate> {
    <SUMessageEntryViewControllerDelegate> *_delegate;
    UIImagePickerController *_imagePicker;
    NSArray *_imagePickerMediaTypes;
    SUMessageEntryView *_messageEntryView;
}

@property <SUMessageEntryViewControllerDelegate> * delegate;
@property(copy) NSArray * imagePickerMediaTypes;
@property(getter=isPhotoButtonEnabled) BOOL photoButtonEnabled;
@property(getter=isSendButtonEnabled) BOOL sendButtonEnabled;
@property(copy) NSString * sendButtonTitle;

- (BOOL)_allowsCamera;
- (BOOL)_allowsVideoCamera;
- (void)_dismissImagePickerAnimated:(BOOL)arg1;
- (id)_messageEntryView;
- (void)_promptForSourceType;
- (void)_reloadMessageEntryView;
- (void)_showImagePickerForSourceType:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clearMessage;
- (id)copyMessagePartsWithUTI:(id)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)delegate;
- (void)focusMessageField;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imagePickerMediaTypes;
- (id)init;
- (BOOL)isPhotoButtonEnabled;
- (BOOL)isSendButtonEnabled;
- (void)loadView;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewPhotoButtonAction:(id)arg1;
- (void)messageEntryViewSendButtonAction:(id)arg1;
- (id)sendButtonTitle;
- (void)setDelegate:(id)arg1;
- (void)setImagePickerMediaTypes:(id)arg1;
- (void)setPhotoButtonEnabled:(BOOL)arg1;
- (void)setSendButtonEnabled:(BOOL)arg1;
- (void)setSendButtonTitle:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
