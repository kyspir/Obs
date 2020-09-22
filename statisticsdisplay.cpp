#include "statisticsdisplay.h"

StatisticsDisplay::StatisticsDisplay()
{

}

void StatisticsDisplay::update(float t, float h, float p) {
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
}

void StatisticsDisplay::display() {
    cout << "Current conditions:" << endl << "\t"
         << temperature << "°C" << endl
         << "%" << humidity << endl
         << pressure << " mm Hg" << endl;
}
