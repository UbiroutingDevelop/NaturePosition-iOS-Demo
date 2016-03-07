//
//  SHTStore_Private.h
//  naturelib.framework
//
//  Created by YangTao on 15/8/20.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#import "SHTStore.h"

@interface SHTStore()

@property (nonatomic) long idd;

@property (nonatomic) int floorNum;

@property (nonatomic) SHTFloor * floorParameters;

- (instancetype)initWithId:(long)idd Name:(NSString *)name Coordinate: (struct BaiduGPSCoordinate)coordinate AndFloorsParameters:(SHTFloor *)floorsParam AndFloorNum: (int)floorNum;

@end
