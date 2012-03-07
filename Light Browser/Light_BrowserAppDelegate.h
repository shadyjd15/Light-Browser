//
//  Light_BrowserAppDelegate.h
//  Light Browser
//
//  Created by Shahid Choudhry on 06/03/2012.
//  Copyright 2012 Shahid LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Light_BrowserAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
