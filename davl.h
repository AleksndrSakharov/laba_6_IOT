#pragma once
#include "Base_sensor.h"
class Pressure_sensor: public Base_sensor{
private:
    static const int _max = 900;
    static const int _min = 600;
public:
     Pressure_sensor(): Base_sensor(_min, _max){
        srand(time(NULL));
        // makeGen(_min, _max);
     }
    std::string getClassName(){return "Pressure_sensor";};
};