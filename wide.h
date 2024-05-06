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
    double _speed;
    Direction _direction;
    void Gener(){
        srand(time(NULL));
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
    // Wide(){
    //     _speed =  rand()%30;
    //     _direction =static_cast<Direction> ( rand());
    // }
    double GetSpeed(){
        Gener();
        return _speed;

    }
    Direction GetDirection(){
        Gener();
        return _direction;

    }
    
};

