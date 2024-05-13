#include "Sensors.h"

int main(){
    srand(time(NULL));
    Pressure_sensor* pres = new Pressure_sensor;
    Humidity_sensor* hum = new Humidity_sensor;
    Wide* wide = new Wide;
    
    Sensors store = Sensors();
    store.appendSensor(pres);

    for (int i = 0; i < 5; i++){
        store.printSensor(i);
    }
    delete [] pres;
    return 0;
}