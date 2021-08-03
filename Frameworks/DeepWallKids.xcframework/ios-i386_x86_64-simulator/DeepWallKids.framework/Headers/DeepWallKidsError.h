//
//  DeepWallKidsError.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWallKids Error enum for error handling
typedef NS_ENUM(NSUInteger, DeepWallKidsError) {
	/// DeepWallKids page api response invalid error
	DeepWallKidsErrorPageApiResponseInvalid = 10101,
	/// DeepWallKids page api products empty error
	DeepWallKidsErrorPageApiProductsEmpty = 10102,
	/// DeepWallKids page api category unknown
	DeepWallKidsErrorPageApiCategoryUnknown = 10103,
	
	/// DeepWallKids bundle data invalid error
	DeepWallKidsErrorBundleGzippedDataInvalid = 10201,
	/// DeepWallKids bundle data invalid error
	DeepWallKidsErrorBundleStringDataInvalid = 10202,
	/// DeepWallKids bundle available products empty error
	DeepWallKidsErrorBundleAvailableProductsEmpty = 10203,
	/// DeepWallKids bundle available products invalid error
	DeepWallKidsErrorBundleAvailableProductsInvalid = 10204,
	/// DeepWallKids bundle file error
	DeepWallKidsErrorBundleFileError = 10205,
	
	/// DeepWallKids request already active error
	DeepWallKidsErrorRequestAlreadyRequesting = 10301,
	/// DeepWallKids request DeepWallKids disabled error
	DeepWallKidsErrorRequestDeepWallKidsDisabled = 10302,
	/// DeepWallKids request user properties did not set error
	DeepWallKidsErrorRequestUserPropertiesDidNotSet = 10303,
	
	/// DeepWallKids user invalid for app tracking
	DeepWallKidsErrorRequestUserInvalidForAppTracking = 10401
	
	
};
