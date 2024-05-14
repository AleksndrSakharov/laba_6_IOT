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
    int _max = 100;
    int _min = 0;
private:
    virtual void Gener(){
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
    Base_sensor(int minim, int maxim) : _min(minim), _max(maxim){
        srand(time(NULL));
        Gener();
    }
    virtual std::string getClassName(){return "Base_sensor";};
    virtual void changeValueBase(){
        srand(time(NULL));
        int znak = rand() % 2;
        if (znak == 0) znak = -1;
        int t = (_min*10 + (rand() % (_max*10 - _min*10 + 10)))* znak;
        _value += t / 200.0;
        _value = std::max(static_cast<double>(_min), _value);
        _value = std::min(static_cast<double>(_max), _value);
    };
    inline double getValue(){return _value;};
};

