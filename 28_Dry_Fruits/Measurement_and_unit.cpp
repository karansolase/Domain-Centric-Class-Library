#include "Measurement_and_unit.hpp"

Measurement_and_unit::Measurement_and_unit(
    double first_value,
    std::initializer_list <std::string> _vector_string_object)  :   
    
    m_First_Value(first_value),
    m_Vector_string_object(_vector_string_object)
{
    Num_for_constructor = 1;
}

Measurement_and_unit::Measurement_and_unit(
    std::string string_object,
    double first_value,
    std::initializer_list <std::string> _vector_string_object)  :   
    
    m_String_Object_1(string_object),
    m_First_Value(first_value),
    m_Vector_string_object(_vector_string_object)
{
    Num_for_constructor = 2;
}

Measurement_and_unit::Measurement_and_unit(
    std::string _string_object_1,
    double first_value,
    std::string _symbol,
    double second_value,
    std::string _string_object_2)  :   
    
    m_String_Object_1(_string_object_1),
    m_First_Value(first_value), 
    m_String_Object_3(_symbol),
    m_Second_Value(second_value),
    m_String_Object_2(_string_object_2)
{ 
    Num_for_constructor = 3;
}

Measurement_and_unit::Measurement_and_unit(
    double first_value, std::string _first_value_unit,
    double second_value, std::string _second_value_unit,
    std::string _symbol,
    std::string _string_object)  :   
    
    m_First_Value(first_value),
    m_Second_Value(second_value),
    m_String_Object_1(_first_value_unit),
    m_String_Object_2(_second_value_unit),
    m_String_Object_3(_symbol),
    m_String_Object_4(_string_object)
{
    Num_for_constructor = 4;
}

Measurement_and_unit::Measurement_and_unit(
    double _first_value,
    double _second_value,
    std::string symbol)  :   
    
    m_First_Value(_first_value),
    m_Second_Value(_second_value),
    m_String_Object_1(symbol)
{
    Num_for_constructor = 5;
}

Measurement_and_unit::Measurement_and_unit(
    double dimensions_1,
    double dimensions_2,
    std::string unit,
    std::string format)  :   
    
    m_First_Value(dimensions_1),
    m_Second_Value(dimensions_2),
    m_String_Object_1(unit),
    m_String_Object_2(format)
{
    Num_for_constructor = 6;
}

Measurement_and_unit::Measurement_and_unit(
    double dimensions_1,
    double dimensions_2,
    double dimensions_3,
    std::string unit,
    std::string format)  :   
    
    m_First_Value(dimensions_1),
    m_Second_Value(dimensions_2),
    m_Third_Value(dimensions_3),
    m_String_Object_1(unit),
    m_String_Object_2(format)
{
    Num_for_constructor = 7;
}

Measurement_and_unit::Measurement_and_unit(
    double Value,
    std::string Unit)   :
    m_First_Value(Value),
    m_String_Object_1(Unit)
{
    Num_for_constructor = 8;
}

Measurement_and_unit::Measurement_and_unit(
    std::string _string_object)  :   
    
    m_String_Object_1(_string_object)
{
    Num_for_constructor = 9;
}

std::ostream& operator<<(std::ostream& os, const Measurement_and_unit& Measurement_and_unit_object)
{
    if(Measurement_and_unit_object.Num_for_constructor == 1){
        if(Measurement_and_unit_object.m_First_Value == 0 || Measurement_and_unit_object.m_First_Value == 0.0){
            for(const std::string i : Measurement_and_unit_object.m_Vector_string_object)
            {
                os << i << " "; 
            }
        }
        else{
            os << Measurement_and_unit_object.m_First_Value;
            for(const std::string i : Measurement_and_unit_object.m_Vector_string_object)
            {
                os << " " << i << " ";
            }
        }
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 2){
        os 
        << Measurement_and_unit_object.m_String_Object_1 << " " << Measurement_and_unit_object.m_First_Value;
        for(const std::string i : Measurement_and_unit_object.m_Vector_string_object)
        {
            os << " " << i << " ";
        }
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 3){
        os 
        << Measurement_and_unit_object.m_String_Object_1 << " "
        << Measurement_and_unit_object.m_First_Value
        << Measurement_and_unit_object.m_String_Object_3
        << Measurement_and_unit_object.m_Second_Value
        << " " << Measurement_and_unit_object.m_String_Object_2;
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 4){
        os 
        << Measurement_and_unit_object.m_First_Value     << " "
        << Measurement_and_unit_object.m_String_Object_1 << " "
        << Measurement_and_unit_object.m_String_Object_3 << " "
        << Measurement_and_unit_object.m_Second_Value    << " " 
        << Measurement_and_unit_object.m_String_Object_2 << " "
        << Measurement_and_unit_object.m_String_Object_4;
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 5){
        os
        << Measurement_and_unit_object.m_First_Value     << " " 
        << Measurement_and_unit_object.m_String_Object_1 << " "
        << Measurement_and_unit_object.m_Second_Value;
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 6){
        os 
        << Measurement_and_unit_object.m_String_Object_2 << " "
        << Measurement_and_unit_object.m_First_Value     << " X "
        << Measurement_and_unit_object.m_Second_Value    << " "
        << Measurement_and_unit_object.m_String_Object_1; 
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 7){
        os 
        << Measurement_and_unit_object.m_String_Object_2 << " "
        << Measurement_and_unit_object.m_First_Value     << " X "
        << Measurement_and_unit_object.m_Second_Value    << " X "
        << Measurement_and_unit_object.m_Third_Value     << " "
        << Measurement_and_unit_object.m_String_Object_1;
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 8){
        os 
        << Measurement_and_unit_object.m_First_Value << " "
        << Measurement_and_unit_object.m_String_Object_1;
    }

    else if(Measurement_and_unit_object.Num_for_constructor == 9){
        os
        << Measurement_and_unit_object.m_String_Object_1;
    }

    return os;
}

void Measurement_and_unit::show()
{
    std::cout << "Value : " << this->m_First_Value << " " << this->m_String_Object_1;
}