#pragma once 

#ifndef _NAME_ADDR_EMAIL_NO_HPP
#define _NAME_ADDR_EMAIL_NO_HPP

#include <iostream>
#include "Name.hpp"
#include "Contact_Info.hpp"
#include "Address.hpp"

class LightBill;

class Name_Address_Email_No{

   friend std::ostream& operator<<(std::ostream& os, const Name_Address_Email_No& Name_Address_Email_No_Object);
   friend std::ostream& operator<<(std::ostream& os, const LightBill& LB_Object);

    private :
    Name m_Name_Object;/* Format : (first Name, Middle Name, Last Name) | (First Name, Last Name) | (Other Name) */
    Address m_Address_Object;
    std::string m_Email_Id_Object;
    std::string m_String_Object;

    std::vector <Contact_Info> m_Contact_Number_Info;

    char Num_for_Constructor;

  public :
    Name_Address_Email_No(
      Name Name_object, 
      Address Address_object,
      std::string Email_Id_Object,
      std::initializer_list <Contact_Info> Contact_Number_Info);

    Name_Address_Email_No(
      std::string _String_object
    );
};

#endif /* Contact_Details.hpp */