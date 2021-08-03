//
//  DeepWallKidsPaywallNotOpenedInfoModel.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 10.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids paywall not opened event model
@interface DeepWallKidsPaywallNotOpenedInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;

/// Reason info
@property (nonatomic, strong) NSString *reason;

/// Error code info
@property (nonatomic, strong) NSString *errorCode;

/// Test page id
@property (nonatomic, nullable) NSString *actionName;


/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId reason:(NSString *)reason errorCode:(NSString *)errorCode;

@end

NS_ASSUME_NONNULL_END
