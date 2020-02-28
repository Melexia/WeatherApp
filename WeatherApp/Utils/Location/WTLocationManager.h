//
//  WTLocationManager.h
//  WeatherTest
//
//  Created by Andrea Sanchez Roman on 27/02/20.
//  Copyright © 2020 Melexia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WTLocation.h"

NS_ASSUME_NONNULL_BEGIN

@class WTLocationManager;

@protocol WTLocationManagerDelegate <NSObject>

- (void)locationPermissionRestrictedOrDenied;
- (void)locationPermissionAuthorized;
- (void)locationManager:(WTLocationManager*)manager locationUpdated:(WTLocation*)currentLocation;

@end


@interface WTLocationManager : NSObject

@property (nonatomic) id <WTLocationManagerDelegate> delegate;

+(id)shared;
- (void)requestPermission;
- (void)startUpdatingLocation;

@end

NS_ASSUME_NONNULL_END
