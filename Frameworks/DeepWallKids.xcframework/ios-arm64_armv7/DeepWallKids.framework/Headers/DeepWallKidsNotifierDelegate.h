//
//  DeepWallKidsNotifierDelegate.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "DeepWallKidsPaywallResponseFailedModel.h"
#import "DeepWallKidsPaywallNotOpenedInfoModel.h"
#import "DeepWallKidsPaywallOpenedInfoModel.h"
#import "DeepWallKidsPaywallPurchasingProduct.h"
#import "Ploutos.h"
#import "PurchaseKit.h"

NS_ASSUME_NONNULL_BEGIN

/// Typealias for DeepWallKidsExtraDataType
typedef NSDictionary* DeepWallKidsExtraDataType;

/// Typealias for DeepWallKidsValidateReceiptResult
typedef PloutosValidateReceiptResult* DeepWallKidsValidateReceiptResult;

/// Typealias for DeepWallKidsPurchaseFailedModel
typedef PurchaseFailedModel* DeepWallKidsPurchaseFailedModel;

/// Typealias for DeepWallKidsRestoreFailedModel
typedef RestoreFailedModel* DeepWallKidsRestoreFailedModel;

/// Typealias for DeepWallKidsPaywallClosedInfoModel
typedef DeepWallKidsPaywallOpenedInfoModel* DeepWallKidsPaywallClosedInfoModel;


/// DeepWallKids event notifier protocol for observing events
@protocol DeepWallKidsNotifierDelegate <EPEventNotifierDelegate>

@optional

/// DeepWallKids paywall requested event
- (void)deepWallKidsPaywallRequested;

/// DeepWallKids paywall response received event
- (void)deepWallKidsPaywallResponseReceived;

/// DeepWallKids paywall response failure event
- (void)deepWallKidsPaywallResponseFailure:(DeepWallKidsPaywallResponseFailedModel *)event;

/// DeepWallKids paywall opened event
- (void)deepWallKidsPaywallOpened:(DeepWallKidsPaywallOpenedInfoModel *)event;

/// DeepWallKids paywall not opened event
- (void)deepWallKidsPaywallNotOpened:(DeepWallKidsPaywallNotOpenedInfoModel *)event;

/// DeepWallKids paywall action show disabled event
- (void)deepWallKidsPaywallActionShowDisabled:(DeepWallKidsPaywallActionShowDisabledInfoModel *)event;

/// DeepWallKids paywall closed event
- (void)deepWallKidsPaywallClosed:(DeepWallKidsPaywallClosedInfoModel)event;

/// DeepWallKids paywall extra data received event
- (void)deepWallKidsPaywallExtraDataReceived:(DeepWallKidsExtraDataType)event;

/// DeepWallKids paywall purchasing product event
- (void)deepWallKidsPaywallPurchasingProduct:(DeepWallKidsPaywallPurchasingProduct *)event;

/// DeepWallKids paywall purchase success event
- (void)deepWallKidsPaywallPurchaseSuccess:(DeepWallKidsValidateReceiptResult)event;

/// DeepWallKids paywall purchase failed event
- (void)deepWallKidsPaywallPurchaseFailed:(DeepWallKidsPurchaseFailedModel)event;

/// DeepWallKids paywall restore success event
- (void)deepWallKidsPaywallRestoreSuccess;

/// DeepWallKids paywall restore failed event
- (void)deepWallKidsPaywallRestoreFailed:(DeepWallKidsRestoreFailedModel)event;

/// DeepWallKids ATT status changed event
- (void)deepWallKidsATTStatusChanged;


@end

NS_ASSUME_NONNULL_END
