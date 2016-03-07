//
//  SHTPOIPath.h
//  naturelib
//
//  Created by YangTao on on 15/6/3.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
@class SHTPOI;

@interface SHTPOIPath : NSObject

@property (nonatomic) int distance;

- (void) addPOI: (SHTPOI *)poi;

- (unsigned int) size;

- (SHTPOI *) getPOIAt: (unsigned int)index;

- (void) clear;

@end
