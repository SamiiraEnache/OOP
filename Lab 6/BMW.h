#pragma once
#ifndef BMW_H
#define BMW_H

#include "Car.h"

class BMW : public Car {
public:
	double getFuelCapacity() const override;
	double getFuelConsumption() const override;
	double getAverageSpeed(Weather weather) const override;
};

#endif
