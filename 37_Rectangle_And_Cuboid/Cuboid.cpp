#include "Cuboid.hpp"

Shape_Cuboid::Shape_Cuboid(
    double Length_of_Cuboid,  std::string unit_of_Length_of_Cuboid,
    double Breadth_of_Cuboid, std::string unit_of_Breadth_of_Cuboid, 
    double Height_of_Cuboid,  std::string unit_of_Height_of_Cuboid)    : 

    Shp_Cuboid_Height(0,""),
    Shape_Rectangle(
        Length_of_Cuboid, unit_of_Length_of_Cuboid, 
        Breadth_of_Cuboid, unit_of_Breadth_of_Cuboid)
{
    if(Height_of_Cuboid <= 0.0)
    {
        std::cout << "Input for Cuboid cannot be Negative or Equal to Zero. Exiting...";
        exit(EXIT_FAILURE);
    }

    Shp_Cuboid_Height.m_First_Value = Height_of_Cuboid;
    Shp_Cuboid_Height.m_String_Object_1 = unit_of_Height_of_Cuboid;
}

double Shape_Cuboid::Get_Cuboid_Height()
{
    return Shp_Cuboid_Height.m_First_Value;
}

void Shape_Cuboid::Show_Lateral_Surface_Area_of_Cuboid()
{
    std::cout 
    << "Total Surface Area of Cuboid : "
    << Shape_Rectangle::Calculate_Perimeter_of_Rectangle() * Get_Cuboid_Height()
    << " square "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

void Shape_Cuboid::Show_Total_Surface_Area_of_Cuboid()
{
    double Total_Surface_Area_of_Cuboid = 
    2 * 
    ((Shape_Rectangle::Calculate_Area_of_Rectangle()) + 
    (Shape_Rectangle::Get_Rectangle_Breadth() * Get_Cuboid_Height()) + 
    (Get_Cuboid_Height() * Shape_Rectangle::Get_Rectangle_Length()));

    std::cout 
    << "Total Surface Area of Cuboid : "
    << Total_Surface_Area_of_Cuboid
    << " square "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

void Shape_Cuboid::Show_Volume_of_Cuboid()
{
    std::cout 
    << "Volume of Cuboid : "
    << Shape_Rectangle::Calculate_Area_of_Rectangle() * Get_Cuboid_Height()
    << " cubic "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

void Shape_Cuboid::Show_Diagonal_of_Cuboid()
{
    double Addition = 
    (Shape_Rectangle::Get_Rectangle_Length() * Shape_Rectangle::Get_Rectangle_Length())   + 
    (Shape_Rectangle::Get_Rectangle_Breadth() * Shape_Rectangle::Get_Rectangle_Breadth()) +
    (Get_Cuboid_Height() * Get_Cuboid_Height()); 

    std::cout 
    << "Diagonal of Cuboid : "
    << sqrt(Addition)
    << " "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

void Shape_Cuboid::Show_Perimeter_of_Cuboid()
{
    double Addition = 
    Shape_Rectangle::Get_Rectangle_Length()  + 
    Shape_Rectangle::Get_Rectangle_Breadth() +
    Get_Cuboid_Height();

    std::cout 
    << "Perimeter of Cuboid : "
    << 4 * Addition
    << " "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}