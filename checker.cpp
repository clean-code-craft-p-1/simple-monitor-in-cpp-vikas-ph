#include "checker.h"

using namespace std;
using namespace VitalsChecker;

int vitalsOk(float temperature, float pulseRate, float spo2) {
  if(0 == bodyTemperatureOk(temperature)) {
    return 0;
  }
  else if (0 == pulseRateOk(pulseRate)) {
    retrun 0;
  }
  else if (0 == oxygenSaturationOk(spo2)) {
    return 0;
  }

  return 1;
}

int bodyTemperatureOk(float temperature) {
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

int pulseRateOk(float pulseRate) {
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

int oxygenSaturationOk(float spo2) {
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