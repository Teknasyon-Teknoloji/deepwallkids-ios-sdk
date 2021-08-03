//
//  DeepWallKidsCore.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DeepWallKidsConfig.h"
#import "DeepWallKidsUserProperties.h"
#import "DeepWallKidsNotifierDelegate.h"

/// Typealias for extra data transfers
typedef NSDictionary* DeepWallKidsExtraDataType;

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids
NS_SWIFT_NAME(DeepWallKids)
@interface DeepWallKidsCore : NSObject

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// UNAVAILABLE
+ (void)initialize NS_UNAVAILABLE;

/// DeepWallKidsCore shared instance
@property (readonly, nonatomic, class) DeepWallKidsCore *shared;


#pragma mark - Public Properties

/// DeepWallKids config
- (DeepWallKidsConfig *)config;

/// DeepWallKids user properties
- (DeepWallKidsUserProperties *)userProperties;


/// DeepWallKids current languagese
@property (readonly, nonatomic) DeepWallKidsLanguage *currentLanguage;

/// DeepWallKids ready status
@property (readonly) BOOL readyStatus;


#pragma mark - Public Functions

/// Initialize DeepWallKids SDK
+ (void)initializeWithApiKey:(NSString *)apiKey environment:(DeepWallKidsEnvironment)environment NS_SWIFT_NAME(initialize(apiKey:environment:));


/// Set user properties to use SDK
- (void)setUserProperties:(DeepWallKidsUserProperties *)props NS_SWIFT_NAME(setUserProperties(_:));

/// Update country info for user properties
- (void)updateUserPropertiesCountry:(DeepWallKidsCountry *)country NS_SWIFT_NAME(updateUserProperties(country:));

/// Update language info for user properties
- (void)updateUserPropertiesLanguage:(DeepWallKidsLanguage *)language NS_SWIFT_NAME(updateUserProperties(language:));

/// Update environmentStyle info for user properties
- (void)updateUserPropertiesEnvironmentStyle:(DeepWallKidsEnvironmentStyle)environmentStyle NS_SWIFT_NAME(updateUserProperties(environmentStyle:));

/// Update user properties
- (void)updateUserPropertiesCountry:(nullable DeepWallKidsCountry *)country language:(nullable DeepWallKidsLanguage *)language environmentStyle:(DeepWallKidsEnvironmentStyle)environmentStyle  NS_SWIFT_NAME(updateUserProperties(country:language:environmentStyle:));


/// Update DeepWallKids SDK Enabled status
- (void)updateEnabled:(BOOL)enabled;


/// Request paywall method for showing paywalls.
- (void)requestPaywallWithAction:(NSString *)action inView:(UIViewController *)view NS_SWIFT_NAME(requestPaywall(action:in:));
/// Request paywall method for showing paywalls.
- (void)requestPaywallWithAction:(NSString *)action inView:(UIViewController *)view extraData:(nullable DeepWallKidsExtraDataType)extraData NS_SWIFT_NAME(requestPaywall(action:in:extraData:));

/// Closes paywall screen
- (void)closePaywall;

/// Sends ExtraData to active paywall
- (void)sendExtraDataToPaywall:(DeepWallKidsExtraDataType)extraData;

/// Hide loading indicator from paywall screen
- (void)hidePaywallLoadingIndicator;

/// Validates receipt for type
- (void)validateReceiptForType:(PloutosValidationType)type;

#pragma mark - Event Handling

/// Observe events for DeepWallKids event handling
- (void)observeEventsFor:(id<DeepWallKidsNotifierDelegate>)observer;

/// Remove observer for DeepWallKids event handling
- (void)removeObserverFor:(id<DeepWallKidsNotifierDelegate>)observer;


@end

NS_ASSUME_NONNULL_END
