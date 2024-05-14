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
        double w = rand()%300;
        _value+= w/50.0;
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
    void changeValueBase(){
        srand(time(NULL));
        int znak = rand() % 2;
        if (znak == 0) znak = -1;
        double w = (rand()%31) * znak;
        _value += w/10.0;
        if (_value<_min) {
            _value = _min;
        }
        if (_value>_max){
            _value = _max;
        }
        _direction = static_cast<Direction> (rand()%8);
    }

    std::string getClassName(){
        switch (_direction) {
            case Direction::North: return "Wide_sensor(Direction: North)";
            case Direction::East: return "Wide_sensor(Direction: East)";
            case Direction::West: return "Wide_sensor(Direction: West)";
            case Direction::South: return "Wide_sensor(Direction: South)";
            case Direction::Northeast: return "Wide_sensor(Direction: Northeast)";
            case Direction::Northwest: return "Wide_sensor(Direction: Northwest)";
            case Direction::Southeast: return "Wide_sensor(Direction: Southeast)";
            case Direction::Southwest: return "Wide_sensor(Direction: Southwest)";
            default: return "Wide_sensor";
        }

    };
};

