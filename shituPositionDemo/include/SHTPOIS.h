//
//  SHTPOIS.h
//  naturelib
//
//  Created by YangTao on 15/5/29.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

const static unsigned int UNREACHABLE = 9999;

@class SHTPOI, SHTPOIPath;

@interface SHTPOIS : NSObject

@property (nonatomic, readonly) unsigned int size;

- (instancetype) initWithSize: (unsigned int) size;

- (SHTPOI *) POIOfId: (unsigned int) idd;

- (void) addNewPOI: (SHTPOI *) newPoi;

- (void) updateEdgeOfPOI: (SHTPOI *) firstPOI And: (SHTPOI *) secondPOI WithWeight: (unsigned int) weight;

- (SHTPOIPath *) shortPathFrom: (SHTPOI *)startPOI To: (SHTPOI *)destinationPOI;

- (unsigned int)weightOfIndex: (unsigned int)firstIndex And: (unsigned int)secondIndex;

@end
