//
//  STHTLap.h
//  HippoTracker
//
//  Created by Maxim Grigoriev on 5/13/13.
//  Copyright (c) 2013 Maxim Grigoriev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "STDatum.h"

@class STHTHippodrome, STLocation;

@interface STHTLap : STDatum

@property (nonatomic, retain) STHTHippodrome *hippodrome;
@property (nonatomic, retain) NSSet *locations;
@end

@interface STHTLap (CoreDataGeneratedAccessors)

- (void)addLocationsObject:(STLocation *)value;
- (void)removeLocationsObject:(STLocation *)value;
- (void)addLocations:(NSSet *)values;
- (void)removeLocations:(NSSet *)values;

@end
