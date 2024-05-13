#pragma once
#include "Base_sensor.h"
class Temp_sensor: public Base_sensor{
private:
    static const int _max = 30;
    static const int _min = -30;
public:
     Temp_sensor(): Base_sensor(_min,_max){
         srand(time(NULL));
        //  makeGen(_min, _max);
     };
    std::string getClassName(){return "Temp_sensor";};
};

