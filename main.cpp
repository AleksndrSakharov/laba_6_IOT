#include "Sensors.h"

int main(){
    Pressure_sensor* pres = new Pressure_sensor;
    Sensors store = Sensors();
    for (int i = 0; i < 100; i++){
        store.appendSensor(pres);
    }

    for (int i = 0; i < 100; i++){
        store.printSensor(i);
    }
    return 0;
}