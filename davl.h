#pragma once
#include "Base_sensor.h"
class Pressure_sensor: public Base_sensor{
private:
    int _max = 900;
    int _min = 600;
public:
    const int MIN = 600;
    const int MAX = 900;
     Pressure_sensor(){
         srand(time(NULL));
         makeGen(_min, _max);
     }

    



};