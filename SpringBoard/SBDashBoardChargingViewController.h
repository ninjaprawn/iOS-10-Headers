//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@class NSMutableArray, SBLockScreenBatteryChargingView;

@interface SBDashBoardChargingViewController : SBDashBoardViewControllerBase
{
    SBLockScreenBatteryChargingView *_chargingView;
    NSMutableArray *_connectedDevices;
}

- (void).cxx_destruct;
- (int)presentationStyle;
- (int)presentationPriority;
- (int)presentationType;
- (BOOL)handleEvent:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initForDisplayOfBattery:(BOOL)arg1;

@end
