#pragma once 

#ifndef _CONE_HPP
#define _CONE_HPP

#include "Cylinder.hpp"
#include "Measurement_and_unit.hpp"

class Shape_Cone : private Shape_Cylinder
{
    protected : 
    double Calculate_Slant_height();

    public :
    Shape_Cone(
        double _radius_of_base_Cone, std::string unit_of_base_of_cone,
        double _height_of_Cone,      std::string unit_of_height_of_cone);

    void show_volume_of_Cone();
    void show_Lateral_Surface_Area_of_Cone();
    void show_Total_Surface_Area_of_Cone();
    void show_Slant_Height_of_Cone();
};

#endif /* Cone.hpp */