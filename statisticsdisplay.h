#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "observer.h"
#include "displayelement.h"


class StatisticsDisplay : public Observer, public DisplayElement {
private:
    float temperature;
    float humidity;
    float pressure;
public:
    StatisticsDisplay();
    virtual void update(float t, float h, float p);
    virtual void display();
};

#endif // STATISTICSDISPLAY_H
