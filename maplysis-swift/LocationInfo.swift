//
//  LocationInfo.swift
//  maplysis-swift
//
//  Created by Pericles Maravelakis on 02/07/2017.
//	periclesm@cloudfields.net
//	Licensed under Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
//	https://creativecommons.org/licenses/by-sa/4.0/
//

import UIKit
import CoreLocation
import MapKit

//private let sharedInstance = LocationInfo()

class LocationInfo: NSObject {
	
	static let sharedInstance = LocationInfo()
	var currentLocation: CLLocation?
	var address: String?
	
//	class var sharedInstance: LocationInfo {
//		return self.sharedInstance
//	}
	
	func ConvertTouchesToLocation(touchPoint: CGPoint, sender: MKMapView) {
		let touchCoordinate = sender.convert(touchPoint, toCoordinateFrom: sender)
		currentLocation = CLLocation.init(latitude:touchCoordinate.latitude, longitude:touchCoordinate.longitude)
	}

}