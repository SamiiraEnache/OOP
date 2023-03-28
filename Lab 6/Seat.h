#pragma once
#ifndef SEAT_H
#define SEAT_H

#include "Car.h"

class Seat : public Car {
public:
	double getFuelCapacity() const override;
	double getFuelConsumption() const override;
	double getAverageSpeed(Weather weather) const override;
};

#endif
