//
//  DeepWallKidsUserProperties.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallKidsCountry.h"
#import "DeepWallKidsLanguage.h"
#import "DeepWallKidsEnvironmentStyle.h"
#import "Ploutos.h"

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids user properties
@interface DeepWallKidsUserProperties : NSObject

/// UUID info
@property (nonatomic) NSString *uuid;

/// App version info
@property (nonatomic, nullable) NSString *appVersion;

/// Country info
@property (nonatomic) DeepWallKidsCountry *country;

/// Language info
@property (nonatomic) DeepWallKidsLanguage *language;

/// Environment style info
@property (nonatomic) DeepWallKidsEnvironmentStyle environmentStyle;


/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallKidsCountry *)country language:(DeepWallKidsLanguage *)language;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallKidsCountry *)country language:(DeepWallKidsLanguage *)language environmentStyle:(DeepWallKidsEnvironmentStyle)environmentStyle;


/// Internal
- (PloutosUserProperties *)toPloutosProps;


@end

NS_ASSUME_NONNULL_END
