#include "checker.h"

using namespace std;

int VitalsMonitor::vitalsOk(float temperature, float pulseRate, float spo2) {
  return (VitalsMonitor::bodyTemperatureOk(temperature) || VitalsMonitor::pulseRateOk(pulseRate) || VitalsMonitor::oxygenSaturationOk(spo2));
}

int VitalsMonitor::bodyTemperatureOk(float temperature) {
  if(temperature > 102 || temperature < 95) {
      cout << "Temperature critical!\n";
      for (int i = 0; i < 6; i++)
      {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
      }
      return 0;
    }
    return 1;
}

int VitalsMonitor::pulseRateOk(float pulseRate) {
  if(pulseRate < 60 || pulseRate > 100) {
      cout << "Pulse Rate is out of range!\n";
      for (int i = 0; i < 6; i++)
      {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
      }
      return 0;
    }
    return 1;
}

int VitalsMonitor::oxygenSaturationOk(float spo2) {
  if(spo2 < 90) {
      cout << "Oxygen Saturation out of range!\n";
      for (int i = 0; i < 6; i++)
      {
        cout << "\r* " << flush;
        sleep(1);
        cout << "\r *" << flush;
        sleep(1);
      }
      return 0;
    }
    return 1;
}