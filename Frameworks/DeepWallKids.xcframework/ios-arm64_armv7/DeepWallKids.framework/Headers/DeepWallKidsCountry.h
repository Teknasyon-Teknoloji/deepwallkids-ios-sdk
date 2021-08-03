//
//  DeepWallKidsCountry.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// Typealias for country info
typedef NSString DeepWallKidsCountry;

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids country manager for country info
@interface DeepWallKidsCountryManager : NSObject

/** Returns DeepWallKids country info from country code
 * @return `DeepWallKidsCountry`
 */
+ (NSString *)getCountryByCode:(NSString *)code NS_SWIFT_NAME(getCountry(by:));

@end

NS_ASSUME_NONNULL_END
