#include "checker.h"

using namespace std;

int VitalsMonitor::vitalsOk(float temperature, float pulseRate, float spo2) {
    return (VitalsMonitor::bodyTemperatureOk(temperature) &&
            VitalsMonitor::pulseRateOk(pulseRate)         &&
            VitalsMonitor::oxygenSaturationOk(spo2));
}

void VitalsMonitor::displayWarningMessage(const std::string message) {
    std::cout << message << std::endl;
    for (int i = 0; i < 6; i++) {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
    }
}

int VitalsMonitor::bodyTemperatureOk(float temperature) {
    int status             = 1;
    const float lowerLimit = 95;
    const float upperLimit = 102;
    if(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, temperature)) {
        VitalsMonitor::displayWarningMessage("Temperature critical!");
        status = 0;
    }
    return status;
}

int VitalsMonitor::pulseRateOk(float pulseRate) {
    int status             = 1;
    const float lowerLimit = 60;
    const float upperLimit = 100;
    if(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, pulseRate)) {
        VitalsMonitor::displayWarningMessage("Pulse Rate is out of range!");
        status = 0;
    }
    return status;
}

int VitalsMonitor::oxygenSaturationOk(float spo2) {
    int status             = 1;
    const float lowerLimit = 0;
    const float upperLimit = 90;
    if(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, spo2)) {
        VitalsMonitor::displayWarningMessage("Oxygen Saturation out of range!");
        status = 0;
    }
    return status;
}

template <typename DataType> bool VitalsMonitor::isDataWithinRange(const DataType lowerLimit, const DataType upperLimit, const DataType currentValue) {
    return (( lowerLimit > currentValue) && (currentValue < upperLimit));
}