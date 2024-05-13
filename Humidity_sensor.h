#pragma once
#include "Base_sensor.h"
class Humidity_sensor : public Base_sensor{
private:
public:
     Humidity_sensor(){
         srand(time(NULL));
         makeGen(0, 100);
     }
    
};