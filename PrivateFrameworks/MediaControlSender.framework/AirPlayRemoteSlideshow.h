/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@class <AirPlayRemoteSlideshowDelegate>, MediaControlClient, NSObject<OS_dispatch_queue>;

@interface AirPlayRemoteSlideshow : NSObject  {
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    <AirPlayRemoteSlideshowDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    BOOL _started;
    double _startTime;
}

@property <AirPlayRemoteSlideshowDelegate> * delegate;


- (void)stopWithOptions:(id)arg1 completion:(id)arg2;
- (void)startWithOptions:(id)arg1 completion:(id)arg2;
- (void)getFeaturesWithCompletion:(id)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(id)arg2;
- (void)_configureEventHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end