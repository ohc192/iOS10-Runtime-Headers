/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBApp : MBContainer

@property (nonatomic, retain) NSString *bundleDir;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSArray *containers;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *entitlementsRelativePath;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic, readonly) NSArray *plugins;

+ (id)appWithBundleID:(id)arg1;
+ (id)appWithPropertyList:(id)arg1;
+ (id)safeHarborWithPath:(id)arg1;

- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1;
- (id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2;
- (id)bundleDir;
- (id)bundleID;
- (id)bundleVersion;
- (id)containers;
- (id)domain;
- (id)entitlements;
- (id)entitlementsRelativePath;
- (id)groups;
- (bool)isPlaceholder;
- (bool)isSystemApp;
- (id)placeholderDomainWithCache:(id)arg1;
- (id)plugins;
- (void)setBundleDir:(id)arg1;

@end
