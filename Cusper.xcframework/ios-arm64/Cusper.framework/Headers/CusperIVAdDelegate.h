//
//  CusperIVAdDelegate.h
//  Cusper
//
//  Created by Zinco on 2024/5/17.
//  Copyright © 2024 Zinco. All rights reserved.
//

#ifndef CusperIVAdDelegate_h
#define CusperIVAdDelegate_h


#endif /* CusperIVAdDelegate_h */

#import <Foundation/Foundation.h>


@protocol CusperIVAdDelegate <NSObject>

- (void)adDidShow:(id)ad;
- (void)adDidClick:(id)ad;
- (void)adDidDismiss:(id)ad;
@end
