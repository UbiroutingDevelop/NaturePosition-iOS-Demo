//
//  SHTPrimaryDatas.h
//  naturelib
//
//  Created by YangTao on on 15/5/7.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

@interface SHTPrimaryDatas: NSObject

/*
 * convert byte array to intger
 */
+ (int) toIntegerWithByteArray: (unsigned char *) arrayPointer StartAt: (long)startIndex WithArrayLength: (long)length;

/*
 * convert byte array to short
 */
+ (short) toShortWithByteArray: (unsigned char *) arrayPointer StartAt: (long)startIndex WithArrayLength: (long)length;

/*
 * convert byte array to float
 */
+ (float) toFloatWithByteArray: (unsigned char *) arrayPointer StartAt: (long)startIndex WithArrayLength: (long)length;

/*
 * convert int to byte array
 */
+ (int) putToByteArray: (unsigned char *) byteArray WithInt: (int) intValue StartAt:(int)startIndex;

/*
 * convert short to byte array
 */
+ (int) putToByteArray: (unsigned char *) byteArray WithShort: (short) shortValue StartAt:(int)startIndex;

/*
 * convert float to byte array
 */
+ (int) putToByteArray: (unsigned char *) byteArray WithFloat: (float) floatValue StartAt:(int)startIndex;


/* 
 * put bytearray into another byte
 */
+ (int) putToByteArray:(unsigned char *)byteArray WithByteArray: (unsigned char *)toPutArray WithPutLength: (int)length StartAt: (int)startIndex;



@end

