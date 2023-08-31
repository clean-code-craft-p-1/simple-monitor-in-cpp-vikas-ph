#include "testChecker.h"

int main() {
  TestVitalsMonitor::TestVitals();
  TestVitalsMonitor::TestBodyTemparatureOrPulseRate();
  TestVitalsMonitor::TestOxygenSaturation();
  cout << "Done\n";
}