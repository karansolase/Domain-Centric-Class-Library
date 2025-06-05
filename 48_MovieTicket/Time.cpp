#include "Time.hpp"

Time::Time(
    int _hour,
    int _minute)   :
    T_Hour(_hour),
    T_Minute(_minute)
{
    Num_For_Constructor = 1;
}

Time::Time(
    int _hour,
    int _minute,
    std::string _meridiem_time)   :
    T_Hour(_hour),
    T_Minute(_minute),
    T_MeridiemTime(_meridiem_time)
{
    Num_For_Constructor = 2;
}

Time::Time(
    int _hour, 
    int _minute,
    int _seconds)   :
    T_Hour(_hour),
    T_Minute(_minute),
    T_Second(_seconds)
{
    Num_For_Constructor = 3;
}

Time::Time(
    int _hour,
    int _minute,
    int _seconds,
    std::string _meridiem_time)  :

    T_Hour(_hour),
    T_Minute(_minute),
    T_Second(_seconds),
    T_MeridiemTime(_meridiem_time)
{
    Num_For_Constructor = 4;
}

Time::Time(
    int _hour,
    std::string hour_unit,
    int _minute,
    std::string minute_unit)   :

    T_Hour(_hour),
    T_Minute(_minute),
    T_HourUnit(hour_unit),
    T_MinuteUnit(minute_unit)
{
    Num_For_Constructor = 5;
}

std::ostream& operator<<(std::ostream& os, const Time& T_Object)
{
    if(T_Object.Num_For_Constructor == 1)
    {
        os 
        << T_Object.T_Hour << ":"
        << T_Object.T_Minute;
    }
    else if(T_Object.Num_For_Constructor == 2)
    {
        os 
        << T_Object.T_Hour << ":"
        << T_Object.T_Minute << " "
        << T_Object.T_MeridiemTime;
    }
    else if(T_Object.Num_For_Constructor == 3)
    {
        os 
        << T_Object.T_Hour << ":"
        << T_Object.T_Minute << ":"
        << T_Object.T_Second;
    }
    else if(T_Object.Num_For_Constructor == 4)
    {
        os
        << T_Object.T_Hour << ":"
        << T_Object.T_Minute << ":"
        << T_Object.T_Second << " "
        << T_Object.T_MeridiemTime;
    }
    else if(T_Object.Num_For_Constructor == 5)
    {
        os 
        << T_Object.T_Hour 
        << T_Object.T_HourUnit 
        << " "
        << T_Object.T_Minute
        << T_Object.T_MinuteUnit;
    }

    return os;
}