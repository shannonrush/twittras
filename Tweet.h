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
}
@property(retain) NSString *screenName;
@property(retain) NSString *text;
@end