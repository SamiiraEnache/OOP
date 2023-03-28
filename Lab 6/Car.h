#pragma once
#ifndef CAR_H
#define CAR_H

#include "Weather.h"

class Car {
public:
	virtual double getFuelCapacity() const = 0;
	virtual double getFuelConsumption() const = 0;
	virtual double getAverageSpeed(Weather weather) const = 0;
	
};

#endif
