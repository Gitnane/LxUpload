//
//  AppDelegate.h
//  LxUpload
//
//  Created by 海南福泽科技  on 17/3/22.
//  Copyright © 2017年 abc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

