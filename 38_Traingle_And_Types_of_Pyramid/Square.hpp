#pragma once

#ifndef _SQUARE_HPP
#define _SQUARE_HPP

#include "Measurement_and_unit.hpp"

class Shape_Square
{
    private :
    Measurement_and_unit Shp_Square_Side;

    protected : 
    double Get_SquareSide();
    double Area_of_Square();
    std::string get_Square_unit();
    Shape_Square(double _Side_of_Square, std::string unit_of_Side_of_Square);
    void show_Area_of_Square();
    void show_Perimeter_of_Square();
    void show_Diagonal_of_Square();  
};

#endif /* Square.hpp */