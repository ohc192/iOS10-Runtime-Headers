/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject  {
    int _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property int actionType;
@property int animationCount;
@property(retain) UIViewController * otherViewController;
@property(retain) SUOverlayTransition * transition;
@property(retain) UIViewController * viewController;


- (void)setOtherViewController:(id)arg1;
- (id)otherViewController;
- (void)setActionType:(int)arg1;
- (int)actionType;
- (void)dealloc;
- (id)viewController;
- (id)transition;
- (void)setTransition:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setAnimationCount:(int)arg1;
- (int)animationCount;

@end