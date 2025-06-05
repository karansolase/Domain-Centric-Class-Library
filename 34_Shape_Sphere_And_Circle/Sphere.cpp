#include "Sphere.hpp"

Shape_Sphere::Shape_Sphere(double _radius_of_sphere, std::string unit_of_radius)
:    Shape_Circle(_radius_of_sphere, unit_of_radius)
{
}

double Shape_Sphere::Calculate_Sphere_Surface_Area_OF_Sphere()
{
    double Area_OF_Circle = Shape_Circle::Calculate_Circle_Area();
    return 4 * Area_OF_Circle;
}

void Shape_Sphere::Display_Sphere_Surface_Area_OF_Sphere()
{
    std::cout << "Sphere Surface Area of Sphere : " << this->Calculate_Sphere_Surface_Area_OF_Sphere() << " Square " << this->get_unit() << std::endl;
}

double Shape_Sphere::Calculate_Volume_OF_Sphere()
{
    double Area_OF_Circle = Shape_Circle::Calculate_Circle_Area();
    return 4/3 * Area_OF_Circle; 
}

void Shape_Sphere::Display_Volume_of_Sphere()
{
    std::cout << "Volume of Sphere : " << this->Calculate_Volume_OF_Sphere() << " cubic " << this->get_unit() << std::endl;
}

double Shape_Sphere::Get_Sphere_Diameter()
{
    return Shape_Circle::Get_Circle_Radius() * 2;
}

void Shape_Sphere::Display_Sphere_Diameter()
{
    std::cout << "Sphere Diameter : " << this->Get_Circle_Radius() * 2 << " " << this->get_unit() << std::endl;
}

