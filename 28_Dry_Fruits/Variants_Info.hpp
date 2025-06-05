#pragma once

#ifndef _VARIANTS_INFO
#define _VARIANTS_INFO

#include <iostream>
#include "Measurement_and_unit.hpp"
#include "Price.hpp"
#include "Word_Number.hpp"
#include "Date.hpp"

class Variant_Info{

    friend std::ostream& operator<<(std::ostream& os, const Variant_Info& Variant_Info_object);

    private :
    std::string m_String_object_1;

    float m_Float_number_object;    
    
    Word_Number m_Word_Number_Object;
    Measurement_and_unit m_Measurement_and_unit_Object;
    Price m_Price_object;

    std::vector<Measurement_and_unit> m_Measurement_and_unit_VectorObject;

    char Num_for_constructor;

    public :
    Variant_Info(
    std::string _product_variants_info, // Style, Pattern, Model, Colour
    double _price); 

    Variant_Info(
    double _numerical_value,
    std::initializer_list <std::string> unit_or_string,
    double _price
    );
    
    Variant_Info(
        std::string _product_variants_info,
        double _numerical_value,
        std::initializer_list <std::string> unit_or_string,
        double _price
    );
    
    Variant_Info(
        double _numerical_value,
        std::initializer_list <std::string> unit_or_string
    );
    
    Variant_Info(
        double dim_1,
        double dim_2,
        double dim_3,
        std::string unit,
        std::string format
    ); // 1 x 1 x 1 unit (format)
    
    Variant_Info(
        std::string _product_variant_info,
        double _numerical_value,
        std::initializer_list <std::string> unit_or_string
    );
    
    Variant_Info(
        std::string string_object_1,
        double first_value,
        double second_value,
        std::string _symbol,
        std::string string_object_2
    );
    
    Variant_Info(
        double first_value,
        double second_value,
        std::string _symbol
    );
    
    Variant_Info(
        double _first_value,std::string _first_value_unit,
        double _second_value,std::string _second_value_unit,
        std::string _symbol,
        std::string _unit_or_string
    );

    Variant_Info(
        std::initializer_list<Measurement_and_unit> _measurement_and_unit_Object,
        double _numerical_value,
        std::initializer_list <std::string> _unit_or_string,
        double _price);
    
    Variant_Info(
        std::string _product_variants_info);

    Variant_Info(
        float numerical_value);

    Variant_Info(
        Word_Number word_number_Object);
    };
    
#endif /* Variants_Info.hpp */