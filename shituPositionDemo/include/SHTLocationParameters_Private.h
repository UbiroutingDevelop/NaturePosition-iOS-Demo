//
//  SHTNatureParameters.h
//  naturelib
//
//  Created by YangTao on on 15/5/13.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#import "SHTLocationParameters.h"

#define NO_FLOOR -99

@interface SHTLocationParameters()

@property (nonatomic, readonly) int storeId;
@property (nonatomic, readonly) NSString * host;
@property (nonatomic, readonly) int port;
@property (nonatomic, readonly) BOOL useOneWayMatch;
@property (nonatomic, readonly) BOOL useInitPos;
@property (nonatomic, readonly) short initFloor;
@property (nonatomic, readonly) float initX;
@property (nonatomic, readonly) float initY;
@property (nonatomic, readonly) NSString * key;
@property (nonatomic, readonly) enum LocType locType;
@property (nonatomic, readonly) SHTFloor * floorParams;
@property (nonatomic, readonly) int floorNum;

- (instancetype) initWithStoreId: (int)storeId Host: (NSString *)host Port: (int)port USEOneWayMatch: (BOOL)useOneWay WithInitPosition: (struct IndoorPosition)initPosition AndFloorParameters:(SHTFloor *) floorParameters AndFloorNums: (int)floorNum AndKey: (NSString *)key AndLocType: (enum LocType) locType;
- (float)scaleOfFloor: (int)floor;
- (int)angleOffsetOfFloor: (int)floor;
- (int)widthOfFloor: (int)floor;
- (int)heightOfFloor: (int)floor;

@end
