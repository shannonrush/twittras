//
//  Tweet.m
//  Twittras
//
//  Created by Shannon Rush on 12/14/10.
//  Copyright 2010 Rush Devo. All rights reserved.
//

#import "Tweet.h"

@implementation Tweet

@synthesize screenName;
@synthesize text;
@synthesize imagePath;

- (void) dealloc {
	[imagePath release];
	[screenName release];
	[text release];
	[super dealloc];
}
@end
