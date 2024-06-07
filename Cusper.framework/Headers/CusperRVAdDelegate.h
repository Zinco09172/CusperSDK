//
//  CusperRVAdDelegate.h
//  Cusper
//
//  Created by Zinco on 2024/5/17.
//  Copyright © 2024 Zinco. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CusperRVAdDelegate <NSObject>

- (void)adDidShow:(id)ad;
- (void)adDidClick:(id)ad;
- (void)adDidDismiss:(id)ad;
- (void)rewardedAd:(id)ad;
@end
