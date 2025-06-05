#pragma once 

#ifndef _DATE_HPP
#define _DATE_HPP

#include <iostream>

class Date{

    friend std::ostream& operator<<(std::ostream& os, const Date& Date_obj);
    friend class Transaction_Entries;

    private :
       int m_Day;
       int m_Year;

       int m_Month_In_Num;
       std::string m_Month_In_String;

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
};

#endif /* Date.hpp */