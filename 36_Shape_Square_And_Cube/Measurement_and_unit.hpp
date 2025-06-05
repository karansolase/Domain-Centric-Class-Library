#pragma once

#ifndef _MEASUREMENT_AND_UNIT_HPP
#define _MEASUREMENT_AND_UNIT_HPP

#include <vector>
#include <iostream>

class Shape_Square;

class Measurement_and_unit{

    friend class Shape_Square;
    friend std::ostream& operator<<(std::ostream& os, const Measurement_and_unit& Measurement_and_unit_object);

    private :
    std::vector <std::string> m_Vector_string_object;

    double m_First_Value;
    double m_Second_Value;
    double m_Third_Value;

    std::string m_String_Object_1;
    std::string m_String_Object_2;
    std::string m_String_Object_3;
    std::string m_String_Object_4;

    char Num_for_constructor;

    public :
    Measurement_and_unit(
        double first_value,
        std::initializer_list <std::string> _vector_string_object);

    Measurement_and_unit(
        std::string string_object,
        double first_value,
        std::initializer_list <std::string> _vector_string_object);

    Measurement_and_unit(
        std::string _string_object_1,
        double first_value,
        std::string _symbol,
        double second_value,
        std::string _string_object_2);

    Measurement_and_unit(
        double first_value, std::string _first_value_unit,
        double second_value, std::string _second_value_unit,
        std::string _symbol,
        std::string _string_object);

    Measurement_and_unit(
        double _first_value,
        double _second_value,
        std::string symbol);

    Measurement_and_unit(
        double dimensions_1,
        double dimensions_2,
        std::string unit,
        std::string format);

    Measurement_and_unit(
        double dimensions_1,
        double dimensions_2,
        double dimensions_3,
        std::string unit,
        std::string format); // Three Dimensions

    Measurement_and_unit(
        double Value,
        std::string Unit);

    Measurement_and_unit(
        std::string _string_object);

    void show();
};

#endif /* Measurement_and_unit.hpp */