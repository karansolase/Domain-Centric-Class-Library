#pragma once 

#ifndef _DATE_HPP
#define _DATE_HPP

#include <iostream>
#include "Measurement_and_unit.hpp"

class Date{

    friend std::ostream& operator<<(std::ostream& os, const Date& Date_obj);

    private :
    int m_Day;
    int m_Year;

    int m_Month_In_Num;
    std::string m_Month_In_String;
    std::string m_Day_in_Week;

    std::string m_Date_Seperator_1;
    std::string m_Date_Seperator_2;

    char Num_for_constructor;

 public :
 
Date(int _day,
   std::string _month,
   int _year);

Date(int _year);

Date(
   int _day_in_num, 
   std::string _date_seperator_1,
   int _month_in_num, 
   std::string _date_seperator_2,
   int _year_in_num);

Date(
   std::string _month_in_string,
   int _year_or_day);

Date(
   std::string _day_of_week,
   int _day_in_date,
   std::string _month_in_date_in_string,
   int _year_in_date);

Date(
   int _Year_in_num,
   std::string _date_seperator_1,
   int _month_in_num,
   std::string _date_seperator_2,
   int _day_in_num,
   int);
};

#endif /* Date.hpp */