//
//  TweetsController.h
//  Twittras
//
//  Created by Shannon Rush on 12/14/10.
//  Copyright 2010 Rush Devo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SRBaseController.h"

@interface TweetsController : SRBaseController {
	IBOutlet NSTableView *tableView;
	NSMutableArray *tweets;
}
@property (retain) IBOutlet NSTableView *tableView;
@property (retain) NSMutableArray *tweets;

-(void)refresh;

@end
