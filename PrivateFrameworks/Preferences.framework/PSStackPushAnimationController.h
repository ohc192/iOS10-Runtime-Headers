/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, UINavigationController;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    bool_hasStartedAnimation;
    NSArray *_viewControllers;
    UINavigationController *_navigationController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    long long _animationPreset;
    double _startStagger;
    double _completionStagger;
    double _pushDuration;
    double _springDamping;
}

@property(retain) NSArray * viewControllers;
@property UINavigationController * navigationController;
@property(copy) id completionBlock;
@property long long animationPreset;
@property double startStagger;
@property double completionStagger;
@property double pushDuration;
@property double springDamping;

+ (void)resetDefaultAnimationParameters;
+ (void)setDefaultAnimationPreset:(long long)arg1;
+ (id)_animationParametersForPreset:(long long)arg1;
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;
+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;

- (void)setSpringDamping:(double)arg1;
- (double)springDamping;
- (void)setPushDuration:(double)arg1;
- (double)pushDuration;
- (void)setCompletionStagger:(double)arg1;
- (double)completionStagger;
- (void)setStartStagger:(double)arg1;
- (double)startStagger;
- (void)setAnimationPreset:(long long)arg1;
- (long long)animationPreset;
- (id)_valueForAnimationParameter:(id)arg1;
- (void)_addAnimation:(id)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (double)_actualDuration;
- (double)_desiredDuration;
- (bool)_shouldSkipFirstPush;
- (void)_loadDefaultValues;
- (void)animateAlongsideToViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)setNavigationController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (id)navigationController;
- (void)animationEnded:(bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end