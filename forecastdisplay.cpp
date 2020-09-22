#include "forecastdisplay.h"

ForecastDisplay::ForecastDisplay()
{

}

void ForecastDisplay::update(float t, float h, float p) {
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
}

void ForecastDisplay::display() {
    cout << "Current conditions:" << endl << "\t"
         << temperature << "°C" << endl
         << "%" << humidity << endl
         << pressure << " mm Hg" << endl;
}
