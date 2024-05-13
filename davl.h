#pragma once
#include "Base_sensor.h"
class Pressure_sensor: public Base_sensor{
private:
public:
    const int MIN = 600;
    const int MAX = 900;
     Pressure_sensor(){
         srand(time(NULL));
         makeGen(MIN, MAX);
     }

    



};