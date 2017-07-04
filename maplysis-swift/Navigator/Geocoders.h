//
//  Geocoders.h
//  maplysis
//
//  Created by Pericles Maravelakis on 15/05/2017.
//	periclesm@cloudfields.net
//	Licensed under Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
//	https://creativecommons.org/licenses/by-sa/4.0/
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface Geocoders : NSObject

#pragma mark -- Reverse Geocoding
+ (void)AppleReverseGeocoderWithLocationCoordinates:(CLLocation*)location completion:(void (^)(NSString *fAddress))completion;
+ (void)GoogleReverseGeocoderWithLocationCoordinates:(CLLocation*)location completion:(void (^)(NSString *fAddress))completion;

#pragma mark -- Geocoding
+ (void)AppleGeocoderWithAddress:(NSString*)address completion:(void (^)(CLLocation *clocation))completion;
+ (void)GoogleGeocoderWithAddress:(NSString*)address completion:(void (^)(CLLocation *clocation))completion;

@end

typedef NS_ENUM(NSUInteger, Geocoder) {
	GeocoderApple = 0,
	GeocoderGoogle
};
