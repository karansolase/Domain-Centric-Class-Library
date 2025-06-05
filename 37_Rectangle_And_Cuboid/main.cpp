#include "Cuboid.hpp"
#include "Rectangle.hpp"

#pragma comment(lib, "Cuboid.lib")
#pragma comment(lib, "Rectangle.lib")

void Rectangle_Object();
void Cuboid_Object();

int main (void)
{
    Rectangle_Object();
    std::cout << std::endl;
    Cuboid_Object();

    return (0);
}

void Rectangle_Object()
{
    Shape_Rectangle* Pto_Rectangle_Object = new Shape_Rectangle(10, "Centimeters", 6, "Centimeters");

    Pto_Rectangle_Object->show_Area_of_Rectangle();
    Pto_Rectangle_Object->show_Perimeter_of_Rectangle();
    Pto_Rectangle_Object->show_Diagonal_of_Rectangle();

    delete Pto_Rectangle_Object;
    Pto_Rectangle_Object = 0;
}

void Cuboid_Object()
{
    Shape_Cuboid* Pto_Cuboid_Object = new Shape_Cuboid(10, "Centimeters", 6, "Centimeters", 8, "Centimeters");

    Pto_Cuboid_Object->Show_Lateral_Surface_Area_of_Cuboid();
    Pto_Cuboid_Object->Show_Total_Surface_Area_of_Cuboid();
    Pto_Cuboid_Object->Show_Volume_of_Cuboid();
    Pto_Cuboid_Object->Show_Diagonal_of_Cuboid();
    Pto_Cuboid_Object->Show_Perimeter_of_Cuboid();

    delete Pto_Cuboid_Object;
    Pto_Cuboid_Object = 0;
}