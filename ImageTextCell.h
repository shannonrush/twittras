#import <Cocoa/Cocoa.h>

@interface ImageTextCell : NSTextFieldCell {
@private
    NSImage *image;
}

@property(readwrite, assign) NSImage *image;

- (void)drawWithFrame:(NSRect)cellFrame inView:(NSView *)controlView;
- (NSSize)cellSize;

@end

