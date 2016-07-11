/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _conditions;
    bool  _hasAlreadyFinished;
    NSMutableArray * _internalErrors;
    NSMutableArray * _observers;
    long long  _state;
}

@property (nonatomic, readonly) NSArray *conditions;
@property long long state;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void).cxx_destruct;
- (void)_evaluateConditions;
- (void)addCondition:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (id)conditions;
- (void)execute;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)finishWithErrors:(id)arg1;
- (void)finishWithErrors:(id)arg1 finishHandler:(id /* block */)arg2;
- (void)finishedWithErrors:(id)arg1;
- (id)init;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)main;
- (void)produceOperation:(id)arg1;
- (void)setState:(long long)arg1;
- (void)start;
- (long long)state;
- (void)waitUntilFinished;
- (void)willEnqueue;

@end