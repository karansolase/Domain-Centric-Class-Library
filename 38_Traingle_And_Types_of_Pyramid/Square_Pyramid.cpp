#include "Square_Pyramid.hpp"

Shape_Square_Pyramid::Shape_Square_Pyramid(
    double base_of_square_pyramid, std::string unit_of_base_square_pyramid,
    double height_of_square_pyramid, std::string unit_of_height_of_square_pyramid)   :

    Shape_Square(base_of_square_pyramid, unit_of_base_square_pyramid),
    S_Pyramid_Height(0, "")
{
    if(height_of_square_pyramid <= 0.0)
    {
        std::cout << "Inputs for Square Pyramid Cannot be Negative or Equal to Zero. Exiting ...";
        exit(EXIT_FAILURE);
    }

    S_Pyramid_Height.m_First_Value = height_of_square_pyramid;
    S_Pyramid_Height.m_String_Object_1 = unit_of_height_of_square_pyramid;
}

double Shape_Square_Pyramid::Get_Height_of_Square_Pyramid()
{
    return S_Pyramid_Height.m_First_Value;
}

double Shape_Square_Pyramid::Calculate_Slant_Height_of_Square_Pyramid()
{
    double First_Element = (Shape_Square::Get_SquareSide()/2) * (Shape_Square::Get_SquareSide()/2);
    double Second_Element = Get_Height_of_Square_Pyramid() * Get_Height_of_Square_Pyramid();

    return sqrt(First_Element + Second_Element);
}

void Shape_Square_Pyramid::Show_Base_Area_of_Square_Pyramid()
{
    std::cout 
    << "Base Area of Square Pyramid : "
    << Shape_Square::Area_of_Square()
    << " square "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Square_Pyramid::Show_Lateral_Surface_Area_of_Square_pyramid()
{
    double Lateral_Surface_Area_of_Square_Pyramid =
    4 * ( (double)1/2 * Shape_Square::Get_SquareSide() * Calculate_Slant_Height_of_Square_Pyramid()); 

    std::cout 
    << "Lateral Surface Area of Square Pyramid : "
    << Lateral_Surface_Area_of_Square_Pyramid
    << " square "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Square_Pyramid::Show_Total_Surface_Area_of_Square_Pyramid()
{
    double Total_Surface_Area_of_Pyramid = 
    2 * Shape_Square::Get_SquareSide() * Calculate_Slant_Height_of_Square_Pyramid()
    + Shape_Square::Get_SquareSide() * Shape_Square::Get_SquareSide();
    
    std::cout 
    << "ToTal Surface Area of Square Pyramid : "
    << Total_Surface_Area_of_Pyramid
    << " square "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Square_Pyramid::Show_Slant_Height_of_Square_Pyramid()
{
    std::cout 
    << "Slant Height of Square Pyramid : "
    << Calculate_Slant_Height_of_Square_Pyramid()
    << " "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

void Shape_Square_Pyramid::Show_Volume_of_Square_Pyramid()
{
    double Volume_of_Square_Pyramid = 
    (double)1/3 * Shape_Square::Area_of_Square() * 
    Get_Height_of_Square_Pyramid();

    std::cout 
    << "Volume of Square Pyramid : "
    << Volume_of_Square_Pyramid
    << " cubic "
    << Shape_Square::get_Square_unit()
    << std::endl;
}

