#include "Fiat.h"

double Fiat::getFuelCapacity() const {
	return 45.0;
}

double Fiat::getFuelConsumption() const {
	return 5.0;
}

double Fiat::getAverageSpeed(Weather weather) const {
	switch (weather) {
	case Weather::Rain:
		return 70.0;
	case Weather::Sunny:
		return 90.0;
	case Weather::Snow:
		return 50.0;
	default:
		return 0.0;
	}
}
