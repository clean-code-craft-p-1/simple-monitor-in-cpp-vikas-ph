#include "testChecker.h"
#include "checker.h"

void TestVitalsMonitor::TestVitals() {
    assert(!VitalsMonitor::vitalsOk(99,  102, 70));
    assert(!VitalsMonitor::vitalsOk(98.1, 70, 98));
    assert( VitalsMonitor::vitalsOk(98.1, 70, 88));
}

void TestVitalsMonitor::TestBodyTemparature() {
    assert(!VitalsMonitor::bodyTemperatureOk(102));
    assert( VitalsMonitor::bodyTemperatureOk(98.1));
}

void TestVitalsMonitor::TestPulseRate() {
    assert(!VitalsMonitor::pulseRateOk(102));
    assert( VitalsMonitor::pulseRateOk(70));
}

void TestVitalsMonitor::TestOxygenSaturation() {
    assert(!VitalsMonitor::oxygenSaturationOk(70));
    assert( VitalsMonitor::oxygenSaturationOk(98));
}

void TestVitalsMonitor::TestDataRange() {
    // Within range
    const float lowerLimit = 50;
    const float upperLimit = 100;
    float testValue        = 56;
    assert(VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, testValue));

    // upper limit
    testValue  = 100;
    assert(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, testValue));

    // lower limit
    testValue  = 50;
    assert(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, testValue));

    // Excceed range
    testValue  = 102;
    assert(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, testValue));

    // Below range
    testValue  = 44;
    assert(!VitalsMonitor::isDataWithinRange(lowerLimit, upperLimit, testValue));
}