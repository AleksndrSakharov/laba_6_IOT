#pragma once
#include<random>
#include<iostream>
#include<time.h>
#include <stdlib.h>
#include<algorithm>



class Base_sensor
{
protected:
    double _value;
private:
    virtual void Gener(int _min, int _max){
        srand(time(NULL));
        int t = _min*10 + (rand() % (_max*10 - _min*10 + 10) );
        _value = t / 10.0;
        _value = std::max(static_cast<double>(_min), _value);
        _value = std::min(static_cast<double>(_max), _value);

    };
public:
    Base_sensor() = delete;
    Base_sensor(double value) : _value(value){

    }
    Base_sensor(int minim, int maxim){
        srand(time(NULL));
        Gener(minim, maxim);
    }
    inline double getValue(){return _value;};
};

