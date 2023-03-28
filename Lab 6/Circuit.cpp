#include "Circuit.h"
#include <algorithm>
#include <iostream>

void Circuit::SetLength(double length) {
	length_ = length;
}

void Circuit::SetWeather(Weather weather) {
	weather_ = weather;
}

void Circuit::AddCar(Car* car) {
	cars_.push_back(car);
}
void Circuit::Race() {
	std::vector<std::pair<double, Car*>> finish_times;
	for (Car* car : cars_) {
		double fuel_remaining = car->getFuelCapacity();
		double time = 0.0;
		bool did_not_finish = false;
		while (length_ > 0.0 && !did_not_finish) {
			double distance = std::min(car->getAverageSpeed(weather_), length_);
			length_ -= distance;
			fuel_remaining -= car->getFuelConsumption() * distance / 100.0;
			if (fuel_remaining < 0.0) {
				did_not_finish = true;
			}
			else {
				time += distance / car->getAverageSpeed(weather_);
			}
		}
		if (!did_not_finish && time > 0.0) { // check that time is positive
			finish_times.emplace_back(time, car);
		}
	}
	std::sort(finish_times.begin(), finish_times.end());
	for (const auto& finish_time : finish_times) {
		std::cout << finish_time.second << " finished in " << finish_time.first << " seconds.\n";
	}
}


void Circuit::ShowFinalRanks() const {
	// already printed in Race() function
}

void Circuit::ShowWhoDidNotFinish() const {
	for (Car* car : cars_) {
		double fuel_remaining = car->getFuelCapacity();
		bool did_not_finish = false;
		double length_copy = length_; // make a copy of the length_ member variable
		while (length_copy > 0.0 && !did_not_finish) {
			double distance = std::min(car->getAverageSpeed(weather_), length_copy);
			length_copy -= distance;
			fuel_remaining -= car->getFuelConsumption() * distance / 100.0;
			if (fuel_remaining < 0.0) {
				did_not_finish = true;
			}
		}
		if (did_not_finish) {
			std::cout << car << " did not finish.\n";
		}
	}
}

double Circuit::getLength() {
	return length_;
}
