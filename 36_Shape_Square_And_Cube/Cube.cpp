#include "Cube.hpp"

Shape_Cube::Shape_Cube(
    double Side_of_Cube, std::string unit_of_Side_Cube) : 
    Shape_Square(Side_of_Cube, unit_of_Side_Cube)
{
}

void Shape_Cube::Show_Volume_of_Cube()
{
    std::cout 
    << "Volume of Cube : "
    << Shape_Square::Get_SquareSide() * Shape_Square::Area_of_Square()
    << " cubic "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Cube::Show_Total_Surface_Area_of_Cube()
{
    std::cout 
    << "Total Surface Area of Cube : "
    << 6 * Shape_Square::Area_of_Square()
    << " Square "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Cube::Show_Lateral_Surface_Area_of_Cube()
{
    std::cout 
    << "Lateral Surface Area of Cube : "
    << 4 * Shape_Square::Area_of_Square()
    << " square "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Cube::Show_Diagonal_of_Cube()
{
    std::cout 
    << "Diagonal of Cube : "
    << Shape_Square::Get_SquareSide() * sqrt(3)
    << " "
    << Shape_Square::get_Square_unit()
    << std::endl;
}