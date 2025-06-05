#include "Traingular_Pyramid.hpp"

Shape_Traingular_Pyramid::Shape_Traingular_Pyramid(
    double _height_of_pyramid_from_Apex,std::string unit_of_height_of_pyramid_from_Apex,
    double _base_or_side_1_of_traingle, std::string unit_of_base_or_side_1_of_traingle,
    double _side_2_of_traingle ,        std::string unit_of_side_2_of_traingle,
    double _side_3_of_traingle,         std::string unit_of_side_3_of_traingle)    :

    T_Pyramid_Height_From_Apex(0,""),
    Shape_Traingle(
        0,                               "",
        _base_or_side_1_of_traingle,     unit_of_base_or_side_1_of_traingle,
        _side_2_of_traingle,             unit_of_side_2_of_traingle,
        _side_3_of_traingle,             unit_of_side_3_of_traingle)
{
    if(_height_of_pyramid_from_Apex <= 0.0)
    {
        std::cout << "Height of Traingular Pyramid cannot be Negative or Equal to 0. Exiting.....";
        exit(EXIT_FAILURE);
    }    

    T_Pyramid_Height_From_Apex.m_First_Value = _height_of_pyramid_from_Apex;
    T_Pyramid_Height_From_Apex.m_String_Object_1 = unit_of_height_of_pyramid_from_Apex;

    double First_Element = T_Pyramid_Height_From_Apex.m_First_Value * T_Pyramid_Height_From_Apex.m_First_Value;
    double Second_Element = (Shape_Traingle::Get_Traingle_Base() / 2) * (Shape_Traingle::Get_Traingle_Base() / 2);

    Shp_Traingle_Height.m_First_Value = sqrt(First_Element + Second_Element);
    Shp_Traingle_Height.m_String_Object_1;
}

double Shape_Traingular_Pyramid::Get_Traingular_Pyramid_height_From_Apex()
{
    return T_Pyramid_Height_From_Apex.m_First_Value;
}

void Shape_Traingular_Pyramid::show_Volume_of_Traingular_Pyramid()
{
    double Volume_of_Pyramid = 
    (double)1/3 * Shape_Traingle::Calculate_Area_of_Traingle() * Get_Traingular_Pyramid_height_From_Apex();

    std::cout 
    << "Volume of Traingular Pyramid (Tetrahedon) : "
    << Volume_of_Pyramid
    << " cubic "
    << get_Traingle_unit()
    << std::endl;
}

void Shape_Traingular_Pyramid::show_Surface_Area_of_Triangular_Pyramid()
{
    double Surface_Area_of_Pyramid = 
    Shape_Traingle::Calculate_Area_of_Traingle() + double(1/2) *
    Shape_Traingle::Calculate_Perimeter() * Shape_Traingle::Get_Traingle_Height();

    std::cout 
    << "Surface Area of Traingular Pyramid (Tetrahedon)  : "
    << Surface_Area_of_Pyramid
    << " square "
    << get_Traingle_unit()
    << std::endl;
}

void Shape_Traingular_Pyramid::show_Total_Surface_Area_of_Triangular_Pyramid()
{
    double Total_Surface_Area_of_Pyramid = 4 * 
    (Shape_Traingle::Calculate_Area_of_Traingle() + double(1/2) *
    (Shape_Traingle::Calculate_Perimeter() * Shape_Traingle::Get_Traingle_Height()));

    std::cout 
    << "Total Surface Area of Traingular Pyramid (Tetrahedon)  : " 
    << Total_Surface_Area_of_Pyramid
    << " square "
    << get_Traingle_unit()
    << std::endl;
}

void Shape_Traingular_Pyramid::show_Slant_Height_Traingular_Pyramid()
{
    std::cout 
    << "Slant Height of Traingular Pyramid (Tetrahedon)  : "
    << Shp_Traingle_Height.m_First_Value
    << " "
    << get_Traingle_unit()
    << std::endl;
}