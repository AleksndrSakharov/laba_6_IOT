#include<iostream>
#include<random>
#include<time.h>

class Temp_sensor{
private:
    double _temp;

    void Gener(){
        srand(time(NULL));
        int t = -5 + rand() % 11;
        _temp += t / 10.0;
    }

public:
    Temp_sensor(){
        _temp = rand()%31;
    };

    double operator()(){
        Gener();
        return _temp;
    }
};

