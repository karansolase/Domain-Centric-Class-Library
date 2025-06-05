#pragma once 

#ifndef _STRING_NUMBER_HPP
#define _STRING_NUMBER_HPP

#include <iostream>
#include "Name.hpp"
#include "Date.hpp"
#include "Measurement_and_unit.hpp"

class Word_Number{

    friend std::ostream& operator<<(std::ostream& os, const Word_Number& Word_Number_Object);

    private :
    float m_Float_Number_Object;
    std::string m_String_Object;
    
    Name m_Name_Object;
    /* Format : (first Name, Middle Name, Last Name)
                  (First Name, Last Name)
                  (Other Name) */
    Date m_year;
    Measurement_and_unit m_Measurement_and_unit_Object;
    
    short Num_for_constructor;
    short Num_for_printing_form;

    public :
    // num_for_constructor = 1
    Word_Number(
        Name Name_object,
        char _year,
        std::string _string_object,
        short _Num_for_printing_form
    );

    // num_for_constructor = 2
    Word_Number(
        Name Name_object,
        Measurement_and_unit Measurement_and_unit_Object,
        short _Num_for_printing_form
    );
    
    // num_for_constructor = 3
    Word_Number(
        Name Name_object,
        std::string _string_object,
        float Float_Number_Object,
        short _Num_for_printing_form
    );

    // Num FOr Constructor = 4
    Word_Number(
        Name Name_Object,
        float Float_Number_Object,
        short _Num_for_printing_form);

    Word_Number(
        std::string _string_object
    );

    /* 
    num_for_printing_form = 4 :- 
    word number
    num_for_printing_form = 1 :- 
    word : number
    num_for_printing_form = 2 :-
    word (number)
    num_for_printing_form = 3;
    word = number
     */
};

#endif /* word_number.hpp */