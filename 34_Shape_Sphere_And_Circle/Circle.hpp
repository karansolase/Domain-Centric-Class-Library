#pragma once 

#ifndef _CIRCLE_HPP
#define _CIRCLE_HPP

#include "Measurement_and_unit.hpp"

const double Pi = 3.141592653589793;

class Shape_Circle
{
    private :
    Measurement_and_unit Shp_Crcle_Radius;

    protected : 
    double Get_Circle_Radius();
    double Calculate_Circle_Area();
    double Calculate_Circle_Circumference();
    double Calculate_Circle_Chord_Length(double Perpendicular_Distance_From_Chord_To_Center);
    std::string get_unit();

    public : 
    Shape_Circle(double _radius_of_Circle, std::string _unit_of_radius);
    void Display_Circle_Radius();
    void Display_Circle_Diameter();
    void Display_Circle_Area();
    void Display_Circle_Circumference();
    void Display_Circle_Chord_Length(double Perpendicular_Distance_From_Chord_To_Center);
};

#endif /* Circle.hpp */