#include "testChecker.h"
#include "checker.h"

using namespace std;

void TestVitals() {
  assert(!VitalsChecker::vitalsOk(99, 102, 70));
  assert(VitalsChecker::vitalsOk(98.1, 70, 98));
}

void TestBodyTemparature() {
  assert(!VitalsChecker::temperatureOk(99));
  assert(VitalsChecker::temperatureOk(98.1));
}

void TestPulseRate() {
  assert(!VitalsChecker::pulseRateOk(102));
  assert(VitalsChecker::pulseRateOk(70));
}

void TestOxygenSaturation() {
  assert(!VitalsChecker::oxygenSaturationOk(70));
  assert(VitalsChecker::oxygenSaturationOk(98));
}

int main() {
  TestVitalChecker::TestVitals();
  TestVitalChecker::TestBodyTemparature();
  TestVitalChecker::TestPulseRate();
  TestVitalChecker::TestOxygenSaturation();
  cout << "Done\n";
}