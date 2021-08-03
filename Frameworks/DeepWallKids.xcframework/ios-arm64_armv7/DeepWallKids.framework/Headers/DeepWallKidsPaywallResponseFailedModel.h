//
//  DeepWallKidsPaywallResponseFailedModel.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallKidsError.h"

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids paywall response failure event model
@interface DeepWallKidsPaywallResponseFailedModel : NSObject

/// Error code info
@property (nonatomic, strong) NSString *errorCode;

/// Reason info
@property (nonatomic, strong) NSString *reason;

/// Action name
@property (nonatomic, strong) NSString *actionName;

/// Test page id
@property (nonatomic, nullable) NSNumber *testPageId;

/// Internal
- (instancetype)initWithErrorEnum:(DeepWallKidsError)errorEnum actionName:(NSString *)actionName;

/// Internal
- (instancetype)initWithErrorCode:(NSString *)errorCode reason:(NSString *)reason actionName:(NSString *)actionName;

@end

NS_ASSUME_NONNULL_END
