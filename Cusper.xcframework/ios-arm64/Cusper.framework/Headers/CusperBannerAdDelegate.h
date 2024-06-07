//
//  CusperBannerAdDelegate.h
//  Cusper
//
//  Created by Zinco on 2024/5/17.
//  Copyright © 2024 Zinco. All rights reserved.
//

#ifndef CusperBannerAdDelegate_h
#define CusperBannerAdDelegate_h


#endif /* CusperBannerAdDelegate_h */
#import <Foundation/Foundation.h>

@protocol CusperBannerAdDelegate <NSObject>

- (void)adDidShow:(id)ad;
- (void)adDidClick:(id)ad;
@end
