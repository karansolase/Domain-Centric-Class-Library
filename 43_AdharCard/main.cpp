#include "AdharCard.hpp"

#pragma comment(lib, "AdharCard.lib")

int main (void)
{
    AdharCard Shekhar_Vidhate(
        "Shekhar", "Jalinder", "Vidhate",

        "H No. 664", 
        {"VijayLine", "NaykuNagar",},
        "Bhingar",
        "Ahilyanagar",
        "Maharashtra",
        414002,
        "India",

        1,3,2004,

        "Male",

        782563587411,
        9625745820256544,

        8,9,2021,
        1,9,2021,
        16,9,2021
    );

    std::cout << Shekhar_Vidhate;
}