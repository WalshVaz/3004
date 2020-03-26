#ifndef BATTERY_H
#define BATTERY_H
#include "timer.h"

class Battery
{
private:
    int batteryLevel;
    int powerLevel;
    int rateOfBatteryLoss;

public:
    Battery();
    int getBatteryLevel();
    void reduceBatteryLevel();
    void increaseBatteryUsage();
    void decreaseBatteryUsage();
    void startTreatment();
    void stopTreatment();
    void setRateOfBatteryLoss(int s);
};

#endif // BATTERY_H
