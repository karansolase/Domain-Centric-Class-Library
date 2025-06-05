#include "Traingle.hpp"

Shape_Traingle::Shape_Traingle(
    double _height_of_traingle, std::string unit_of_height_of_traingle,
    double _base_or_side_1_of_traingle, std::string unit_of_base_of_side_of_traingle,
    double _side_2_of_traingle, std::string unit_of_side_2_of_traingle,
    double _side_3_of_traingle, std::string unit_of_side_3_of_traingle)   :

    Shp_Traingle_Height(0, ""),
    Shp_Traingle_Base_or_Side_1(0, ""),
    Shp_Traingle_Side_2(0,""),
    Shp_Traingle_Side_3(0,"")
{
    if(
        (_base_or_side_1_of_traingle + _side_2_of_traingle) <= _side_3_of_traingle ||
        (_side_2_of_traingle +_side_3_of_traingle)          <= _base_or_side_1_of_traingle || 
        (_base_or_side_1_of_traingle + _side_3_of_traingle) <= _side_2_of_traingle 
    )
    {
        std::cout << "Given Inputs Cannot Form a Valid Traingle. Exiting....";
        exit(EXIT_FAILURE);
    }

    Shp_Traingle_Base_or_Side_1.m_First_Value = _base_or_side_1_of_traingle;
    Shp_Traingle_Base_or_Side_1.m_String_Object_1 = unit_of_base_of_side_of_traingle;

    Shp_Traingle_Side_2.m_First_Value = _side_2_of_traingle;
    Shp_Traingle_Side_2.m_String_Object_1 = unit_of_side_2_of_traingle;

    Shp_Traingle_Side_3.m_First_Value = _side_3_of_traingle;
    Shp_Traingle_Side_3.m_String_Object_1 = unit_of_side_3_of_traingle;
}

double Shape_Traingle::Get_Traingle_Base()
{
    return Shp_Traingle_Base_or_Side_1.m_First_Value;
}

double Shape_Traingle::Get_Traingle_Height()
{
    return Shp_Traingle_Height.m_First_Value;
}

double Shape_Traingle::Calculate_Area_of_Traingle()
{
    return (double)1/2 * Get_Traingle_Base() * Get_Traingle_Height();
}

double Shape_Traingle::Calculate_Perimeter()
{
    double Perimeter_Of_Traingle = 
    Shp_Traingle_Base_or_Side_1.m_First_Value   + 
    Shp_Traingle_Side_2.m_First_Value           + 
    Shp_Traingle_Side_3.m_First_Value;

    return Perimeter_Of_Traingle;
}

std::string Shape_Traingle::get_Traingle_unit()
{
    return Shp_Traingle_Base_or_Side_1.m_String_Object_1;
}

void Shape_Traingle::show_Area_of_Traingle()
{
    std::cout 
    << "Area of Traingle : " 
    << Calculate_Area_of_Traingle()
    << " square "
    << get_Traingle_unit()
    << std::endl;
}

void Shape_Traingle::show_Perimeter_of_Traingle()
{
    std::cout 
    << "Perimeter of Traingle : "
    << Calculate_Perimeter()
    << " "
    << get_Traingle_unit()
    << std::endl;
}


