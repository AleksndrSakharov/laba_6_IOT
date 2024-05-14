#pragma once
#include "Base_sensor.h"
class Humidity_sensor : public Base_sensor{
private:
    static const int _max = 98;
    static const int _min = 0;
public:
     Humidity_sensor(): Base_sensor(_min,_max){

        //  makeGen(_min, _max);
     }
    std::string getClassName(){return "Humidity_sensor";};
};