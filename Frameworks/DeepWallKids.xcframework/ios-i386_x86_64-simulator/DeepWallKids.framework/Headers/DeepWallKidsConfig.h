//
//  DeepWallKidsConfig.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallKidsEnvironment.h"

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids Config
@interface DeepWallKidsConfig : NSObject

/// Api key to be used in DeepWallKids
@property (nonatomic, strong) NSString *apiKey;

/// Current environment
@property (nonatomic) DeepWallKidsEnvironment environment;

/// Application Id
@property (nonatomic, strong, nullable) NSNumber *appId;

/// SDK initialize time
@property (readonly, nonatomic, strong) NSDate *initializeTime;

/// SDK ready wait time
@property (nonatomic) NSTimeInterval initializationTimeout;

/// SDK Version
@property (readonly, nonatomic, strong) NSString *sdkVersion;

/// Returns `true` if current environment is sandbox
@property (readonly, nonatomic) BOOL isSandboxEnvironment;


/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for config
- (instancetype)initWithApiKey:(NSString *)apiKey environment:(DeepWallKidsEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
