#pragma once

#ifndef _TIME_HPP
#define _TIME_HPP

#include <iostream>

class Time
{

    friend std::ostream& operator<<(std::ostream& os, const Time& T_Object);
    private :
    int T_Hour;
    int T_Minute;
    int T_Second;

    std::string T_MeridiemTime;
    std::string T_HourUnit;
    std::string T_MinuteUnit;
    std::string T_SecondUnit;

    int Num_For_Constructor;

    public :

    Time(
        int _hour,
        int _minute);

    Time(
        int _hour,
        int _minute,
        std::string _meridiem_time);

    Time(
        int _hour,
        int _minute,
        int _seconds);

    Time(
        int _hour,
        int _minute,
        int _seconds,
        std::string _meridiem_time);

    Time(
        int _hour,
        std::string hour_unit,
        int _minute,
        std::string minute_unit);
};

#endif /* Time.hpp */