#include "testChecker.h"
#include "checker.h"

using namespace VitalsChecker;
using namespace TestVitalChecker;

void TestVitals() {
  assert(!vitalsOk(99, 102, 70));
  assert(vitalsOk(98.1, 70, 98));
}

void TestBodyTemparature() {
  assert(!temperatureOk(99));
  assert(temperatureOk(98.1));
}

void TestPulseRate() {
  assert(!pulseRateOk(102));
  assert(pulseRateOk(70));
}

void TestOxygenSaturation() {
  assert(!oxygenSaturationOk(70));
  assert(oxygenSaturationOk(98));
}

int main() {
  TestVitals();
  TestBodyTemparature();
  TestPulseRate();
  TestOxygenSaturation();
  cout << "Done\n";
}