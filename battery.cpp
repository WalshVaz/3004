//Matthew Spiller
//Last Edit: March 26, 2020

#include "battery.h"

Battery::Battery()
{
    batteryLevel = 100; //represents battery percentage
    powerLevel = 0; //by default powerLevel starts at 0.
    rateOfBatteryLoss = 240; //seconds per battery loss of 1% (default 240 seconds or 4 minutes per 1% loss [will change as power level increases])
}

int Battery::getBatteryLevel() //returns the current battery level percentage (getter)
{
    return this->batteryLevel;
}

//reduceBatteryLevel() likely called from electrode class as the electrode is responsible for running the timer when skin contact is made
void Battery::reduceBatteryLevel() //reduce the battery level by 1% (should get run by after some x seconds of treatment)
{
    if(batteryLevel > 1) //if battery level is greater than 1%
    {
        batteryLevel--; //then reduce the battery level by 1%
    }
    else
    {
        batteryLevel = 0; //the battery level must equal 0
        stopTreatment(); //since the battery is dead, the treatment must stop
    }
}

void Battery::startTreatment()
{
    powerLevel = 1; //start treatment on lowest active power level
}

void Battery::stopTreatment()
{
    powerLevel = 0; //stop treatment
}

void Battery::increaseBatteryUsage()
{
    if(powerLevel <= 99) //if powerLevel is less than the upper bound of 100
    {
        powerLevel++; //then increase power level by 1
        rateOfBatteryLoss = rateOfBatteryLoss - 2; //for every increase in power level by 1, the rate at which the battery loses 1% becomes 2 seconds quicker
    }
}

void Battery::decreaseBatteryUsage()
{
    if(powerLevel >= 1) //if powerLevel is greater than the lower bound of 0
    {
        powerLevel--; //then decrease power level by 1
        rateOfBatteryLoss = rateOfBatteryLoss + 2; //for every decrease in power level by 1, the rate at which the battery loses 1% becomes 2 seconds slower
    }
}

void Battery::setRateOfBatteryLoss(int s) //function to directly change the rate of battery loss (unsure if this will be used or not)
{
    rateOfBatteryLoss = s;
}
