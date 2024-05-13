#include "Sensors.h"
#include <chrono>
#include <thread>

int main(){
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    srand(time(NULL));
    Pressure_sensor* pres = new Pressure_sensor;
    Humidity_sensor* hum = new Humidity_sensor;
    Wide* wide = new Wide;
    co2* co2_sens = new co2;
    Temp_sensor* temp = new Temp_sensor;

    int count_time = 0;
    Sensors store = Sensors();
    store.appendSensor(pres);
    store.appendSensor(hum);
    store.appendSensor(wide);
    store.appendSensor(co2_sens);
    store.appendSensor(temp);
//    while (count_time < 31){
        for (int i = 0; i < 5; i++){
            store.printSensor(i);
        }
//        sleep_for(nanoseconds(10));
//        sleep_until(system_clock::now() + seconds(1));
//        count_time++;
//    }

    delete [] pres;
    return 0;
}