#pragma once
#include "Base_sensor.h"
class Humidity_sensor : public Base_sensor{
private:
    int _max = 100;
    int _min = 0;
public:
     Humidity_sensor(){
         srand(time(NULL));
         makeGen(_min, _max);
     }
    
};