//
//  DeepWallKidsLandingOpenInfoModel.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 10.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids paywall opened event model
@interface DeepWallKidsPaywallOpenedInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;

/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId;

@end

/// DeepWallKids paywall action show disabled event model
@interface DeepWallKidsPaywallActionShowDisabledInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;


/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId;

@end


NS_ASSUME_NONNULL_END
