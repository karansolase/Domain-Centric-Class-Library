#include "Marksheet.hpp"

int main (void)
{
    Marksheet Shekhar_Vidhate(
        "Maharashtra State Board of Secondary and Higher Secondary Education",
        "Pune Divisional Board",

        "Commerce",
        "P224162",
        "0213",
        "12.05.006",

        "March",2022,

        148978,

        "Vidhate","Shekhar","Jalindar",
        "Sunanda",
        
        {
            {
                "01",
                "ENGLISH",
                "ENGLISH",
                100,
                {69}
            },
            {
                "49",
                "ECONOMICS",
                "ENGLISH",
                100,
                {73}
            },
            {
                "50",
                "BOOK KEEPING AND ACCOUNTANCY",
                "ENGLISH",
                100,
                {62}
            },
            {
                "52",
                "SECRETERIAL PRACTICE",
                "ENGLISH",
                100,
                {60}
            },
            {
                "88",
                "MATHS & STAT.(COMMERCE)",
                "ENGLISH",
                100,
                {66}
            },
            {
                "99",
                "INFORMTAION TECHNOLOGY (COM)",
                "ENGLISH",
                100,
                {95}
            },
            {
                "31",
                "ENV. EDU & WATER SECURITY",
                "ENGLISH",
                0.0,
                {"A"}
            },
            {
                "30",
                "HEALTH & PHYSICAL EDUCATION",
                "ENGLISH",
                0,
                {"A"}
            } 
        },

        35.0
    );

    std::cout << Shekhar_Vidhate;
}
