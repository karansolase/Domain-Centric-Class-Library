#include "Square.hpp"

Shape_Square::Shape_Square(
    double _Side_of_Square,
    std::string unit_of_Side_of_Square)   :

    Shp_Square_Side(0, "")
{
    if(_Side_of_Square <= 0.0)
    {
        std::cout << "Side of Square or Cube Cannot be Negative or Equal to Zero. Exiting...";
        exit(EXIT_FAILURE);
    }

    Shp_Square_Side.m_First_Value = _Side_of_Square;
    Shp_Square_Side.m_String_Object_1 = unit_of_Side_of_Square;
}


double Shape_Square::Get_SquareSide()
{
    return Shp_Square_Side.m_First_Value;
}

double Shape_Square::Area_of_Square()
{
    return Get_SquareSide() * Get_SquareSide();
}

std::string Shape_Square::get_Square_unit()
{
    return Shp_Square_Side.m_String_Object_1;
}

void Shape_Square::show_Area_of_Square()
{
    std::cout 
    << "Area of Square : " 
    << Area_of_Square()
    << " square " 
    << Get_SquareSide()
    << std::endl;
}

void Shape_Square::show_Perimeter_of_Square()
{
    std::cout 
    << "Perimeter of Square : "
    << 4 * Get_SquareSide()
    << " "
    << Get_SquareSide()
    << std::endl;
}

void Shape_Square::show_Diagonal_of_Square()
{
    std::cout 
    << "Diagonal of Square : "
    << Get_SquareSide() * sqrt(2)
    << " "
    << Get_SquareSide()
    << std::endl;
}