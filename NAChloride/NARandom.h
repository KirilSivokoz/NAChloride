//
//  NARandom.h
//  NAChloride
//
//  Created by Gabriel on 6/16/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NARandom : NSObject

+ (NSData *)randomData:(size_t)numBytes;

@end
