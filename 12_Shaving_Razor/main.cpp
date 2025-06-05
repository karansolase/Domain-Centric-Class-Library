#include "razor.hpp"

#pragma comment(lib, "Razor.lib")

int main(void){
    ShavingRazor pearl(
        "Pearl Shaving Double Edge Safety Razor",
        "Pearl",
        1,
        5,

        {
            {"Model, Colour, and Price", {
                {"SS-01CC With stand And Shaving", 748},
                {"SS -01 Blush Wine", 479},
                {"SS -01 CC (CHROME)", 387},
                {"SS-01 CC(GOLD BLACK)", 479},
                {"SS-01 CLOSE COMB with STAND", 699},
                {"SS-01 Mellow Apricot", 479}
            }}
        },

        {"All"},
        {"All"},
        "Adult Use",
        {"metal finish and rubber grips for enhanced control"},

        {""},
        {"facial hair."},
        {"Made in india",
        "Double Edge",
        "Travel Size",
        "Reusable"},
        {"Read Manual Before Use"},
        {"Metals"},

            "BOB54P3N5F",

            {
                {"Madhav Metal Industries"},
                {
                    "",
                    "Jamnagar",
                    "Gujrat",
                    361006, 
                    "INDIA"
                },
                "",
                {{8000778283}}
            },
            {0},

            {
                {0.0,{""}}
            },
            "India",
            "ss",

            4.2, 3871,
            {"#1232 in Health and Personal Care",
            "#1 in Men's Safety Razors"},

            {0, "/", 0, "/", 0},

            {
                {"Madhav Metal Industries"},
                {
                    "",
                    "Jamnagar",
                    "Gujrat",
                    361006, 
                    "INDIA"
                },
                "",
                {{8000778283}}
            },

            {""},

            {
                "handle",
                "Blades",
                "razor cap"
            },

            10, 2, 2.7, "Centimeters", "",
            10, 2, 2.7, "Centimeters", "",

            130, {"gram"},
            1, {"Count"},
            {"Safety Razor"}
    );

    std::cout << pearl;

    return 0;
}