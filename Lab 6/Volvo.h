#pragma once
#ifndef VOLVO_H
#define VOLVO_H

#include "Car.h"

class Volvo : public Car {
public:
	double getFuelCapacity() const override;
	double getFuelConsumption() const override;
	double getAverageSpeed(Weather weather) const override;
};

#endif
