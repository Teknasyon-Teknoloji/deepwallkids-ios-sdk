//
//  PloutosUserProperties.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Ploutos user properties
@interface PloutosUserProperties : NSObject

/// UUID info
@property (nonatomic) NSString *uuid;

/// Country info
@property (nonatomic) NSString *countryCode;

/// Language info
@property (nonatomic) NSString *languageCode;

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid countryCode:(NSString *)countryCode languageCode:(NSString *)languageCode NS_SWIFT_NAME(init(uuid:country:language:));

@end

NS_ASSUME_NONNULL_END
