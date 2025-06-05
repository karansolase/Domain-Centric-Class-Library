#pragma once 

#ifndef _SPHERE_HPP
#define _SPHERE_HPP

#include "Circle.hpp"

class Shape_Sphere : private Shape_Circle
{
    protected : 
    double Calculate_Sphere_Surface_Area_OF_Sphere();
    double Calculate_Volume_OF_Sphere();
    double Get_Sphere_Diameter();

    public :
    Shape_Sphere(double _radius_of_sphere, std::string unit_of_radius);
    void Display_Sphere_Surface_Area_OF_Sphere();
    void Display_Volume_of_Sphere();
    void Display_Sphere_Diameter();
};

#endif /* Sphere.hpp */