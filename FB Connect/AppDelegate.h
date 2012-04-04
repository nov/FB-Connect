//
//  AppDelegate.h
//  FB Connect
//
//  Created by 真武 信和 on 12/02/13.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define VICTIMS_FB_ACCESS_TOKEN @"AAAByykUMsVsBAN4FfSm3vAJgoL8GozL4dDaZBzQTYLACn6usmj1oruAYAY4ad9ZCrYgNaLTZCibAHZC9jWYveJs35iJEtdMSbJvoZAX9ZAtwZDZD"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (NSDictionary*)parseURLParams:(NSString *)query;

@end
