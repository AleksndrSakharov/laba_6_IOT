#pragma once
#include "co2_conc_sens.h"
#include "Temp_sensor.h"
#include "wide.h"
#include "davl.h"
#include "Humidity_sensor.h"


class Sensors
{
private:
    Base_sensor** _sensors;
    size_t _count = 0;
public:
    Sensors(){
        _sensors = new Base_sensor*[5];
    };
    void appendSensor(Base_sensor* new_sensor){
        if (_count >= 5) return;
        _sensors[_count++] = new_sensor;
    }
    void printSensor(size_t i){
        std::cout << _sensors[i]->getValue() << std::endl;
    }
    ~Sensors();
};

Sensors::~Sensors()
{
    delete [] _sensors;
}
