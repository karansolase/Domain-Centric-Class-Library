#pragma once 

#ifndef _RECTANGULAR_PYRAMID_HPP
#define _RECTANGULAR_PYRAMID_HPP

#include "Rectangle.hpp"

class Shape_Rectangular_Pyramid : private Shape_Rectangle
{
    private :
    Measurement_and_unit R_Pyramid_Height;

    protected :
    double Get_Height_of_Rectangular_Pyramid();
    double Calculate_Slant_Height_of_Rectangular_Pyramid();

    public :
    Shape_Rectangular_Pyramid(
        double _height_of_Pyramid, 
        std::string _unit_of_height_of_pyramid,
        
        double _Length_of_rectangular_area_of_pyramid, 
        std::string _unit_of_length_of_rectangular_area_of_pyramid,
        
        double _Breadth_of_rectangular_area_of_pyramid,
        std::string _unit_of_breadth_of_rectangular_area_of_pyramid 
    );

    void Show_Surface_Area_of_Rectangular_Pyramid();
    void Show_Volume_of_Rectangular_Pyramid();
    void Show_Slant_height_of_Rectangular_Pyramid();
    void Show_Perimeter_of_Base_or_Rectangular_Pyramid();
};

#endif /* Rectangular_Pyramid.hpp */