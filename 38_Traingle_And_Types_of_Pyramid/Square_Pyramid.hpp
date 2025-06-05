#pragma once 

#ifndef _SQUARE_PYRAMID_HPP
#define _SQUARE_PYRAMID_HPP

#include "Measurement_and_unit.hpp"
#include "Square.hpp"

class Shape_Square_Pyramid : private Shape_Square
{
    private :
    Measurement_and_unit S_Pyramid_Height;

    protected : 
    double Get_Height_of_Square_Pyramid();
    double Calculate_Slant_Height_of_Square_Pyramid();

    public :
    Shape_Square_Pyramid(
        double base_of_square_pyramid, std::string unit_of_base_square_pyramid,
        double height_of_square_pyramid, std::string unit_of_height_of_square_pyramid);

    void Show_Base_Area_of_Square_Pyramid();
    void Show_Lateral_Surface_Area_of_Square_pyramid();
    void Show_Total_Surface_Area_of_Square_Pyramid();
    void Show_Slant_Height_of_Square_Pyramid();
    void Show_Volume_of_Square_Pyramid();
};

#endif /* Square_Pyramid.hpp */