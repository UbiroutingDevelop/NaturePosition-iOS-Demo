//
//  SHTPositionHeader.h
//  naturelib
//
//  Created by shitupublic on 15/5/8.
//  Copyright (c) 2015年 shitupublic. All rights reserved.
//


#import "SHTHeader.h"

@interface SHTPositionHeader : NSObject<SHTHeader>

@property (nonatomic) int storeId;
@property (nonatomic) float initX;
@property (nonatomic) float initY;
@property (nonatomic) short initArea;

-(instancetype) initWithStoreId: (int)storeId InitX: (float)initX InitY: (float)initY Area: (short)area;

@end

