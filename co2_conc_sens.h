#pragma once
#include<iostream>
#include<algorithm>
#include<random>
#include<time.h>

class co2
{
private:
double _percent;
    void Gener(){   
        srand(time(NULL));
        double a = (-100 + rand()%201)/100.0;
       _percent+=a;
       _percent = std::max(0.0,_percent); 
        _percent = std::min(100.0,_percent);
    };
public:
    co2(){
        srand(time(NULL));
        _percent = rand()%100;

    };
    double operator()(){
        Gener();
        return _percent;
    };

};

