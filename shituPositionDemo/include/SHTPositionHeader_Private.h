//
//  SHTPositionHeader.h
//  naturelib
//
//  Created by YangTao on on 15/5/8.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//


#import "SHTHeader.h"

@interface SHTPositionHeader : NSObject<SHTHeader>

@property (nonatomic) int storeId;
@property (nonatomic) float initX;
@property (nonatomic) float initY;
@property (nonatomic) short initArea;
@property (nonatomic) enum LocType locType;

-(instancetype) initWithStoreId: (int)storeId InitX: (float)initX InitY: (float)initY Area: (short)area WithLocType: (enum LocType)locType;

@end

