//
//  SHTNatureParameters.h
//  naturelib
//
//  Created by shitupublic on 15/5/13.
//  Copyright (c) 2015年 shitupublic. All rights reserved.
//

@interface SHTNatureParameters : NSObject

@property (nonatomic) int storeId;
@property (nonatomic) NSString * host;
@property (nonatomic) int port;
@property (nonatomic) BOOL useOneWayMatch;
@property (nonatomic) int angleOffset;
@property (nonatomic) int mapWidth;
@property (nonatomic) int mapHeight;
@property (nonatomic) BOOL useInitPos;
@property (nonatomic) short initFloor;
@property (nonatomic) float initX;
@property (nonatomic) float initY;
@property (nonatomic) NSString * key;

- (instancetype) initWithStoreId: (int)storeId Host: (NSString *)host Port: (int)port USEOneWayMatch: (BOOL)useOneWay WithInitFloor: (short)initFloor InitX: (float)initX InitY: (float)initY AndScales: (float *)scales AndFloors: (int *)floors AndFloorNums: (int)floorNum MapWidth: (int)mapWidth AndHeight: (int)mapHeight AndAngleOffset: (int)angleOffset AndKey: (NSString *)key;

- (float)scaleOfFloor: (int)floor;

@end
