//
//  SHTPOI.h
//  naturelib
//
//  Created by YangTao on 15/5/29.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

@interface SHTPOI : NSObject

@property (nonatomic, readonly) unsigned long idd;
@property (nonatomic, readonly) int area;
@property (nonatomic, readonly) NSString * name;
@property (nonatomic) unsigned long time;
@property (nonatomic) float textWidth;

/**
 * indicate that a point is a poi or just route point
 */
@property (nonatomic, readonly) BOOL isPOI;

- (instancetype) initWithIdd: (unsigned long)idd Area: (int)area Name: (NSString *) name AndTime: (unsigned long)time;

@end