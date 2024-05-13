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
    Direction _direction;
    void Gener(){
        srand(time(NULL));
        double w = -10 +rand()%21;
        _value += w/10;
        if (_value<0) {
            _value = 0;
        }
        if (_value>30){
            _value = 30;
        }
        _direction = static_cast<Direction> (rand()%8);
    }


 public:
    // Wide(){
    //     _value =  rand()%30;
    //     _direction =static_cast<Direction> ( rand());
    // }
    double GetSpeed(){
        Gener();
        return _value;

    }
    Direction GetDirection(){
        Gener();
        return _direction;

    }
    
};

