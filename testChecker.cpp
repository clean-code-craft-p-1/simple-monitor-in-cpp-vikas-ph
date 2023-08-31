#include "testChecker.h"
#include "checker.h"

void TestVitalsMonitor::TestVitals() {
  assert(!VitalsMonitor::vitalsOk(99, 102, 70));
  assert(VitalsMonitor::vitalsOk(98.1, 70, 98));
}

void TestVitalsMonitor::TestBodyTemparature() {
  assert(!VitalsMonitor::bodyTemperatureOk(99));
  assert(VitalsMonitor::bodyTemperatureOk(98.1));
}

void TestVitalsMonitor::TestPulseRate() {
  assert(!VitalsMonitor::pulseRateOk(102));
  assert(VitalsMonitor::pulseRateOk(70));
}

void TestVitalsMonitor::TestOxygenSaturation() {
  assert(!VitalsMonitor::oxygenSaturationOk(70));
  assert(VitalsMonitor::oxygenSaturationOk(98));
}