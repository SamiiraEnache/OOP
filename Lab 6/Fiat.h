#pragma once
#ifndef FIAT_H
#define FIAT_H

#include "Car.h"

class Fiat : public Car {
public:
	double getFuelCapacity() const override;
	double getFuelConsumption() const override;
	double getAverageSpeed(Weather weather) const override;
};

#endif

