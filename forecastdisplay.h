#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "observer.h"
#include "displayelement.h"


class ForecastDisplay : public Observer, public DisplayElement {
private:
    float temperature;
    float humidity;
    float pressure;
public:
    ForecastDisplay();
    virtual void update(float t, float h, float p);
    virtual void display();
};

#endif // FORECASTDISPLAY_H
