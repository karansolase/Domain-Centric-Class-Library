#include "Cone.hpp"

Shape_Cone::Shape_Cone(
    double _radius_of_base_Cone, std::string unit_of_base_of_cone,
    double _height_of_Cone,      std::string unit_of_height_of_cone)  

:   Shape_Cylinder(
    _radius_of_base_Cone, unit_of_base_of_cone,
    _height_of_Cone, unit_of_height_of_cone)
{
} 

double Shape_Cone::Calculate_Slant_height()
{
    double Radius_Square = Shape_Circle::Get_Circle_Radius() * Shape_Circle::Get_Circle_Radius();
    double Height_Square = Shape_Cylinder::Get_Cylinder_Height() * Shape_Cylinder::Get_Cylinder_Height();

    return sqrt(Radius_Square + Height_Square);
}

void Shape_Cone::show_Slant_Height_of_Cone()
{
    std::cout 
    << "Slant Height of Cone : " 
    << Calculate_Slant_height() 
    << " "
    << Shape_Circle::get_unit() 
    << std::endl;
}

void Shape_Cone::show_volume_of_Cone()
{
    double Volume_of_Cone = (double)1/3 * Shape_Cylinder::Get_Cylinder_Height() * Shape_Circle::Calculate_Circle_Area();

    std::cout 
    << "Volume of Cone : "
    << Volume_of_Cone
    << " cubic " << Shape_Circle::get_unit()
    << std::endl;
}

void Shape_Cone::show_Lateral_Surface_Area_of_Cone()
{
    double Lateral_Surface_Area_of_Cone = 
    Pi * Shape_Circle::Get_Circle_Radius() * Shape_Cone::Calculate_Slant_height();

    std::cout 
    << "Lateral Surface Area of Cone : " 
    << Lateral_Surface_Area_of_Cone
    << " square "
    << Shape_Circle::get_unit()
    << std::endl;
}

void Shape_Cone::show_Total_Surface_Area_of_Cone()
{
    double Total_Surface_Area_of_Cone = 
    Pi * Shape_Circle::Get_Circle_Radius() * 
    (Shape_Cone::Calculate_Slant_height() + Shape_Circle::Get_Circle_Radius());

    std::cout 
    << "Total Surface Area of Cone : " 
    << Total_Surface_Area_of_Cone 
    << " square "
    << Shape_Circle::get_unit()
    << std::endl;
}

