//
//  AppDelegate.h
//  SelectedImage
//
//  Created by Pramodkumar kandukuru on 5/19/17.
//  Copyright © 2017 Pramodkumar kandukuru. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

