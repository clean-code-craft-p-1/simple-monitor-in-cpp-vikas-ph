#ifndef CHECKER_H
#define CHECKER_H

#include <iostream>
#include <assert.h>
#include <unistd.h>

namespace VitalsMonitor {
    int  vitalsOk(float temperature, float pulseRate, float spo2);
    void displayWarningMessage(const std::string message);
    int  bodyTemperatureOk(float temperature);
    int  pulseRateOk(float pulseRate);
    int  oxygenSaturationOk(float spo2);

    template DataType;
    bool isDataWithinRange(const DataType lowerLimit, const DataType upperLimit, const DataType currentValue)
}

#endif //!CHECKER_H