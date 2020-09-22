#include "thirdpartydisplay.h"

ThirdPartyDisplay::ThirdPartyDisplay()
{

}

void ThirdPartyDisplay::update(float t, float h, float p) {
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
}

void ThirdPartyDisplay::display() {
    cout << "Current conditions:" << endl << "\t"
         << temperature << "°C" << endl
         << "%" << humidity << endl
         << pressure << " mm Hg" << endl;
}
