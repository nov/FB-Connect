//
//  AppDelegate.h
//  FB Connect
//
//  Created by 真武 信和 on 12/02/13.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define VICTIMS_FB_ACCESS_TOKEN @"replace_me"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (NSDictionary*)parseURLParams:(NSString *)query;

@end
