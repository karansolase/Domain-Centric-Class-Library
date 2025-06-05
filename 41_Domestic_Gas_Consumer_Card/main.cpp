#include "Domestic_gas_Consumer_Card.hpp"

#pragma Comment(lib, "Domestic_Gas_Consumer_Card.lib")

int main (void)
{
    DGCC Shekhar_Vidhate(
        852369,
        625305,

        1014082,
        9,12,11,

        1,
        "Rs",
        1250,

        1,
        "Rs",
        150,

        "Mr.",
        "Shekhar",
        "Shankar",
        "Vidhate",

        "H.no 664",
        {"Behind Bhandari Cement Godwan", "Vijayline", "NaykuNagar"},
        "Bhingar",
        "Ahilyanagar",
        "Maharashtra",
        414002,
        "India",

        "41048034",

        "Mamta Gas Enterprises",

        "5",
        {"Gulmohar Road", "Savedi"},
        "",
        "Ahilyanagar",
        "Maharahstra",
        414003,
        "India",

        {
            {"Phone No. (0241)", 2425006},
            {"Phone No. (0241)", 2426524}
        },

        "HP Gas",

        10,6,2025,

        {
            {
                1,
                512635,
                "2025-04-0001",
                1,1,2025
            },
            {
                1,
                570621,
                "2025-56-0256",
                1,2,2025
            },
            {
                1,
                508808,
                "2125-96-3658",
                1,3,2025
            },
            {
                1,
                544999,
                "3485-96-0012",
                1,4,2025
            },
            
            {
                1,
                425967,
                "2365-85-8547",
                1,5,2025
            }
        }
    );

    std::cout << Shekhar_Vidhate;

    return 0;
}