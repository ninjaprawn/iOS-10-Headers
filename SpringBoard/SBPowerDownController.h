//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBPowerDownViewDelegate.h"

@class SBAlertView<SBPowerDownViewInterface>;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate>
{
    id _delegate;
    SBAlertView<SBPowerDownViewInterface> *_powerDownView;
    CDUnknownBlockType _orderOutCompletion;
}

@property(nonatomic) __weak id <SBPowerDownControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType orderOutCompletion; // @synthesize orderOutCompletion=_orderOutCompletion;
- (void).cxx_destruct;
- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (double)longPressDurationForHomeButton;
- (double)autoLockTime;
- (void)activate;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (BOOL)hasTranslucentBackground;
- (void)cancel;
- (void)powerDown;
- (void)orderOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)orderFront;
- (void)dealloc;
- (id)init;

@end
