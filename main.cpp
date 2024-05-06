#include "Sensors.h"

int main(){
    
    std::cout << "Hello world" << std::endl;
    Temp_sensor temp;
    Humidity_sensor b;
    co2 perc;
    Pressure_sensor merc;
    std :: cout << b() << std :: endl;
    std::cout << temp() << std:: endl;
    std::cout << perc() << std:: endl;
    std::cout << merc() << std:: endl;
    return 0;
}