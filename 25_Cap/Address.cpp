#include "Address.hpp"

Address::Address(
    std::string Address_Premises_Identifiers,
    std::initializer_list <std::string> Address_Locality_Details,
    std::string Address_SubCity_Name,
    std::string Address_City_Name,
    std::string Address_State_Name,
    int Address_Pin_OR_Postal_Code,
    std::string Country_Name) :
    
    m_Address_Premises_Identifiers(Address_Premises_Identifiers),
    m_Address_Locality_Details(Address_Locality_Details),
    m_Address_SubCity_Name(Address_SubCity_Name),
    m_Address_City_Name(Address_City_Name),
    m_Address_State_Name(Address_State_Name),
    m_Address_Pin_OR_Postal_Code(Address_Pin_OR_Postal_Code),
    m_Address_Country_Name(Country_Name)
{
    Num_For_Constructor = 1;
}

Address::Address(
    std::string Address_SubCity_Name,
    std::string Address_City_Name,
    std::string Address_State_Name,
    int Address_Pin_OR_Postal_Code_of_City_or_SubCity,
    std::string Country_Name)   : 

    m_Address_SubCity_Name(Address_SubCity_Name),
    m_Address_City_Name(Address_City_Name),
    m_Address_Pin_OR_Postal_Code(Address_Pin_OR_Postal_Code_of_City_or_SubCity),
    m_Address_State_Name(Address_State_Name),
    m_Address_Country_Name(Country_Name)
{
    Num_For_Constructor = 2;
}

Address::Address(
    std::string _String_object)  :

    m_String_Object(_String_object)
{
    Num_For_Constructor = 3;
}

int Address::is_string_not_empty(std::string string_object) const
{
    return (string_object != "");
}

std::ostream& operator<<(std::ostream& os, const Address& Address_object)
{
    if(Address_object.Num_For_Constructor == 1){
    os 
    << Address_object.m_Address_Premises_Identifiers << ", ";
    
    for(const std::string i : Address_object.m_Address_Locality_Details)
    {
        os << i << ", ";
    }
    
    if(Address_object.is_string_not_empty(Address_object.m_Address_SubCity_Name))
    {
        os << Address_object.m_Address_SubCity_Name << ", ";
    }

    os
    << Address_object.m_Address_City_Name    << ", "
    << Address_object.m_Address_State_Name << ", "
    << Address_object.m_Address_Pin_OR_Postal_Code << ", "
    << Address_object.m_Address_Country_Name;
    }
    else if(Address_object.Num_For_Constructor == 2){
        
        if(Address_object.is_string_not_empty(Address_object.m_Address_SubCity_Name))
        {
            os
            << Address_object.m_Address_SubCity_Name << ", "
            << Address_object.m_Address_City_Name << ", "
            << Address_object.m_Address_State_Name << ", "
            << Address_object.m_Address_Pin_OR_Postal_Code << ", "
            << Address_object.m_Address_Country_Name;
        }

        else
        {
            os 
            << Address_object.m_Address_City_Name << ", "
            << Address_object.m_Address_State_Name << ", "
            << Address_object.m_Address_Pin_OR_Postal_Code << ", "
            << Address_object.m_Address_Country_Name; 
        }
    }
    else if(Address_object.Num_For_Constructor == 3){
        os << Address_object.m_String_Object;
    }

    return os;
}

