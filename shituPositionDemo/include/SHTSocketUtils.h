//
//  SHTSocketUtils.h
//  naturelib
//
//  Created by YangTao on on 15/5/11.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//


void clearBuffer(unsigned char * buffer, unsigned long size);

unsigned char * mallocBuffer(unsigned long size);

unsigned char * mallocSendDataWithBundleData(unsigned char *sendData, unsigned int nSendData);



