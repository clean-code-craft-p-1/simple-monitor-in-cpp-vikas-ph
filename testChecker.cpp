#include "testChecker.h"
#include "checker.h"

void TestVitalsMonitor::TestVitals() {
  assert(!VitalsMonitor::vitalsOk(99, 102, 70));
  assert(VitalsMonitor::vitalsOk(98.1, 70, 98));
}

void TestVitalsMonitor::TestBodyTemparatureOrPulseRate() {
  assert(!VitalsMonitor::bodyTemperatureOrPulseRateOk(99, 102));
  assert(VitalsMonitor::bodyTemperatureOrPulseRateOk(98.1, 70));
}

void TestVitalsMonitor::TestOxygenSaturation() {
  assert(!VitalsMonitor::oxygenSaturationOk(70));
  assert(VitalsMonitor::oxygenSaturationOk(98));
}