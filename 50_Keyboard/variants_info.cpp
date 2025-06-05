#include "Variants_Info.hpp"

Variant_Info::Variant_Info(
    std::string _product_variants_info, // Style, Pattern, Model, Colour
    double _price)  :

    m_String_object_1(_product_variants_info),
    m_Price_object("Rs", _price),
    m_Measurement_and_unit_Object(""),
    m_Word_Number_Object("")
{
    Num_for_constructor = 1;
}

Variant_Info::Variant_Info(
    double _numerical_value,
    std::initializer_list <std::string> unit_or_string,
    double _price)  :

    m_Measurement_and_unit_Object(
        _numerical_value, unit_or_string),
    m_Price_object("Rs", _price),
    m_Word_Number_Object("")
{
    Num_for_constructor = 2;
}
    
Variant_Info::Variant_Info(
    std::string _product_variants_info,
    double _numerical_value,
    std::initializer_list <std::string> unit_or_string,
    double _price)  :

    m_String_object_1(_product_variants_info),
    m_Measurement_and_unit_Object(
        _numerical_value, unit_or_string),
    m_Price_object("Rs", _price),
    m_Word_Number_Object("")
{
    Num_for_constructor = 3;
}
    
Variant_Info::Variant_Info(
    double _numerical_value,
    std::initializer_list <std::string> unit_or_string)  :

    m_Measurement_and_unit_Object(
        _numerical_value, unit_or_string),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 4;
}
    
Variant_Info::Variant_Info(
    double dim_1,
    double dim_2,
    double dim_3,
    std::string unit,
    std::string format)   : // 1 x 1 x 1 unit (format)

    m_Measurement_and_unit_Object(
        dim_1, dim_2, dim_3,
        unit, format),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 5;
}
        
Variant_Info::Variant_Info(
    std::string _product_variant_info,
    double _numerical_value,
    std::initializer_list <std::string> unit_or_string)   :

    m_String_object_1(_product_variant_info),
    m_Measurement_and_unit_Object(
        _numerical_value, unit_or_string),
    m_Word_Number_Object(""),
    m_Price_object("Rs", 0)
{
    Num_for_constructor = 6;
}
    
Variant_Info::Variant_Info(
    std::string string_object_1,
    double first_value,
    double second_value,
    std::string _symbol,
    std::string string_object_2)  :

    m_Measurement_and_unit_Object(
        string_object_1,
        first_value, 
        _symbol,
        second_value,
        string_object_2),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 7;
}
    
Variant_Info::Variant_Info(
    double first_value,
    double second_value,
    std::string _symbol)   :

    m_Measurement_and_unit_Object(
        first_value, 
        second_value,
        _symbol),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 8;
}
    
Variant_Info::Variant_Info(
    double _first_value,std::string _first_value_unit,
    double _second_value,std::string _second_value_unit,
    std::string _symbol,
    std::string _unit_or_string)    :

    m_Measurement_and_unit_Object(
        _first_value, _first_value_unit, 
        _second_value, _second_value_unit,
        _symbol, _unit_or_string
    ),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 9;
}

Variant_Info::Variant_Info(
    std::initializer_list<Measurement_and_unit> _measurement_and_unit_Object,
    double _numerical_value,
    std::initializer_list <std::string> _unit_or_string,
    double _price)   :

    m_Measurement_and_unit_VectorObject(_measurement_and_unit_Object),
    m_Measurement_and_unit_Object(
        _numerical_value, _unit_or_string),
    m_Price_object("Rs", _price),
    m_Word_Number_Object("")
{
    Num_for_constructor = 10;
}
    
Variant_Info::Variant_Info(
    std::string _product_variants_info)   :

    m_String_object_1(_product_variants_info),
    m_Measurement_and_unit_Object(0, ""),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 11;
}

Variant_Info::Variant_Info(
    float numerical_value)  :

    m_Float_number_object(numerical_value),
    m_Measurement_and_unit_Object(0, ""),
    m_Price_object("Rs", 0),
    m_Word_Number_Object("")
{
    Num_for_constructor = 12;
}

Variant_Info::Variant_Info(
    Word_Number word_number_Object)  :

    m_Measurement_and_unit_Object(0, ""),
    m_Price_object("Rs", 0),
    m_Word_Number_Object(word_number_Object)
{
    Num_for_constructor = 13;
}

std::ostream& operator<<(std::ostream& os, const Variant_Info& Variant_Info_object){
    if(Variant_Info_object.Num_for_constructor == 1){
        os 
        << Variant_Info_object.m_String_object_1 
        << " | " 
        << Variant_Info_object.m_Price_object;
    }

    else if(Variant_Info_object.Num_for_constructor == 2){
        os 
        << Variant_Info_object.m_Measurement_and_unit_Object 
        << " | "
        << Variant_Info_object.m_Price_object;
    }

    else if(Variant_Info_object.Num_for_constructor == 3){
        os 
        << Variant_Info_object.m_String_object_1 
        << " | "
        << Variant_Info_object.m_Measurement_and_unit_Object
        << " | "
        << Variant_Info_object.m_Price_object;
    }

    else if(Variant_Info_object.Num_for_constructor == 4){
        os 
        << Variant_Info_object.m_Measurement_and_unit_Object;
    }

    else if(Variant_Info_object.Num_for_constructor == 5){
        os 
        << Variant_Info_object.m_Measurement_and_unit_Object;
    }
    
    else if(Variant_Info_object.Num_for_constructor == 6){
        os 
        << Variant_Info_object.m_String_object_1 
        << " | "
        << Variant_Info_object.m_Measurement_and_unit_Object;
    }

    else if(Variant_Info_object.Num_for_constructor == 7){
        os 
        << Variant_Info_object.m_Measurement_and_unit_Object;
    }

    else if(Variant_Info_object.Num_for_constructor == 8){
        os 
        << Variant_Info_object.m_Measurement_and_unit_Object;
    }
    
    else if(Variant_Info_object.Num_for_constructor == 9){
        os 
        << Variant_Info_object.m_Measurement_and_unit_Object;
    }
    
    else if(Variant_Info_object.Num_for_constructor == 10){

        os 
        << Variant_Info_object.m_Measurement_and_unit_Object << " | ";

        std::vector<Measurement_and_unit>::const_iterator Iter  = 
        Variant_Info_object.m_Measurement_and_unit_VectorObject.begin();

        while(Iter != Variant_Info_object.m_Measurement_and_unit_VectorObject.end())
        {
            std::cout << *Iter << " | ";
        }
        os << Variant_Info_object.m_Price_object;
    }
    
    else if(Variant_Info_object.Num_for_constructor == 11){
        os 
        << Variant_Info_object.m_String_object_1;
    }

    else if(Variant_Info_object.Num_for_constructor == 12){
        os 
        << Variant_Info_object.m_Float_number_object;
    }
    
    else if(Variant_Info_object.Num_for_constructor == 13){
        os 
        << Variant_Info_object.m_Word_Number_Object;
    }

    return os;
}





