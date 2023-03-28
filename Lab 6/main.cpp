#include "Circuit.h"
#include "Volvo.h"
#include "BMW.h"
#include "Seat.h"
#include "Fiat.h"
#include <iostream>

int main() {
    Circuit c;
    c.SetLength(100); // set the length of the circuit to 100 km
    c.SetWeather(Weather::Rain);
    c.AddCar(new Volvo());
    c.AddCar(new BMW());
    c.AddCar(new Seat());
    c.AddCar(new Fiat());
    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();
    return 0;
}

