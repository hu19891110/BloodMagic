//
// Created by Alex Denisov on 12.07.13.
// Copyright (c) 2013 railsware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RDClassCollector : NSObject

- (NSArray *)collectForProtocol:(Protocol *)protocol;

@end