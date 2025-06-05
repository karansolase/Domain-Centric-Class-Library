#pragma once 

#ifndef _RECTANGLE_HPP
#define _RECTANGLE_HPP

#include "Measurement_and_unit.hpp"

class Shape_Rectangle
{
    private :
    Measurement_and_unit Shp_Rectangle_Length;
    Measurement_and_unit Shape_Rectangle_Breadth;

    protected :
    double Get_Rectangle_Length();
    double Get_Rectangle_Breadth();
    double Calculate_Area_of_Rectangle();
    double Calculate_Perimeter_of_Rectangle();
    std::string Get_Rectangle_unit();
    
    Shape_Rectangle(
        double _length_of_rectangle, std::string _unit_of_length_of_rectangle,
        double _breadth_of_rectangle, std::string _unit_of_breadth_of_rectangle);
        
    void show_Area_of_Rectangle();
    void show_Perimeter_of_Rectangle();
    void show_Diagonal_of_Rectangle();
};

#endif /* Rectangle.hpp */