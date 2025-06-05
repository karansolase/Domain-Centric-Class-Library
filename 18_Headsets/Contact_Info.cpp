#include "Contact_Info.hpp"

Contact_Info::Contact_Info(
    std::string Contact_No_Field,
    unsigned long long Contact_No_In_Integer)  :

    m_Contact_No_Field(Contact_No_Field),
    m_Contact_No_In_Integer(Contact_No_In_Integer)
{
    Num_For_Constructor = 1;
}

Contact_Info::Contact_Info(
    std::string Contact_No_Field,
    std::string Contact_No_In_String)  :

    m_Contact_No_Field(Contact_No_Field),
    m_Contact_No_In_String(Contact_No_In_String)
{
    Num_For_Constructor = 2;
}

Contact_Info::Contact_Info(
    unsigned long long Contact_No_In_Integer)  :

    m_Contact_No_In_Integer(Contact_No_In_Integer)
{
    Num_For_Constructor = 3;
}

Contact_Info::Contact_Info(
    std::string Contact_No_In_String)  :

    m_Contact_No_In_String(Contact_No_In_String)
{
    Num_For_Constructor = 4;
}

std::ostream& operator<<(std::ostream& os, const Contact_Info& Contact_Info_Object)
{
    if(Contact_Info_Object.Num_For_Constructor == 1)
    {
        os 
        << Contact_Info_Object.m_Contact_No_Field << " : "
        << Contact_Info_Object.m_Contact_No_In_Integer;
    }
    else if(Contact_Info_Object.Num_For_Constructor == 2)
    {
        os 
        << Contact_Info_Object.m_Contact_No_Field << " : "
        << Contact_Info_Object.m_Contact_No_In_String;
    }
    else if(Contact_Info_Object.Num_For_Constructor == 3){
        os 
        << Contact_Info_Object.m_Contact_No_In_Integer;
    }
    else if(Contact_Info_Object.Num_For_Constructor == 4){
        os
        << Contact_Info_Object.m_Contact_No_In_String;
    }

    return os;
}