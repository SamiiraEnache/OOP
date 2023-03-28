#include "Seat.h"

double Seat::getFuelCapacity() const {
	return 50.0;
}

double Seat::getFuelConsumption() const {
	return 5.5;
}

double Seat::getAverageSpeed(Weather weather) const {
	switch (weather) {
	case Weather::Rain:
		return 75.0;
	case Weather::Sunny:
		return 95.0;
	case Weather::Snow:
		return 55.0;
	default:
		return 0.0;
	}
}