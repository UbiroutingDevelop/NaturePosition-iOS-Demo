//
//  SHTByteable.h
//  naturelib
//
//  Created by YangTao on 15/5/7.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

#import "SHTSocketDataType.h"

/**
 *  bundle data protocol which is used in socket transmission.
 */
@protocol SHTByteable <NSObject>

@required

/**
 * @brief bundle the data in the format: [dataByteSize(int), dataThemselves(byte array which length is dataByteSize)];
 */
- (datapacked) mallocBundle;

/// All byte size of SHTByteable mallocBundle;
- (long) bundleSize;

@end

