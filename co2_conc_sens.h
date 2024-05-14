#pragma once
#include "Base_sensor.h"
class co2: public Base_sensor
{
private:
    static const int _max = 100;
    static const int _min = 0;
public:
     co2(): Base_sensor(_min, _max){

     };
    std::string getClassName(){return "co2_sensor";};
    // double operator()(){
    //     Gener();
    //     return _percent;
    // };

};

