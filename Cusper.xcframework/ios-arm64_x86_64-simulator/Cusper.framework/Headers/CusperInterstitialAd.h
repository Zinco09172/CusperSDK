//
//  CusperInterstitialAd.h
//  CUsAd
//
//  Created by Zinco on 2024/5/6.
//  Copyright © 2024 Zinco. All rights reserved.
//

#ifndef CusperInterstitialAd_h
#define CusperInterstitialAd_h


#endif /* CusperInterstitialAd_h */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CusperIVAdDelegate.h"


@interface CusperInterstitialAd : NSObject

@property (nonatomic,strong) NSString *adUnitId;
@property (nonatomic,weak) id<CusperIVAdDelegate> adDelegate;


- (instancetype)initWithAdUnitId:(NSString *)adUnitId;

+ (void)loadAdWithAdUnitId:(NSString *)adUnitId loadCallback:(void (^)(CusperInterstitialAd *ivAd,NSString *error))loadCallback;


- (void)loadAd:(void (^)(CusperInterstitialAd *ivAd,NSString *error))loadCallback;
- (void)presentFromRootViewController:(UIViewController *)rootViewController;
- (void)presentFromRootViewController:(UIViewController *)rootViewController mute:(BOOL)mute;
- (void)destory;

- (void)notifyBidWin:(double) price;



//获取价格
- (double)getPrice;
//获取货币单位
- (NSString *)getCurrency;


@end
