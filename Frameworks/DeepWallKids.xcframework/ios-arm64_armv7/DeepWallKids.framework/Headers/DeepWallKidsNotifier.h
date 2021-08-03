//
//  DeepWallKidsNotifier.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "DeepWallKidsNotifierDelegate.h"
#import "Ploutos.h"

/// DeepWallKids validate receipt result
typedef PloutosValidateReceiptResult* DeepWallKidsValidateReceiptResult;

NS_ASSUME_NONNULL_BEGIN

/// DeepWallKids event notifier class for observing events
@interface DeepWallKidsNotifier : EPEventNotifierManager

@end

NS_ASSUME_NONNULL_END
