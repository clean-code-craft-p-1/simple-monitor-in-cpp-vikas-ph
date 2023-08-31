#ifndef CHECKER_H
#define CHECKER_H

#include <iostream>
#include <assert.h>
#include <unistd.h>

namespace VitalsMonitor {

int vitalsOk(float temperature, float pulseRate, float spo2);
int bodyTemperatureOrPulseRateOk(float temperature, float pulseRate);
int oxygenSaturationOk(float spo2);

}

#endif //!CHECKER_H