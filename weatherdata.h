#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subject.h"
#include <QList>

class WeatherData : public Subject {
private:
    QList<Observer*> *observers;
    float temperature;
    float humidity;
    float pressure;
public:
    WeatherData();
    virtual void registerObserver(Observer *o);
    virtual void removeObserver(Observer *o);
    virtual void notifyObserver();
    void setMeasurementsChanged(float t, float p, float h);
    void measurementsChanged();
};

#endif // WEATHERDATA_H
