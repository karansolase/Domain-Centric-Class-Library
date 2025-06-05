#include "Rectangular_Pyramid.hpp"

Shape_Rectangular_Pyramid::Shape_Rectangular_Pyramid
(
    double _height_of_Pyramid, 
    std::string _unit_of_height_of_pyramid,
        
    double _Length_of_rectangular_area_of_pyramid, 
    std::string _unit_of_length_of_rectangular_area_of_pyramid,
        
    double _Breadth_of_rectangular_area_of_pyramid,
    std::string _unit_of_breadth_of_rectangular_area_of_pyramid 
)
:   R_Pyramid_Height(0, ""),
    Shape_Rectangle(
        _Length_of_rectangular_area_of_pyramid,
        _unit_of_length_of_rectangular_area_of_pyramid,

        _Breadth_of_rectangular_area_of_pyramid,
        _unit_of_breadth_of_rectangular_area_of_pyramid)
{
    if(_height_of_Pyramid <= 0.0)
    {
        std::cout << "Input for Rectangular Pyramid Cannot be Negative or Equal to Zero. Exiting....";
        exit(EXIT_FAILURE);
    }

    R_Pyramid_Height.m_First_Value = _height_of_Pyramid;
    R_Pyramid_Height.m_String_Object_1 = _unit_of_height_of_pyramid;
}

double Shape_Rectangular_Pyramid::Get_Height_of_Rectangular_Pyramid()
{
    return R_Pyramid_Height.m_First_Value;
}

double Shape_Rectangular_Pyramid::Calculate_Slant_Height_of_Rectangular_Pyramid()
{
    double Height_Square = 
    Get_Height_of_Rectangular_Pyramid() * 
    Get_Height_of_Rectangular_Pyramid();

    double Length_Element = 
    (Shape_Rectangle::Get_Rectangle_Breadth()/2) * 
    (Shape_Rectangle::Get_Rectangle_Breadth()/2);

    double Breadth_Element = 
    (Shape_Rectangle::Get_Rectangle_Length()/2) * 
    (Shape_Rectangle::Get_Rectangle_Length()/2); 

    return sqrt(Length_Element + Breadth_Element + Height_Square);
}

void Shape_Rectangular_Pyramid::Show_Surface_Area_of_Rectangular_Pyramid()
{
    double Slant_Height_Along_Breadth = sqrt
    (((Shape_Rectangle::Get_Rectangle_Length()/2) * 
    (Shape_Rectangle::Get_Rectangle_Length()/2))  +
    (Get_Height_of_Rectangular_Pyramid() * Get_Height_of_Rectangular_Pyramid()));
    
    double Slant_height_Along_Length = sqrt
    (((Shape_Rectangle::Get_Rectangle_Breadth()/2) * 
    (Shape_Rectangle::Get_Rectangle_Breadth()/2))  +
    (Get_Height_of_Rectangular_Pyramid() * Get_Height_of_Rectangular_Pyramid()));

    double Surface_Area_of_Rectangular_Pyramid = 
    Shape_Rectangle::Calculate_Area_of_Rectangle() + 
    (2 * (double)1/2 * Get_Rectangle_Length() * Slant_height_Along_Length)  +
    (2 * (double)1/2 * Get_Rectangle_Breadth() * Slant_Height_Along_Breadth); 

    std::cout 
    << "Surface Area of Rectangular Pyramid : "
    << Surface_Area_of_Rectangular_Pyramid
    << " square "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl; 
}

void Shape_Rectangular_Pyramid::Show_Volume_of_Rectangular_Pyramid()
{
    double Volume_of_Pyramid = 
    (double)1/3 * 
    Shape_Rectangle::Calculate_Area_of_Rectangle() *
    Get_Height_of_Rectangular_Pyramid();
    
    std::cout 
    << "Volume of Rectangular Pyramid : "
    << Volume_of_Pyramid
    << " cubic "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

void Shape_Rectangular_Pyramid::Show_Slant_height_of_Rectangular_Pyramid()
{
    std::cout
    << "Slant Height of Rectangular Pyramid : "
    << Calculate_Slant_Height_of_Rectangular_Pyramid()
    << " "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

void Shape_Rectangular_Pyramid::Show_Perimeter_of_Base_or_Rectangular_Pyramid()
{
    std::cout 
    << "Perimeter of Base of Pyramid : "
    << Shape_Rectangle::Calculate_Perimeter_of_Rectangle()
    << " "
    << Shape_Rectangle::Get_Rectangle_unit()
    << std::endl;
}

