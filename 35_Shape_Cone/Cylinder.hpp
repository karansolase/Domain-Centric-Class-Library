#pragma once

#ifndef _CYLINDER_HPP
#define _CYLINDER_HPP

#include "Circle.hpp"
#include "Measurement_and_unit.hpp"

class Shape_Cylinder : protected Shape_Circle
{
    private :
    Measurement_and_unit Shp_Cylndr_Height;

    protected : 
    double Get_Cylinder_Height();

    Shape_Cylinder(
        double _radius_of_Cylinder, std::string unit_of_radius_of_Cylinder,
        double _height_of_cylinder, std::string unit_of_height_of_Cylinder);

    void Show_Volume_of_Cylinder();
    void Show_Curved_Surface_Area_of_Cylinder();
    void Show_Total_Surface_Area_of_Cylinder();
};

#endif /* Cylinder.hpp */