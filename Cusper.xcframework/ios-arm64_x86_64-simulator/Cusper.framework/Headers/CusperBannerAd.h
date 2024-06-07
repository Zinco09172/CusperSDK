//
//  CusperBannerAd.h
//  TestFrame
//
//  Created by Zinco on 2024/5/9.
//  Copyright © 2024 Zinco. All rights reserved.
//

#ifndef CusperBannerAd_h
#define CusperBannerAd_h


#endif /* CusperBannerAd_h */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CusperBannerAdDelegate.h"
#import "CusperBannerAdSize.h"
#import <WebKit/WebKit.h>

@interface CusperBannerAd : WKWebView

@property (nonatomic,strong) NSString *adUnitId;
@property (nonatomic,weak) id<CusperBannerAdDelegate> adDelegate;


+ (void)loadAdWithAdUnitId:(NSString *)adUnitId adSize:(CusperBannerAdSize *)adSize loadCallback:(void (^)(CusperBannerAd *bannerAd,NSString *error))loadCallback;

- (void)notifyBidWin:(double) price;

//获取价格
- (double)getPrice;
//获取货币单位
- (NSString *)getCurrency;


@end
