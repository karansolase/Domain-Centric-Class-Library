#include "Rectangle.hpp"

Shape_Rectangle::Shape_Rectangle(
    double _length_of_rectangle, std::string _unit_of_length_of_rectangle,
    double _breadth_of_rectangle, std::string _unit_of_breadth_of_rectangle)   :

    Shp_Rectangle_Length(0, ""),
    Shape_Rectangle_Breadth(0, "")
{
    if(_length_of_rectangle <= 0.0 || _breadth_of_rectangle <= 0.0)
    {
        std::cout << "Input For Rectangular Pyramid Cannot be Negative or Equal to Zero. Exiting...";
        exit(EXIT_FAILURE);
    }

    Shp_Rectangle_Length.m_First_Value = _length_of_rectangle;
    Shp_Rectangle_Length.m_String_Object_1 = _unit_of_breadth_of_rectangle;

    Shape_Rectangle_Breadth.m_First_Value = _breadth_of_rectangle;
    Shape_Rectangle_Breadth.m_String_Object_1 = _unit_of_breadth_of_rectangle;
}

double Shape_Rectangle::Get_Rectangle_Length()
{
    return Shp_Rectangle_Length.m_First_Value;
}

double Shape_Rectangle::Get_Rectangle_Breadth()
{
    return Shape_Rectangle_Breadth.m_First_Value;
}

double Shape_Rectangle::Calculate_Area_of_Rectangle()
{
    return Get_Rectangle_Length() * Get_Rectangle_Breadth();
}

double Shape_Rectangle::Calculate_Perimeter_of_Rectangle()
{
    return 2 * (Get_Rectangle_Length() + Get_Rectangle_Breadth());
}

std::string Shape_Rectangle::Get_Rectangle_unit()
{
    return Shape_Rectangle_Breadth.m_String_Object_1;
}

void Shape_Rectangle::show_Area_of_Rectangle()
{
    std::cout 
    << "Area of Rectangle : "
    << Get_Rectangle_Length() * Get_Rectangle_Breadth()
    << " square "
    << Get_Rectangle_unit()
    << std::endl; 
}

void Shape_Rectangle::show_Perimeter_of_Rectangle()
{
    std::cout 
    << "Area of Rectangle : "
    << 2 * (Get_Rectangle_Length() + Get_Rectangle_Breadth())
    << " "
    << Get_Rectangle_unit()
    << std::endl;
}

void Shape_Rectangle::show_Diagonal_of_Rectangle()
{
    double Length_Square = Get_Rectangle_Length() * Get_Rectangle_Length();
    double Breadth_Square = Get_Rectangle_Breadth() * Get_Rectangle_Breadth();

    std::cout 
    << "Diagonal of Rectangle : "
    << sqrt(Length_Square + Breadth_Square)
    << " "
    << Get_Rectangle_unit()
    << std::endl;
}

