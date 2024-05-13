#pragma once
#include "Base_sensor.h"
class Temp_sensor: public Base_sensor{
private:
    int _max = 30;
    int _min = -30;

public:
     Temp_sensor(){
         srand(time(NULL));
         makeGen(_min, _max);
     };

};

