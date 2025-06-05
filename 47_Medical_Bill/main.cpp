#pragma comment(lib, "MedicalBill.lib")

#include "Medical_Bill.hpp"

int main (void)
{
    MedicalBill Shekhar_Vidhate(
        "4th Floor, Millennium Star Extension",
        {"Adjacent To Ruby Hall", "Dhole Patil Road"},
        "",
        "Pune",
        411001,
        "Maharashtra",

        18145,
        4,12,2021,

        "Mr", "Shekhar", "Jalindar", "Vidhate",

        "",
        "Ahilyanagar, Maharashtra",
        "Male",

        51,"Years",

        "HHC/2021/6510/IP15140",
        "Semi Private Room",

        3,12,2021,
        8,0,"AM",

        4,12,2021,
        2,30,"PM",

        {
            {33445},
            {11993},
            {8443}
        },
        {
            {10989},
            {4487},
            {3159}
        },
        {
            {"OT Charges", 6000},
            {"Bed Charges [1500 x 2]", 3000},
            {"Medico{Hospital}", 5204},
            {"Medico{OT}", 5735},
            {"Doctors Visit{1000 x 3}", 3000},
            {"Lab", 0},
            {"Colonscopy", 0},
            {"Colon Hydrotherapy", 0},
            {"Physiotherapist and Diet", 0},
            {"3D Mesh Quantity - 1", 60000},
            {"PPE Kit", 3000},
            {"Administrative Charges", 1000},
            {"Nursing Charges (200 x 2)", 400}
        },

        5000,
        50000
    );

    std::cout << Shekhar_Vidhate;

    return 0;
}