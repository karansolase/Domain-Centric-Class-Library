#include "Sphere.hpp"

#pragma comment(lib, "Sphere.lib")
#pragma comment(lib, "Circle.lib")

void Sphere_Object();
void Circle_Object();

int main (void)
{
    Sphere_Object();
    std::cout << std::endl;
    Circle_Object();

    return (0);
}

void Sphere_Object()
{
    std::cout << "Sphere Object() : " << std::endl;
    Shape_Sphere* P_To_FootBall = new Shape_Sphere(5, "Centimeters");
    
    P_To_FootBall->Display_Sphere_Surface_Area_OF_Sphere();
    P_To_FootBall->Display_Volume_of_Sphere();
    P_To_FootBall->Display_Sphere_Diameter();

    delete P_To_FootBall;
    P_To_FootBall = 0;
}

void Circle_Object()
{
    std::cout << "Circle object() : " << std::endl;
    Shape_Circle* P_To_Disc = new Shape_Circle(8, "Centimeters");

    P_To_Disc->Display_Circle_Radius();
    P_To_Disc->Display_Circle_Diameter();
    P_To_Disc->Display_Circle_Area();
    P_To_Disc->Display_Circle_Circumference();
    P_To_Disc->Display_Circle_Chord_Length(4);

    delete P_To_Disc;
    P_To_Disc = 0;
}