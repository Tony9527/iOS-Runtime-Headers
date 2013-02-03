/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject <ASDynamicAccountClassLoader> {
    NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary *_acAccountTypeToClassNames;
    NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;
    NSMutableDictionary *_accountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary *_accountTypeToAccountFrameworkSubpath;
    NSMutableDictionary *_accountTypeToClassNames;
}

+ (BOOL)loadBundleForAccountWithProperties:(id)arg1;
+ (id)sharedInstance;

- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;
- (BOOL)_loadFrameworkAtSubpath:(id)arg1;
- (Class)accountClassForACAccount:(id)arg1;
- (Class)accountClassForAccountType:(id)arg1;
- (Class)agentClassForACAccount:(id)arg1;
- (Class)agentClassForAccountType:(id)arg1;
- (Class)clientAccountClassForACAccount:(id)arg1;
- (Class)clientAccountClassForAccountType:(id)arg1;
- (Class)daemonAccountClassForACAccount:(id)arg1;
- (Class)daemonAccountClassForAccountType:(id)arg1;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;
- (Class)daemonAppropriateAccountClassForAccountType:(id)arg1;
- (id)init;
- (BOOL)loadBundleForAccountWithProperties:(id)arg1;
- (void)loadDaemonBundleForACAccountType:(id)arg1;
- (void)loadDaemonBundleForAccountType:(id)arg1;
- (void)loadFrameworkForACAccountType:(id)arg1;
- (void)loadFrameworkForAccountType:(id)arg1;

@end