#pragma once 

#ifndef _CUBOID_HPP
#define _CUBOID_HPP

#include "Rectangle.hpp"
#include "Measurement_and_unit.hpp"

class Shape_Cuboid : private Shape_Rectangle
{
    private :
    Measurement_and_unit Shp_Cuboid_Height;

    protected :
    double Get_Cuboid_Height();

    public :
    Shape_Cuboid(
        double Length_of_Cuboid, std::string unit_of_Length_of_Cuboid,
        double Breadth_of_Cuboid, std::string unit_of_breadth_of_Cuboid,
        double Height_of_Cuboid, std::string unit_of_Height_of_Cuboid);

    void Show_Lateral_Surface_Area_of_Cuboid();
    void Show_Total_Surface_Area_of_Cuboid();
    void Show_Volume_of_Cuboid();
    void Show_Diagonal_of_Cuboid();
    void Show_Perimeter_of_Cuboid();
};

#endif /* Cuboid.hpp */