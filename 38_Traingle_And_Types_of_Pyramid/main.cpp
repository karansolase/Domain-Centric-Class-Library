#include "Rectangular_Pyramid.hpp"
#include "Square_Pyramid.hpp"
#include "Traingular_Pyramid.hpp"

#pragma comment(lib, "Rectangular_Pyramid.lib")
#pragma comment(lib, "Square_Pyramid.lib")
#pragma comment(lib, "Traingular_Pyramid.lib")

void Rectangular_Pyramid_Object();
void Square_Pyramid_Object();
void Traingular_Pyramid_Object();

int main (void)
{
    Rectangular_Pyramid_Object();
    std::cout << std::endl;

    Square_Pyramid_Object();
    std::cout << std::endl;
    
    Traingular_Pyramid_Object();

    return (0);
}

void Rectangular_Pyramid_Object()
{
    std::cout << "Rectangular Pyramid Object : " << std::endl;
    Shape_Rectangular_Pyramid* Pto_Rectangular_Pyramid_Object = new Shape_Rectangular_Pyramid(8, "Meters", 10, "Meters", 6, "Meters");

    Pto_Rectangular_Pyramid_Object->Show_Surface_Area_of_Rectangular_Pyramid();
    Pto_Rectangular_Pyramid_Object->Show_Volume_of_Rectangular_Pyramid();
    Pto_Rectangular_Pyramid_Object->Show_Slant_height_of_Rectangular_Pyramid();
    Pto_Rectangular_Pyramid_Object->Show_Perimeter_of_Base_or_Rectangular_Pyramid();

    delete Pto_Rectangular_Pyramid_Object;
    Pto_Rectangular_Pyramid_Object = 0;
}

void Square_Pyramid_Object()
{
    std::cout << "Square Pyramid Object : " << std::endl;
    Shape_Square_Pyramid* Pto_Square_Pyramid_Object = new Shape_Square_Pyramid(6, "Meters", 8, "Meters");

    Pto_Square_Pyramid_Object->Show_Base_Area_of_Square_Pyramid();
    Pto_Square_Pyramid_Object->Show_Lateral_Surface_Area_of_Square_pyramid();
    Pto_Square_Pyramid_Object->Show_Total_Surface_Area_of_Square_Pyramid();
    Pto_Square_Pyramid_Object->Show_Slant_Height_of_Square_Pyramid();
    Pto_Square_Pyramid_Object->Show_Volume_of_Square_Pyramid();

    delete Pto_Square_Pyramid_Object;
    Pto_Square_Pyramid_Object = 0;
}

void Traingular_Pyramid_Object()
{
    std::cout << "Traingular Pyramid Object : " << std::endl;
    Shape_Traingular_Pyramid* pto_Traingular_Pyramid_Object = new Shape_Traingular_Pyramid(4, "Meters", 4, "Meters", 4, "Meters", 4, "Meters");

    pto_Traingular_Pyramid_Object->show_Volume_of_Traingular_Pyramid();
    pto_Traingular_Pyramid_Object->show_Surface_Area_of_Triangular_Pyramid();
    pto_Traingular_Pyramid_Object->show_Total_Surface_Area_of_Triangular_Pyramid();
    pto_Traingular_Pyramid_Object->show_Slant_Height_Traingular_Pyramid();
    
    delete pto_Traingular_Pyramid_Object;
    pto_Traingular_Pyramid_Object = 0;
}