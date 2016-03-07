//
//  SHTQueueList.h
//  naturelib
//
//  Created by YangTao on on 15/5/18.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#import "SHTQueue.h"

@interface SHTQueueList : SHTQueue
{
    @protected
    SHTNode * _mark;
}

- (void) markAtIndex: (int) index;

- (void) moveMarkToNext;

- (SHTNode *) getMarkNode;

@end
