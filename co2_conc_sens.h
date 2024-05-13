#pragma once
#include "Base_sensor.h"
class co2: public Base_sensor
{
private:
    int _max = 100;
    int _min = 0;
public:
     co2(){
         srand(time(NULL));
         makeGen(_min, _max);

     };
    // double operator()(){
    //     Gener();
    //     return _percent;
    // };

};

