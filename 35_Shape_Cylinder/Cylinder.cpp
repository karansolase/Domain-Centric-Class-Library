#include "Cylinder.hpp"

double Shape_Cylinder::Get_Cylinder_Height()
{
    return Shp_Cylndr_Height.m_First_Value;
}

Shape_Cylinder::Shape_Cylinder
(double _radius_of_Cylinder, std::string unit_of_radius_of_Cylinder,
double _height_of_cylinder, std::string unit_of_height_of_Cylinder) 

:   Shape_Circle(_radius_of_Cylinder, unit_of_radius_of_Cylinder),
    Shp_Cylndr_Height(0, "")
{
    if(_height_of_cylinder <= 0.0)
    {
        std::cout << "Height of Cylinder Cannot be Negative or Equal to Zero";
        exit(EXIT_FAILURE);
    }

    Shp_Cylndr_Height.m_First_Value = _height_of_cylinder;
    Shp_Cylndr_Height.m_String_Object_1 = unit_of_height_of_Cylinder;
}

void Shape_Cylinder::Show_Volume_of_Cylinder()
{
    std::cout 
    << "Volume of Cylinder : " 
    << Shape_Circle::Calculate_Circle_Area() * Shape_Cylinder::Get_Cylinder_Height()
    << " cubic " << Shape_Circle::get_unit()
    << std::endl; 
}

void Shape_Cylinder::Show_Curved_Surface_Area_of_Cylinder()
{
    std::cout 
    << "Curved Surface Area of Cylinder : "
    << Shape_Circle::Calculate_Circle_Circumference() * Shape_Cylinder::Get_Cylinder_Height()
    << " square " << Shape_Circle::get_unit()
    << std::endl;
}

void Shape_Cylinder::Show_Total_Surface_Area_of_Cylinder()
{
    double Total_Surface_Area_of_Cylinder = 
    Shape_Circle::Calculate_Circle_Circumference() * Shape_Cylinder::Get_Cylinder_Height() + 2 * Shape_Circle::Calculate_Circle_Area();

    std::cout 
    << "Total Surface Area of Cylinder : "
    << Total_Surface_Area_of_Cylinder << " square " << Shape_Circle::get_unit()
    << std::endl;
}