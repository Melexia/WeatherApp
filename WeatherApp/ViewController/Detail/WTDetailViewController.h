//
//  WTDetailViewController.h
//  WeatherTest
//
//  Created by Andrea Sanchez Roman on 27/02/20.
//  Copyright © 2020 Melexia. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WTWeatherDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WTDetailViewController : UIViewController

@property (nonatomic) WTWeatherDataModel *weatherData;

@end

NS_ASSUME_NONNULL_END
