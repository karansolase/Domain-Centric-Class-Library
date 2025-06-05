#pragma once 

#ifndef _TRAINGULAR_PYRAMID
#define _TRAINGULAR_PYRAMID

#include "Traingle.hpp"

class Shape_Traingular_Pyramid : private Shape_Traingle
{
    private :
    Measurement_and_unit T_Pyramid_Height_From_Apex;

    protected : 
    double Get_Traingular_Pyramid_height_From_Apex();

    public :
    Shape_Traingular_Pyramid(
        double _height_of_pyramid_from_Apex,std::string unit_of_height_of_pyramid_from_Apex,
        double _base_or_side_1_of_traingle, std::string unit_of_base_or_side_1_of_traingle,
        double _side_2_of_traingle ,        std::string unit_of_side_2_of_traingle,
        double _side_3_of_traingle,         std::string unit_of_side_3_of_traingle);

    void show_Volume_of_Traingular_Pyramid();
    void show_Surface_Area_of_Triangular_Pyramid();
    void show_Total_Surface_Area_of_Triangular_Pyramid();
    void show_Slant_Height_Traingular_Pyramid();
};

#endif /* Traingular_Pyramid.hpp */