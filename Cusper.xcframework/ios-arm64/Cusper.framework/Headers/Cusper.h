//
//  Cusper.h
//  Cusper
//
//  Created by Zinco on 2024/5/13.
//  Copyright © 2024 Zinco. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Cusper.
FOUNDATION_EXPORT double CusperVersionNumber;

//! Project version string for Cusper.
FOUNDATION_EXPORT const unsigned char CusperVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Cusper/PublicHeader.h>

@interface Cusper : NSObject


+ (BOOL)isAllowReportDeviceInfo;

+ (void)setAllowReportDeviceInfo:(BOOL)allow;

+ (void) initConfig:(void (^)(BOOL success, NSString *error))completionHandler;

+ (NSString *)getSdkVersion;

@end

