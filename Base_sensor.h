#pragma once
#include<random>
#include<iostream>
#include<time.h>
#include <stdlib.h>
#include<algorithm>



class Base_sensor
{
private:
    double _value;
    virtual void Gener(int min1, int max1){
        srand(time(NULL));
        int t = -min1*10 + rand() % (max1*10 + 1);
        _value = t / 100.0;
        _value = std::max(static_cast<double>(min1), _value);
        _value = std::min(static_cast<double>(max1), _value);

    };
public:
    Base_sensor(){
        _value = 10;
    };
    Base_sensor(double value) : _value(value){

    }
};
