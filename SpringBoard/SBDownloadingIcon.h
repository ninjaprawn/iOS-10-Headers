//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon
{
    BOOL _wasUninstalledByUser;
    SBApplicationPlaceholder *_appPlaceholder;
}

+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1;
- (void).cxx_destruct;
- (id)appPlaceholder;
- (BOOL)isDownloadingIcon;
- (void)cancelDownload;
- (id)uninstallAlertBody;
- (void)setUninstalledByUser:(BOOL)arg1;
- (BOOL)uninstalledByUser;
- (void)setApplicationPlaceholder:(id)arg1;
- (void)reloadForStatusChange;
- (void)completeUninstall;
- (id)realDisplayName;
- (id)homescreenIconImage;
- (id)_darkenedIconImageForImage:(id)arg1;
- (id)gridCellImage;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationPlaceholder:(id)arg1;

@end
