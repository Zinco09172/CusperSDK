//
//  CusperRewardAd.h
//  ff
//
//  Created by Zinco on 2024/4/10.
//  Copyright © 2024 Zinco. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "CusperRVAdDelegate.h"
#import <UIKit/UIKit.h>



@interface CusperRewardAd : NSObject

@property (nonatomic,strong) NSString *adUnitId;
@property (nonatomic,weak) id<CusperRVAdDelegate> adDelegate;

+ (void)loadAdWithAdUnitId:(NSString *)adUnitId loadCallback:(void (^)(CusperRewardAd *rvAd,NSString *error))loadCallback;

- (instancetype)initWithAdUnitId:(NSString *)adUnitId;


- (void)loadAd:(void (^)(CusperRewardAd *rewardAd,NSString *error))loadCallback;
- (void)presentFromRootViewController:(UIViewController *)rootViewController;
- (void)presentFromRootViewController:(UIViewController *)rootViewController mute:(BOOL)mute;
- (void)destory;

- (void)notifyBidWin:(double) price;



//获取价格
- (double)getPrice;
//获取货币单位
- (NSString *)getCurrency;

@end

