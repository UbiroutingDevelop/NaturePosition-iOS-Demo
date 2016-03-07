
//  SHTNatureData.h
//  naturelib
//
//  Created by YangTao on on 15/5/7.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

#import "SHTOrientation.h"
#import <Foundation/Foundation.h>

@interface SHTNatureData : NSObject

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) float azimuth;
@property (nonatomic) float pitch;
@property (nonatomic) float roll;
@property (nonatomic) float pressure;

- (instancetype) initWithMagX:(float) magX AndMagY:(float)magY AndMagZ:(float)magZ AndOrientation:(SHTOrientation)orientation Pressure:(float)pressure;

@end