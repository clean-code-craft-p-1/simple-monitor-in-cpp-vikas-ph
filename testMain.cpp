#include "testChecker.h"

using namespace std;

int main() {
  TestVitalsMonitor::TestVitals();
  TestVitalsMonitor::TestBodyTemparatureOrPulseRate();
  TestVitalsMonitor::TestOxygenSaturation();
  cout << "Done\n";
}