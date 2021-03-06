//
//  APIClient.h
//  WeatherTest
//
//  Created by Andrea Sanchez Roman on 26/02/20.
//  Copyright © 2020 Melexia. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WTWeatherDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface APIClient : NSObject

+(id)shared;

- (void)fetchWeatherNearToLatitude:(double)latitude
                         longitude:(double)longitude
                           success:(void (^)(NSArray<WTWeatherDataModel*>* weathers))success
                           failure:(void (^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END
