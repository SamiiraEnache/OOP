#pragma once
#ifndef CIRCUIT_H
#define CIRCUIT_H

#include "Car.h"
#include <vector>

class Circuit {
public:
	void SetLength(double length);
	void SetWeather(Weather weather);
	void AddCar(Car* car);
	void Race();
	void ShowFinalRanks() const;
	void ShowWhoDidNotFinish() const;
	double getLength();
private:
	double length_;
	Weather weather_;
	std::vector<Car*> cars_;
};

#endif 