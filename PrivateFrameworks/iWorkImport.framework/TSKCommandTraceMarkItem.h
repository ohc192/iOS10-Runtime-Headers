/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCommandTraceMarkItem : NSObject <TSKCommandTraceItem> {
    NSString * _description;
    bool  _isBeginMark;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long indentType;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (long long)indentType;
- (id)init;
- (id)initWithDescription:(id)arg1 isBeginMark:(bool)arg2;
- (bool)referencesAnyOfObjectUUIDs:(id)arg1;

@end