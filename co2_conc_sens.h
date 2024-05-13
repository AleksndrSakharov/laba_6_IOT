#pragma once
#include "Base_sensor.h"
class co2: public Base_sensor
{
private:

public:
     co2(){
         srand(time(NULL));
         makeGen(0, 100);

     };
    // double operator()(){
    //     Gener();
    //     return _percent;
    // };

};

