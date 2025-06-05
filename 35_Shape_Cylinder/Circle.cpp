#include "Circle.hpp"

Shape_Circle::Shape_Circle(double _radius_of_Circle, std::string _unit_of_radius) 
:  Shp_Crcle_Radius(0, "")
{
    if(_radius_of_Circle <= 0.0)
    {
        std::cout << "Radius of Cylinder Cannot be Negative or Equal to Zero";
        exit(EXIT_FAILURE);
    }
    Shp_Crcle_Radius.m_First_Value = _radius_of_Circle;
    Shp_Crcle_Radius.m_String_Object_1 = _unit_of_radius;
}

double Shape_Circle::Get_Circle_Radius()
{
    return Shp_Crcle_Radius.m_First_Value;
}

void Shape_Circle::Display_Circle_Radius()
{
    std::cout << "Circle Radius : " << this->Get_Circle_Radius() << " " << this->get_unit() << std::endl;
}

void Shape_Circle::Display_Circle_Diameter()
{
    std::cout << "Circle Diameter : " << this->Get_Circle_Radius() * 2 << " " << this->get_unit() << std::endl;
}

double Shape_Circle::Calculate_Circle_Area()
{
    return Pi * this->Get_Circle_Radius() * this->Get_Circle_Radius();
}

void Shape_Circle::Display_Circle_Area()
{
    std::cout << "Circle Area : " << this->Calculate_Circle_Area() << " Square " << this->get_unit() << std::endl;
}

double Shape_Circle::Calculate_Circle_Circumference()
{
    return 2 * Pi * this->Get_Circle_Radius();
}

void Shape_Circle::Display_Circle_Circumference()
{
    std::cout << "Circle Circumference : " << this->Calculate_Circle_Circumference() << " " << this->get_unit() << std::endl;
}

double Shape_Circle::Calculate_Circle_Chord_Length
(double Perpendicular_Distance_From_Chord_To_Center)
{
    double Square_OF_Radius = this->Get_Circle_Radius() * this->Get_Circle_Radius();
    double Square_OF_Perpendicular_Distance_From_Chord_To_Center = Perpendicular_Distance_From_Chord_To_Center * Perpendicular_Distance_From_Chord_To_Center;

    return 2 * sqrt(Square_OF_Radius - Square_OF_Perpendicular_Distance_From_Chord_To_Center);
}

void Shape_Circle::Display_Circle_Chord_Length(double Perpendicular_Distance_From_Chord_To_Center)
{
    std::cout << "Circle Chord Length : " << this->Calculate_Circle_Chord_Length(Perpendicular_Distance_From_Chord_To_Center) << " " << this->get_unit() << std::endl;
}

std::string Shape_Circle::get_unit()
{
    return Shp_Crcle_Radius.m_String_Object_1;
}