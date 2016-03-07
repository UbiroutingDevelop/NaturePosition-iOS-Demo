//
//  SHTSteper.h
//  naturelib
//
//  Created by YangTao on on 15/6/18.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

#import "SHTStepDelegate.h"

@interface SHTSteper : NSObject

- (void)step;

- (void)refreshWithAccX: (float)accx AccY: (float)accy AccZ: (float)accz;

- (void)setDelegate:(id<SHTStepDelegate>) delegate;

@end
