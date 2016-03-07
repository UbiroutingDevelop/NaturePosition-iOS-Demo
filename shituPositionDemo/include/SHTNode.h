//
//  SHTNode.h
//  naturelib
//
//  Created by YangTao on 15/5/15.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

@interface SHTNode : NSObject

@property (nonatomic, strong) id content;
@property (nonatomic) SHTNode * next;

- (instancetype) initWithContent: (id) content;

@end
