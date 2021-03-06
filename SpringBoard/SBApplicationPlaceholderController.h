//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBApplicationPlaceholderDelegate.h"
#import "SBApplicationPlaceholderLifecycleObserver.h"
#import "SBIconObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString, SBApplicationController, SBApplicationLibraryObserver;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate>
{
    SBApplicationController *_appController;
    SBApplicationLibraryObserver *_lsWorkspaceObserver;
    NSMutableDictionary *_placeholdersByBundleID;
    NSMutableSet *_pendingAdded;
    NSMutableSet *_pendingInstalled;
    NSMutableSet *_pendingCancelled;
    NSMutableSet *_removingPlaceholderProxies;
    BOOL _hasDownloadedFromStore;
    BOOL _usingNetwork;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (BOOL)placeholderShouldAllowPausing:(id)arg1;
- (void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;
- (void)_downloadsEnded;
- (void)_finishPlaceholder:(id)arg1;
- (void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeDownloadingIcons:(id)arg1 saveState:(BOOL)arg2;
- (void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 placeholderProxy:(id)arg3;
- (void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2;
- (void)_addPlaceholders:(id)arg1;
- (void)_processPendingProxies;
- (void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1;
- (void)applicationPlaceholdersCancelled:(id)arg1;
- (void)applicationPlaceholdersInstalled:(id)arg1;
- (void)applicationPlaceholdersAdded:(id)arg1;
- (BOOL)isUsingNetwork;
- (BOOL)hasDownloadedStoreApplication;
- (id)placeholderForDisplayID:(id)arg1;
- (id)placeholdersByDisplayID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

