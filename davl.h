#include<algorithm>
#include<random>
#include<time.h>

class Pressure_sensor{
private:
    double _mercury;
    void Gener(){
        srand(time(NULL));
        double a = (-300 + rand() % 601) / 10.0;
        _mercury += a;
        if(_mercury > 900)
        _mercury = MAX;
        if(_mercury < 600)
        _mercury = MIN;
    }
public:
    const int MIN = 600;
    const int MAX = 900;
    Pressure_sensor(){
        _mercury = MIN + rand() % (MAX - MIN);
    }

    
    double operator()(){
        Gener();
        return _mercury;
    }


};