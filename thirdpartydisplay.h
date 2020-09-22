#ifndef THIRDPARTYDISPLAY_H
#define THIRDPARTYDISPLAY_H

#include "observer.h"
#include "displayelement.h"


class ThirdPartyDisplay : public Observer, public DisplayElement {
private:
    float temperature;
    float humidity;
    float pressure;
public:
    ThirdPartyDisplay();
    virtual void update(float t, float h, float p);
    virtual void display();
};

#endif // THIRDPARTYDISPLAY_H
