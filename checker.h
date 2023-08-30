#ifndef CHECKER_H
#define CHECKER_H

#include <iostream>
#include <assert.h>
#include <unistd.h>

namespace VitalsChecker {

int vitalsOk(float temperature, float pulseRate, float spo2);
int bodyTemperatureOk(float temperature);
int pulseRateOk(float pulseRate);
int oxygenSaturationOk(float spo2);

}

#endif !CHECKER_H