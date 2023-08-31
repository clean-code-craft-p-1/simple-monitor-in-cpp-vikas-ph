#include "checker.h"

using namespace std;

int VitalsMonitor::vitalsOk(float temperature, float pulseRate, float spo2) {
    int status = VitalsMonitor::bodyTemperatureOk(temperature);
    if (0 != status) {
        status = VitalsMonitor::pulseRateOk(pulseRate);
        if(0 != status) {
            status = VitalsMonitor::oxygenSaturationOk(spo2);
        }
    }
    return status;
}

int VitalsMonitor::bodyTemperatureOk(float temperature) {
    int status = 1;
    if(VitalsMonitor::isBodyTemperatureNotOk(temperature)) {
      cout << "Temperature critical!\n";
      for (int i = 0; i < 6; i++)
      {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
      }
      status = 0;
    }
    return status;
}

int VitalsMonitor::pulseRateOk(float pulseRate) {
    int status = 1;
    if(VitalsMonitor::isPulseRateNotOk(pulseRate)) {
      cout << "Pulse Rate is out of range!\n";
      for (int i = 0; i < 6; i++)
      {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
      }
      status = 0;
    }
    return status;
}

int VitalsMonitor::oxygenSaturationOk(float spo2) {
    int status = 1;
    if(spo2 < 90) {
      cout << "Oxygen Saturation out of range!\n";
      for (int i = 0; i < 6; i++)
      {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
      }
      status = 0;
    }
    return status;
}

bool VitalsMonitor::isBodyTemperatureNotOk(float temperature) {
    return (temperature > 102 || temperature < 95)
}

bool VitalsMonitor::isPulseRateNotOk(float pulseRate) {
    return (pulseRate < 60 || pulseRate > 100);
}