#include "Cone.hpp"

#pragma comment(lib, "Cone.lib")

int main (void)
{
    Shape_Cone* P_To_BirthdayCap = new Shape_Cone(4, "Centimeters", 10, "Centimeters");

    P_To_BirthdayCap->show_volume_of_Cone();
    P_To_BirthdayCap->show_Lateral_Surface_Area_of_Cone();
    P_To_BirthdayCap->show_Total_Surface_Area_of_Cone();
    P_To_BirthdayCap->show_Slant_Height_of_Cone();

    delete P_To_BirthdayCap;
    P_To_BirthdayCap = 0;
}