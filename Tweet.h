//
//  Tweet.h
//  Twittras
//
//  Created by Shannon Rush on 12/14/10.
//  Copyright 2010 Rush Devo. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Tweet : NSObject {
	NSString *screenName;
	NSString *text;
	NSString *imagePath;
}
@property(retain) NSString *screenName;
@property(retain) NSString *text;
@property(retain) NSString *imagePath;
@end