//
//  WTWeathersDataModel.h
//  WeatherTest
//
//  Created by Andrea Sanchez Roman on 27/02/20.
//  Copyright © 2020 Melexia. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WTWeatherDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WTWeathersDataModel : NSObject

@property (nonatomic) int count;
@property (nonatomic) NSArray<WTWeatherDataModel*> *weathers;

+ (id)initWithDictionary:(NSDictionary*)dictionary;
@end

NS_ASSUME_NONNULL_END
