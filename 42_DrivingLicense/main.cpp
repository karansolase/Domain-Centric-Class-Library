#include "DrivingLicense.hpp"

#pragma comment(lib, "DrivingLicense.lib")

int main(void)
{
    Driving_License Shekhar_Vidhate(
        "Maharashtra State Motor Driving License",

        "MH",16,
        2009,
        "0006204",

        13,4,1989,

        14,1,2027,
        "TR",
        
        "TRANS LMV-TR",

        "Mr",
        "Shekhar",
        "Jalindar",
        "Vidhate",

        "Jalindar",

        "H No. 664",
        {"VijayLine", "NaykuNagar"},
        "Bhingar",
        "AhilyaNagar",
        "Maharashtra",
        414002,

        12,5,1968,
        "AB-"
    );

    std::cout << Shekhar_Vidhate;
}