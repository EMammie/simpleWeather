//
//  WXClient.h
//  Pods
//
//  Created by Eugene Mammie on 3/29/14.
//
//

#import <Foundation/Foundation.h>
@import CoreLocation;
@import Foundation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

@interface WXClient : NSObject


- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;
@end
