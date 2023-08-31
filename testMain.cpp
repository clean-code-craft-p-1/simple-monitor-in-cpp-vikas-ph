#include "testChecker.h"

using namespace std;

int main() {
  TestVitalsMonitor::TestVitals();
  TestVitalsMonitor::TestBodyTemparature();
  TestVitalsMonitor::TestPulseRate();
  TestVitalsMonitor::TestOxygenSaturation();
  cout << "Done\n";
}