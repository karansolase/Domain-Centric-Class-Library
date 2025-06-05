#pragma once 

#ifndef _TRAINGLE_HPP
#define _TRAINGLE_HPP

#include "Measurement_and_unit.hpp"

class Shape_Traingle
{
    private :
    Measurement_and_unit Shp_Traingle_Base_or_Side_1;
    Measurement_and_unit Shp_Traingle_Side_2;
    Measurement_and_unit Shp_Traingle_Side_3;
    
    protected : 
    Measurement_and_unit Shp_Traingle_Height;
    double Get_Traingle_Base();
    double Get_Traingle_Height();
    double Calculate_Area_of_Traingle();
    double Calculate_Perimeter();
    std::string get_Traingle_unit();
    
    Shape_Traingle(
        double _height_of_traingle, std::string unit_of_height_of_traingle,
        double _base_or_side_1_of_traingle, std::string unit_of_base_of_side_1_of_traingle,
        double _side_2_of_traingle, std::string unit_of_side_2_of_traingle,
        double _side_3_of_traingle, std::string unit_of_side_3_of_traingle);

    void show_Area_of_Traingle();
    void show_Perimeter_of_Traingle();
};

#endif /* Traingle.hpp */