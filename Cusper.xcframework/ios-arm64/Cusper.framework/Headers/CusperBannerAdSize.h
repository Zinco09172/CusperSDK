//
//  CusperBannerAdSize.h
//  Cusper
//
//  Created by Zinco on 2024/5/16.
//  Copyright © 2024 Zinco. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CusperBannerAdSize : NSObject

@property (nonatomic, assign) NSInteger w;
@property (nonatomic, assign) NSInteger h;

+ (CusperBannerAdSize *)initWithWH:(NSInteger *)width height:(NSInteger *)height;

@end
