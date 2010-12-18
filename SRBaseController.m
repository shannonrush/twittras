//
//  SRBaseController.m
//  Twittras
//
//  Created by Shannon Rush on 12/17/10.
//  Copyright 2010 Rush Devo. All rights reserved.
//

#import "SRBaseController.h"


@implementation SRBaseController

-(NSImage *)resizeImage:(NSImage *)sourceImage toSize:(float)size {
	[sourceImage setScalesWhenResized:YES];
	NSImage *resizedImage = [[[NSImage alloc] initWithSize:NSMakeSize(size, size)] autorelease];
	[resizedImage lockFocus];
	[sourceImage setSize:NSMakeSize(size, size)];
	[[NSGraphicsContext currentContext] setImageInterpolation:NSImageInterpolationHigh];
	[sourceImage compositeToPoint:NSZeroPoint operation:NSCompositeCopy];
	[resizedImage unlockFocus];
	return resizedImage;
}

@end
