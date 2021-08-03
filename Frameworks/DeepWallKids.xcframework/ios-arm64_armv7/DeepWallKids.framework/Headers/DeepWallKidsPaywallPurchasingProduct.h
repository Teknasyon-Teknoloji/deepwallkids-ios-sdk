//
//  DeepWallKidsPaywallPurchasingProduct.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 11.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids paywall purchasing product event model
@interface DeepWallKidsPaywallPurchasingProduct : NSObject

/// Product code info
@property (nonatomic) NSString *productCode;


/// Internal
- (instancetype)initWithProductCode:(NSString *)productCode;

@end

NS_ASSUME_NONNULL_END
