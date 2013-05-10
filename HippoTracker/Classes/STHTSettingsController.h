//
//  STHTSettingsController.h
//  geotracking
//
//  Created by Maxim Grigoriev on 1/24/13.
//  Copyright (c) 2013 Maxim V. Grigoriev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "STSessionManagement.h"

#define mapYandex 0
#define mapApple 1

@interface STHTSettingsController : NSObject <STHTSettingsController>

+ (NSDictionary *)defaultSettings;

+ (STHTSettingsController *)initWithSettings:(NSDictionary *)startSettings;

- (NSString *)applyNewSettings:(NSDictionary *)newSettings;

- (NSArray *)currentSettings;
- (NSMutableDictionary *)currentSettingsForGroup:(NSString *)group;

@property (nonatomic, strong) id <STSession> session;

@end
