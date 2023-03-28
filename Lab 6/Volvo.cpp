#include "Volvo.h"

double Volvo::getFuelCapacity() const {
	return 60.0;
}

double Volvo::getFuelConsumption() const {
	return 6.0;
}

double Volvo::getAverageSpeed(Weather weather) const {
	switch (weather) {
	case Weather::Rain:
		return 80.0;
	case Weather::Sunny:
		return 100.0;
	case Weather::Snow:
		return 60.0;
	default:
		return 0.0;
	}
}