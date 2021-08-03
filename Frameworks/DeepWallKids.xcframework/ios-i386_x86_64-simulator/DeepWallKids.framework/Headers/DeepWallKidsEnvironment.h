//
//  DeepWallKidsEnvironment.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWallKids environments
typedef NS_ENUM(NSUInteger, DeepWallKidsEnvironment) {
	/// DeepWallKids Sandbox environment
	DeepWallKidsEnvironmentSandbox,
	
	/// DeepWallKids Production environment
	DeepWallKidsEnvironmentProduction
};

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids environment manager
@interface DeepWallKidsEnvironmentManager : NSObject

/// Name for environment
+ (NSString *)nameForEnvironment:(DeepWallKidsEnvironment)environment;

/// Header value for environment
+ (NSString *)headerValueForEnvironment:(DeepWallKidsEnvironment)environment;


@end

NS_ASSUME_NONNULL_END
