//
//  SHTDB.h
//  naturelib
//
//  Created by YangTao on on 15/5/21.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SHTDB : NSObject

+ (SHTDB *) getInstance;

- (BOOL)openWithFileName: (NSString *) fileName;

- (BOOL)execSQL: (NSString *) createSQL;

- (BOOL)prepareStatement: (NSString *)prepareSQL;

- (BOOL)bindStatementAt: (int)index WithPointer: (void *)blobPointer EndAtLengthOfBytes: (int)nbytes;

- (BOOL)bindStatementAt: (int)index WithInt:(int)value;

- (BOOL)bindStatementAt: (int)index WithDouble: (double)value;

- (BOOL)bindStatementAt: (int)index WithCharPointer: (char *)charPointer EndAtLengthOfBytes: (int)nbytes;

- (BOOL)bindStatementWithNull: (int)index;

- (BOOL)deletePrepareStmt;

- (int)execPrepareStatment;

- (BOOL)resetPrepareStatement;

- (BOOL)beginTransaction;

- (BOOL)commit;

- (BOOL)commitOrRollback;

- (BOOL)rollback;

- (int)countOfTable: (NSString *) tableName;

- (int)getIntAtColumn: (int) index;

- (double)getDoubleAtColumn: (int)index;

- (const unsigned char *)getStringAtColumn: (int)index AndGetReadLength: (int *)lengthPt;

- (const unsigned char *)getBlobAtColumn: (int)index AndGetReadLength: (int *)lengthPt;




@end
