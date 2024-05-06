#pragma once
#include<random>
#include<iostream>
#include<time.h>
#include<algorithm>
#include "wide.h"
#include "co2_conc_sens.h"
#include "Temp_sensor.h"
#include "Humidity_sensor.h"
#include "davl.h"


class Sensors
{
private:
    Temp_sensor** _t_sensors;
    co2** _co2_sensors;
    Pressure_sensor** _p_sensors;
    Wide** _w_sensors;
    Humidity_sensor** _h_sensors;
    size_t _t_size;
    size_t _co2_size;
    size_t _p_size;
    size_t _w_size;
    size_t _h_size;
    size_t _t_count;
    size_t _co2_count;
    size_t _p_count;
    size_t _w_count;
    size_t _h_count;
public:
    Sensors(){
        _t_size = 10;
        _co2_size = 10;
        _p_size = 10;
        _w_size = 10;
        _h_size = 10;
        _t_count = 0;
        _co2_count = 0;
        _p_count = 0;
        _w_count = 0;
        _h_count = 0;
        _t_sensors = new Temp_sensor*[_t_size];
        _co2_sensors = new co2*[_co2_size];
        _p_sensors = new Pressure_sensor*[_p_size];
        _w_sensors = new Wide*[_w_size];
        _h_sensors = new Humidity_sensor*[_h_size];
    };

    void AppendTSensors(Temp_sensor* tmp){
        _t_sensors[_t_count] = tmp;
        _t_count++;
    }

    void AppendCO2Sensors(co2* tmp){
        _co2_sensors[_co2_count] = tmp;
        _co2_count++;
    }

    void AppendPSensors(Pressure_sensor* tmp){
        _p_sensors[_p_count] = tmp;
        _p_count++;
    }

    void AppendHSensors(Humidity_sensor* tmp){
        _h_sensors[_h_count] = tmp;
        _h_count++;
    }

    void AppendWSensors(Wide* tmp){
        _w_sensors[_w_count] = tmp;
        _w_count++;
    }

    ~Sensors(){
        for (int i = 0; i < _t_size; i++){
            delete[] _t_sensors[i];
        }
        for (int i = 0; i < _co2_size; i++){
            delete[] _co2_sensors[i];
        }
        for (int i = 0; i < _w_size; i++){
            delete[] _w_sensors[i];
        }
        for (int i = 0; i < _h_size; i++){
            delete[] _h_sensors[i];
        }
        for (int i = 0; i < _p_size; i++){
            delete[] _p_sensors[i];
        }
        delete [] _t_sensors;
        delete [] _co2_sensors;
        delete [] _p_sensors;
        delete [] _w_sensors;
        delete [] _h_sensors;
    };
};

