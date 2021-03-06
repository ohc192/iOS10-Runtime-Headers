/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (bool)addQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfQuarantinedRecords;
- (bool)isRecordWithIdentifierQuarantined:(id)arg1;
- (bool)removeQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)resetWithError:(id*)arg1;

@end
