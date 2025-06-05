#include "Contact_Details.hpp"

Name_Address_Email_No::Name_Address_Email_No(
    Name Name_object, 
    Address Address_object,
    std::string Email_Id_Object,
    std::initializer_list <Contact_Info> Contact_Number_Info)  :
                
    m_Name_Object(Name_object),
    m_Address_Object(Address_object),
    m_Email_Id_Object(Email_Id_Object),
    m_Contact_Number_Info(Contact_Number_Info)
{
    Num_for_Constructor = 1;
}

Name_Address_Email_No::Name_Address_Email_No(
    std::string _String_object)
:   m_String_Object(_String_object),
    m_Name_Object(""),
    m_Address_Object("")
{
    Num_for_Constructor = 2;
}


std::ostream& operator<<(std::ostream& os, const Name_Address_Email_No& Name_Address_Email_No_Object){
    if(Name_Address_Email_No_Object.Num_for_Constructor == 1){
       os 
       << "Name : "    << Name_Address_Email_No_Object.m_Name_Object << std::endl
       << "Address : " << Name_Address_Email_No_Object.m_Address_Object << std::endl
       << "Email-id : " << Name_Address_Email_No_Object.m_Email_Id_Object    << std::endl
       << "Contact No. : ";
       
       std::vector<Contact_Info>::const_iterator Iter = 
       Name_Address_Email_No_Object.m_Contact_Number_Info.begin();

       while(Iter != Name_Address_Email_No_Object.m_Contact_Number_Info.end())
       {
        std::cout << *Iter << std::endl;
       }
    }
    else{
        os << Name_Address_Email_No_Object.m_String_Object;
    }
    return os;
}

