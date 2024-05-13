cmake_minimum_required(VERSION 3.8)
project(IOT LANGUAGES CXX)
add_executable(main main.cpp
        co2_conc_sens.h
        davl.h
        Humidity_sensor.h
        Temp_sensor.h
        wide.h)