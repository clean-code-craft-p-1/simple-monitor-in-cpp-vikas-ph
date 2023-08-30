#include "testChecker.h"
#include "checker.h"

using namespace std;

void TestVitals() {
  assert(!VitalsMonitor::vitalsOk(99, 102, 70));
  assert(VitalsMonitor::vitalsOk(98.1, 70, 98));
}

void TestBodyTemparature() {
  assert(!VitalsMonitor::bodyTemperatureOk(99));
  assert(VitalsMonitor::bodyTemperatureOk(98.1));
}

void TestPulseRate() {
  assert(!VitalsMonitor::pulseRateOk(102));
  assert(VitalsMonitor::pulseRateOk(70));
}

void TestOxygenSaturation() {
  assert(!VitalsMonitor::oxygenSaturationOk(70));
  assert(VitalsMonitor::oxygenSaturationOk(98));
}

int main() {
  TestVitalsMonitor::TestVitals();
  TestVitalsMonitor::TestBodyTemparature();
  TestVitalsMonitor::TestPulseRate();
  TestVitalsMonitor::TestOxygenSaturation();
  cout << "Done\n";
}