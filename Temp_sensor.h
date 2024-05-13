#pragma once
#include "Base_sensor.h"
class Temp_sensor: public Base_sensor{
private:
    

public:
     Temp_sensor(){
         srand(time(NULL));
         makeGen(-30, 30);
     };

};

