#pragma once
#include "Sensors.h"
class Humidity_sensor{
private:
    double _procento;
    void Gener(){
        srand(time(NULL));
        double a = (rand() % 100)/100.0;
        _procento += a;
        if (_procento > 100){
            _procento = 100;
        }
        if(_procento < 0){
            _procento = 0;
        }
    }
public:
    Humidity_sensor(){
        _procento = rand() % 101;
    }
    double operator()(){
        Gener();        
        return _procento;
    }
};