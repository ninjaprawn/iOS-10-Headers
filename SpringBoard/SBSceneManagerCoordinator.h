//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBDisplayManagerObserver.h"
#import "FBProcessManagerObserver.h"
#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "FBWorkspaceDelegate.h"
#import "SBSceneManagerDelegate.h"

@class FBSceneManager, NSMutableDictionary, NSString;

@interface SBSceneManagerCoordinator : NSObject <FBSceneManagerDelegate, FBSceneManagerObserver, FBProcessManagerObserver, FBWorkspaceDelegate, FBDisplayManagerObserver, SBSceneManagerDelegate>
{
    FBSceneManager *_sceneManager;
    NSMutableDictionary *_displayToSceneManagers;
}

+ (id)mainDisplaySceneManager;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sceneManager:(id)arg1 scene:(id)arg2 willTransitionToState:(unsigned int)arg3;
- (void)displayManager:(id)arg1 willConnectDisplay:(id)arg2;
- (void)workspace:(id)arg1 didReceiveDestroySceneRequestForIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)workspace:(id)arg1 didReceiveCreateSceneRequestForIdentifier:(id)arg2 initialClientSettings:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3 success:(BOOL)arg4;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (int)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)_destroySceneManagerIfNecessary:(id)arg1;
- (id)_sceneManagerForDisplay:(id)arg1 creatingIfNecessary:(BOOL)arg2;
@property(readonly, copy) NSString *description;
- (void)removeManagerForDisplay:(id)arg1;
- (id)sceneManagerForDisplay:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
