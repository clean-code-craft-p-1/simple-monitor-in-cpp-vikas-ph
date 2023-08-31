#ifndef CHECKER_H
#define CHECKER_H

#include <iostream>
#include <assert.h>
#include <unistd.h>

namespace VitalsMonitor {
    int vitalsOk(float temperature, float pulseRate, float spo2);
    int bodyTemperatureOk(float temperature);
    int pulseRateOk(float pulseRate);
    int oxygenSaturationOk(float spo2);
    bool isBodyTemperatureNotOk();
    bool isPulseRateNotOk();
}

#endif //!CHECKER_H