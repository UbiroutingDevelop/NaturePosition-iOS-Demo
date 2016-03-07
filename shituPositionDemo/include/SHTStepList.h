//
//  SHTStepList.h
//  naturelib
//
//  Created by YangTao on on 15/6/18.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

#import "SHTStepDelegate.h"

@interface SHTStepList : NSObject

@property (nonatomic, weak) id<SHTStepDelegate> delegate;

- (void) recordStep;

- (int) getNbStep;

@end
