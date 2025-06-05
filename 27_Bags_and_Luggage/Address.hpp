#pragma once

#ifndef _ADDRESS_HPP
#define _ADDRESS_HPP

#include <iostream>
#include <vector>

class Address 
{
    friend std::ostream& operator<<(std::ostream& os, const Address& Address_object);  

    private :
    std::string m_Address_Premises_Identifiers; 
    std::vector <std::string> m_Address_Locality_Details;
    std::string m_Address_SubCity_Name;
    std::string m_Address_City_Name;
    int m_Address_Pin_OR_Postal_Code;
    std::string m_Address_State_Name;
    std::string m_Address_Country_Name;

    std::string m_String_Object;

    char Num_For_Constructor;
    
    int is_string_not_empty(std::string string_object) const;
    
    public :
    Address(
        std::string Address_Premises_Identifiers,
        std::initializer_list <std::string> Address_Locality_Details,
        std::string Address_SubCity_Name,
        std::string Address_City_Name,
        std::string Address_State_Name,
        int Address_Pin_OR_Postal_Code,
        std::string Country_Name
    );

    Address(
        std::string Address_Premises_Identifiers,
        std::initializer_list <std::string> Address_Locality_Details,
        std::string Address_SubCity_Name,
        std::string Address_City_Name,
        std::string Address_State_Name,
        int Address_Pin_OR_Postal_Code
    );
    
    Address(
        std::string Address_SubCity_Name,
        std::string Address_City_Name,
        std::string Address_State_Name,
        int Address_Pin_OR_Postal_Code_of_City_or_SubCity,
        std::string Country_Name);
        
    Address(std::string _String_object);

    void Printing_Address_Details_with_Field() const;
};

#endif /* Address.hpp */



