//
//  DeepWallKidsLanguage.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// Typealias for language info
typedef NSString DeepWallKidsLanguage;

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids language manager for language info
@interface DeepWallKidsLanguageManager : NSObject

/** Returns DeepWallKids language info from language code
 * @return `DeepWallKidsLanguage`
 */
+ (NSString *)getLanguageByCode:(NSString *)code NS_SWIFT_NAME(getLanguage(by:));

@end

NS_ASSUME_NONNULL_END
