//
//  SHTQueue.h
//  naturelib
//
//  Created by YangTao on on 15/5/15.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#import "SHTLinkedList.h"

@interface SHTQueue : SHTLinkedList

- (SHTNode *) pull;

- (void) push: (SHTNode *)node;

@end
