#pragma once 

#ifndef _CUBE_HPP
#define _CUBE_HPP

#include "Measurement_and_unit.hpp"
#include "Square.hpp"

class Shape_Cube : private Shape_Square
{
    public :
    Shape_Cube(double Side_of_Cube, std::string unit_of_Side_of_Cube);
    void Show_Volume_of_Cube();
    void Show_Total_Surface_Area_of_Cube();
    void Show_Lateral_Surface_Area_of_Cube();
    void Show_Diagonal_of_Cube();
};

#endif /* Cube.hpp */