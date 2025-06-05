#pragma once

#ifndef _CONTACT_INFO_
#define _CONTACT_INFO_

#include <iostream>

class Contact_Info{

    friend std::ostream& operator<<(std::ostream& os, const Contact_Info& Contact_No_Object);

    private :
    std::string m_Contact_No_Field;

    unsigned long long m_Contact_No_In_Integer;
    std::string m_Contact_No_In_String;

    char Num_For_Constructor;

    public :

    Contact_Info(
        std::string Contact_No_Field,
        unsigned long long Contact_No_In_Integer);

    Contact_Info(
        std::string Contact_No_Field,
        std::string Contact_No_In_String);

    Contact_Info(
        unsigned long long Contact_No_In_Integer);

    Contact_Info(
        std::string Contact_No_In_String);

};

#endif /* Contact_Info.hpp */