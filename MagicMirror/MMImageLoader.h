//
//  MMImageLoader.h
//  MagicMirror2
//
//  Created by James Tang on 12/1/2016.
//  Copyright © 2016 James Tang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MMImageLoader : NSObject

- (NSImage *)imageNamed:(NSString *)name;

@end