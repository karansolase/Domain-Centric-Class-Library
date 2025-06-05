#include "Square.hpp"
#include "Cube.hpp"

#pragma comment(lib, "Square.lib")
#pragma comment(lib, "Cube.lib")

void Square_Object();
void Cube_Object();

int main (void)
{
    Square_Object();
    std::cout << std::endl;
    Cube_Object();

    return 0;
}

void Square_Object()
{
    std::cout << "In Square Object : " << std::endl;
    
    Shape_Square* P_To_SquareObject = new Shape_Square(25, "Centimeters");

    P_To_SquareObject->show_Area_of_Square();
    P_To_SquareObject->show_Diagonal_of_Square();
    P_To_SquareObject->show_Perimeter_of_Square();

    delete P_To_SquareObject;
    P_To_SquareObject = 0;
}

void Cube_Object()
{
    std::cout << "In Cube Object : " << std::endl;

    Shape_Cube* P_To_CubeObject = new Shape_Cube(50, "Centimeters");

    P_To_CubeObject->Show_Volume_of_Cube();
    P_To_CubeObject->Show_Total_Surface_Area_of_Cube();
    P_To_CubeObject->Show_Lateral_Surface_Area_of_Cube();
    P_To_CubeObject->Show_Diagonal_of_Cube();

    delete P_To_CubeObject;
    P_To_CubeObject = 0;
}