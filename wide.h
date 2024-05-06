#pragma once
#include "Sensors.h"
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

class Wide{
private:
    double _speed;
    Direction _direction;
    void gen(){
        double w = -10 +rand()%21;
        _speed += w/10;
        if (_speed<0) {
            _speed = 0;
        }
        if (_speed>30){
            _speed = 30;
        }
        _direction = static_cast<Direction> (rand()%8);
    }


 public:
    Wide(){
        _speed =  rand()%30;
        _direction =static_cast<Direction> ( rand());
    }
    double GetSpeed(){
        gen();
        return _speed;

    }
    Direction GetDirection(){
        gen();
        return _direction;

    }
    
};

