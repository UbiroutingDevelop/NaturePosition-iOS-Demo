//
//  SHTLinkedList.h
//  naturelib
//
//  Created by YangTao on on 15/5/15.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

@class SHTNode;

@interface SHTLinkedList : NSObject
{
    @protected
    SHTNode * _head;
    SHTNode * _tail;
    int _size;
}

- (SHTNode *) head;

- (SHTNode *) tail;

- (void)add:(id)nodeValue;

- (void)addNode: (SHTNode *)node;

- (SHTNode *) getNodeAtIndex: (int)index;

- (void)walkThrough;

- (void)empty;

- (int)size;

@end
