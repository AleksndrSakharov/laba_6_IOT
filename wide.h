#pragma once
#include "Base_sensor.h"
enum Direction{
    North,
    Northwest,
    Northeast,
    East,
    Southeast,
    Southwest,
    South,
    West
};

class Wide: public Base_sensor{
private:
    static const int _max = 30;
    static const int _min = 0;
    Direction _direction;
    void Gener(){
        srand(time(NULL));
        double w = -10 +rand()%21;
        _value += w/10;
        if (_value<_min) {
            _value = _min;
        }
        if (_value>_max){
            _value = _max;
        }
        _direction = static_cast<Direction> (rand()%8);
    }


 public:
    Wide(): Base_sensor(_min, _max){
        srand(time(NULL));
        Gener();
    }
    double GetSpeed(){
        Gener();
        return _value;

    }
    Direction GetDirection(){
        Gener();
        return _direction;

    }
    
};

