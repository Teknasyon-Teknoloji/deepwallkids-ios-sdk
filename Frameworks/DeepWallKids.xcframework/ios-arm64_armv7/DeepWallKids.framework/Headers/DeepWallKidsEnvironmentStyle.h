//
//  DeepWallKidsEnvironmentStyle.h
//  DeepWallKids
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWallKids environment style for paywalls
typedef NS_ENUM(NSUInteger, DeepWallKidsEnvironmentStyle) {
	/// DeepWallKids automatic environment style based on system
	DeepWallKidsEnvironmentStyleAutomatic = 999,
	
	/// DeepWallKids light environment style
	DeepWallKidsEnvironmentStyleLight = 0,
	
	/// DeepWallKids dark environment style
	DeepWallKidsEnvironmentStyleDark = 1,
};
