#include "Cylinder.hpp"

#pragma comment(lib, "Cylinder.lib")

int main (void)
{
    Shape_Cylinder* P_To_WaterCan = new Shape_Cylinder(15, "Centimeters", 50, "Centimeters");

    P_To_WaterCan->Show_Volume_of_Cylinder();
    P_To_WaterCan->Show_Curved_Surface_Area_of_Cylinder();
    P_To_WaterCan->Show_Total_Surface_Area_of_Cylinder();

    delete P_To_WaterCan;
    P_To_WaterCan = 0;
}