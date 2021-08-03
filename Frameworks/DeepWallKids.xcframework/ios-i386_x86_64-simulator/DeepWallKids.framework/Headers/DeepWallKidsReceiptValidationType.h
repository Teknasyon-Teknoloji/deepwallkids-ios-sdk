//
//  DeepWallKidsReceiptValidationType.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWallKids Receipt Validation Type
typedef NS_ENUM(NSUInteger, DeepWallKidsReceiptValidationType) {
	/// DeepWallKids validation type for purchase operations
	DeepWallKidsReceiptValidationTypePurchase = 1,
	
	/// DeepWallKids validation type for restore operations
	DeepWallKidsReceiptValidationTypeRestore = 2,
	
	/// DeepWallKids validation type for automatic operations
	DeepWallKidsReceiptValidationTypeAutomatic = 3
};
