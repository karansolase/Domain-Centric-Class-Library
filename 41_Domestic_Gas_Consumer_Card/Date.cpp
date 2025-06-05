
#include "Date.hpp"

std::ostream& operator<<(std::ostream& os, const Date& Date_obj){
    if(Date_obj.Num_for_constructor == 1){
        os << Date_obj.m_Day << " "
           << Date_obj.m_Month_In_String << ", "
           << Date_obj.m_Year; 
    }
    else if(Date_obj.Num_for_constructor == 2){
        os << Date_obj.m_Year;
    }
    else if(Date_obj.Num_for_constructor == 3){
        os << Date_obj.m_Day
           << Date_obj.m_Date_Seperator_1
           << Date_obj.m_Month_In_Num
           << Date_obj.m_Date_Seperator_2   
           << Date_obj.m_Year;
    }
    else if(Date_obj.Num_for_constructor == 4)
    {
        os << Date_obj.m_Month_In_String << " "
           << Date_obj.m_Year;
    }
    else if(Date_obj.Num_for_constructor == 5)
    {
        os 
        << Date_obj.m_Day_in_Week << ", "
        << Date_obj.m_Day << " "
        << Date_obj.m_Month_In_String << ", "
        << Date_obj.m_Year;
    }
    else if(Date_obj.Num_for_constructor == 6)
    {
        os 
        << Date_obj.m_Year
        << Date_obj.m_Date_Seperator_1
        << Date_obj.m_Month_In_Num
        << Date_obj.m_Date_Seperator_2
        << Date_obj.m_Day;
    }

    return os;
}

Date::Date(
    int _day,
    std::string _month,
    int _year)  : 
   
  m_Day(_day), 
  m_Month_In_String(_month), 
  m_Year(_year)
{
    Num_for_constructor = 1;
}

Date::Date(int _year)  : 

  m_Year(_year)
{
    Num_for_constructor = 2;   
}

Date::Date(
    int _day_in_num, 
    std::string _date_seperator_1,
    int _month_in_num, 
    std::string _date_seperator_2,
    int _year_in_num)  :

    m_Day(_day_in_num), 
    m_Date_Seperator_1(_date_seperator_1),
    m_Month_In_Num(_month_in_num), 
    m_Date_Seperator_2(_date_seperator_2),
    m_Year(_year_in_num)
{
    Num_for_constructor = 3;
}

Date::Date(
    std::string _month_in_string,
    int _year)   :

    m_Month_In_String(_month_in_string),
    m_Year(_year)
{
    Num_for_constructor = 4;
}

Date::Date(
    std::string _day_of_week,
    int _day_in_date,
    std::string _month_in_date_in_string,
    int _year_in_date)   :
    m_Day_in_Week(_day_of_week),
    m_Day(_day_in_date),
    m_Month_In_String(_month_in_date_in_string),
    m_Year(_year_in_date)
{
    Num_for_constructor = 5;
}

Date::Date(
    int _Year_in_num,
    std::string _date_seperator_1,
    int _month_in_num,
    std::string _date_seperator_2,
    int _day_in_num,
    int)     :
    m_Year(_Year_in_num),
    m_Date_Seperator_1(_date_seperator_1),
    m_Month_In_Num(_month_in_num),
    m_Date_Seperator_2(_date_seperator_2),
    m_Day(_day_in_num)
{
    Num_for_constructor = 6;
}


