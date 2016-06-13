//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBApplicationInfo.h"

@class CRCarPlayAppDeclaration, NSArray, NSDictionary, NSString, NSURL;

@interface SBApplicationInfo : FBApplicationInfo
{
    NSString *_applicationShortcutWidgetBundleIdentifier;
    NSArray *_staticApplicationShortcutItems;
    unsigned int _dynamicApplicationShortcutItemsVersion;
    NSString *_displayName;
    NSString *_carDisplayName;
    NSArray *_tags;
    unsigned int _visibilityOverride;
    int _defaultWallpaperStyle;
    int _defaultStatusBarStyle;
    int _ignoredStatusBarStyleOverrides;
    int _networkUsageTypes;
    Class _iconClass;
    NSDictionary *_customSpotlightIconPaths;
    NSDictionary *_searchDomainLaunchInfo;
    unsigned int _uninstallCapability;
    unsigned int _voipClass;
    CRCarPlayAppDeclaration *_carPlayDeclaration;
    int _supportedTypes;
    NSArray *_domainsToPreheat;
    NSArray *_launchImageInfo;
    NSString *_launchInterfaceFileName;
    NSArray *_urlTypes;
    int _whitePointAdaptivityStyle;
    BOOL _isSystemApplication;
    BOOL _isInternalApplication;
    BOOL _isWatchApp;
    BOOL _isLaunchableDuringSetup;
    BOOL _usesSplashBoard;
    BOOL _disablesClassicMode;
    BOOL _isMonarchLinked;
    BOOL _prefersSavedSnapshots;
    BOOL _behavesAsCaller;
    BOOL _wantsLaunchWithoutPNG;
    BOOL _wantsFullScreen;
    BOOL _hasViewServiceEntitlement;
    BOOL _canChangeWallpaperStyle;
    BOOL _isGameCenterEnabled;
    BOOL _wasGameCenterEverEnabled;
    BOOL _statusBarIsLegacy;
    BOOL _appSuspendingUnsupported;
    BOOL _requiresHiDPI;
    BOOL _disablesScreenJail;
    BOOL _isCloudKitEnabled;
    BOOL _alwaysLaunchesSuspended;
    BOOL _requiresPasscodeIfLaunchedBeforeFirstUnlock;
    BOOL _systemAppSupportsLocalNotifications;
    NSDictionary *_customSpotlightIconInfo;
    NSURL *_documentInboxURL;
}

@property(readonly, nonatomic) NSURL *documentInboxURL; // @synthesize documentInboxURL=_documentInboxURL;
@property(readonly, nonatomic) int whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(readonly, nonatomic) NSArray *urlTypes; // @synthesize urlTypes=_urlTypes;
@property(readonly, nonatomic) NSString *launchInterfaceFileName; // @synthesize launchInterfaceFileName=_launchInterfaceFileName;
@property(readonly, nonatomic) NSArray *launchImageInfo; // @synthesize launchImageInfo=_launchImageInfo;
@property(readonly, nonatomic) NSArray *domainsToPreheat; // @synthesize domainsToPreheat=_domainsToPreheat;
@property(readonly, nonatomic, getter=isStatusBarLegacy) BOOL statusBarIsLegacy; // @synthesize statusBarIsLegacy=_statusBarIsLegacy;
@property(readonly, nonatomic) int supportedTypes; // @synthesize supportedTypes=_supportedTypes;
@property(readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration; // @synthesize carPlayDeclaration=_carPlayDeclaration;
@property(readonly, nonatomic) unsigned int voipClass; // @synthesize voipClass=_voipClass;
@property(readonly, nonatomic) unsigned int uninstallCapability; // @synthesize uninstallCapability=_uninstallCapability;
@property(readonly, nonatomic) BOOL systemAppSupportsLocalNotifications; // @synthesize systemAppSupportsLocalNotifications=_systemAppSupportsLocalNotifications;
@property(readonly, nonatomic) BOOL requiresPasscodeIfLaunchedBeforeFirstUnlock; // @synthesize requiresPasscodeIfLaunchedBeforeFirstUnlock=_requiresPasscodeIfLaunchedBeforeFirstUnlock;
@property(readonly, nonatomic) BOOL alwaysLaunchesSuspended; // @synthesize alwaysLaunchesSuspended=_alwaysLaunchesSuspended;
@property(readonly, nonatomic, getter=isCloudKitEnabled) BOOL cloudKitEnabled; // @synthesize cloudKitEnabled=_isCloudKitEnabled;
@property(readonly, nonatomic) BOOL disablesScreenJail; // @synthesize disablesScreenJail=_disablesScreenJail;
@property(readonly, nonatomic) BOOL requiresHiDPI; // @synthesize requiresHiDPI=_requiresHiDPI;
@property(readonly, nonatomic, getter=isAppSuspendingUnsupported) BOOL appSuspendingUnsupported; // @synthesize appSuspendingUnsupported=_appSuspendingUnsupported;
@property(readonly, nonatomic) NSDictionary *searchDomainLaunchInfo; // @synthesize searchDomainLaunchInfo=_searchDomainLaunchInfo;
@property(readonly, nonatomic) BOOL wasGameCenterEverEnabled; // @synthesize wasGameCenterEverEnabled=_wasGameCenterEverEnabled;
@property(readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled; // @synthesize gameCenterEnabled=_isGameCenterEnabled;
@property(readonly, nonatomic) NSDictionary *customSpotlightIconInfo; // @synthesize customSpotlightIconInfo=_customSpotlightIconInfo;
@property(readonly, nonatomic) Class iconClass; // @synthesize iconClass=_iconClass;
@property(readonly, nonatomic) int networkUsageTypes; // @synthesize networkUsageTypes=_networkUsageTypes;
@property(readonly, nonatomic) int ignoredStatusBarStyleOverrides; // @synthesize ignoredStatusBarStyleOverrides=_ignoredStatusBarStyleOverrides;
@property(readonly, nonatomic) int defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(readonly, nonatomic) BOOL canChangeWallpaperStyle; // @synthesize canChangeWallpaperStyle=_canChangeWallpaperStyle;
@property(readonly, nonatomic) int defaultWallpaperStyle; // @synthesize defaultWallpaperStyle=_defaultWallpaperStyle;
@property(readonly, nonatomic) BOOL hasViewServiceEntitlement; // @synthesize hasViewServiceEntitlement=_hasViewServiceEntitlement;
@property(readonly, nonatomic) BOOL wantsFullScreen; // @synthesize wantsFullScreen=_wantsFullScreen;
@property(readonly, nonatomic) BOOL wantsLaunchWithoutPNG; // @synthesize wantsLaunchWithoutPNG=_wantsLaunchWithoutPNG;
@property(readonly, nonatomic) BOOL behavesAsCaller; // @synthesize behavesAsCaller=_behavesAsCaller;
@property(readonly, nonatomic) BOOL prefersSavedSnapshots; // @synthesize prefersSavedSnapshots=_prefersSavedSnapshots;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) NSString *carDisplayName; // @synthesize carDisplayName=_carDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL disablesClassicMode; // @synthesize disablesClassicMode=_disablesClassicMode;
@property(readonly, nonatomic) BOOL usesSplashBoard; // @synthesize usesSplashBoard=_usesSplashBoard;
@property(readonly, nonatomic, getter=isLaunchableDuringSetup) BOOL launchableDuringSetup; // @synthesize launchableDuringSetup=_isLaunchableDuringSetup;
@property(readonly, nonatomic) unsigned int visibilityOverride; // @synthesize visibilityOverride=_visibilityOverride;
@property(readonly, nonatomic, getter=isWatchApp) BOOL watchApp; // @synthesize watchApp=_isWatchApp;
@property(readonly, nonatomic) unsigned int dynamicApplicationShortcutItemsVersion; // @synthesize dynamicApplicationShortcutItemsVersion=_dynamicApplicationShortcutItemsVersion;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems; // @synthesize staticApplicationShortcutItems=_staticApplicationShortcutItems;
@property(readonly, copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(readonly, nonatomic, getter=isInternalApplication) BOOL internalApplication; // @synthesize internalApplication=_isInternalApplication;
@property(readonly, nonatomic, getter=isSystemApplication) BOOL systemApplication; // @synthesize systemApplication=_isSystemApplication;
@property(readonly, nonatomic, getter=isMonarchLinked) BOOL monarchLinked; // @synthesize monarchLinked=_isMonarchLinked;
- (void).cxx_destruct;
- (unsigned int)_parseVoipClass:(id)arg1;
- (BOOL)_supportsApplicationType:(int)arg1;
- (id)_copyApplicationMetadata;
- (id)_parseNameForBundleAtPath:(id)arg1 infoDictionary:(id)arg2;
- (id)_parseStaticApplicationShortcutItemsFromInfoDictionary:(id)arg1 bundle:(id)arg2;
- (int)_parseSupportedTypesFromInfoDictionary:(id)arg1;
- (id)_parseAppTags:(id)arg1 hasVisibilityOverride:(BOOL)arg2;
- (unsigned int)_parseVisibilityOverride:(id)arg1;
- (BOOL)_isiPad;
- (void)_reallyParse:(id)arg1 fromBundle:(id)arg2;
- (void)_parse:(id)arg1 fromBundle:(id)arg2;

@end
