//
//  AppDelegate.h
//  STV_TestApp
//
//  Created by Flávio Marques on 07/02/17.
//  Copyright © 2017 com.prototypes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

