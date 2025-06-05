#include "LightBill.hpp"

#pragma comment(lib, "LightBill.obj")

int main (void)
{
    LightBill LightBill_Shekhar_Vidhate(
        "Mr.", "Shekhar", "Shankar", "Vidhate",

        "H.No 664",
        {"Behind Bhandari Cement Godwan", "Vijyaline", "Naykunagar"},
        "Bhingar",
        "Ahilyanagar",
        "Maharashtra",
        414002,

        "ShekharVidhate98@gmail.com",
        {
            {"Phone No.", 96325874120}
        },

        "000002704411170",

        "December", 2024,

        162011398910,
        27160000,

        "4204/Ahilyanagar U-I S/DN",
        "90/LT I Res 1-Phase",
        "00000008",
        "3/09/0211/3445/4204211",
        "09802121019",
        "T3",

        24,02,2014,

        0.78,"kW",

        1112.87,

        20,12,2024,
        20,11,2024,

        15549,
        15442,
        1.0,
        107,
        0,

        "Normal",

        1.0,"/",

        {
            {"November", 2024,101},
            {"October",  2024,117},
            {"September",2024,110},
            {"August",   2024,118},
            {"July",     2024,106},
            {"June",     2024,112},
            {"May",      2024,113},
            {"April",    2024,104},
            {"March",    2024,94},
            {"February", 2024,128},
            {"January",  2024,118}
        },
        {
            {"December", 2023,141},
            {"December", 2024,107}
        },

        25,12,2024,
        1000,

        3,1,2025,
        990,

        14,01,2025,
        1010,

        138.00,
        543.03,
        125.19,
        50.60,
        137.09,
        0.0,
        0.0,
        0.0,

        8.58,
        0.0,
        0.0,

        6,12,2024,

        2020,12.42,

        "27AAECM2933K1ZB",
        {
            {
                1,
                6,12,2024,
                2020
            },
            {
                2,
                16,8,2024,
                4170
            },
            {
                3,
                22,6,2024,
                1090
            },
            {
                4,
                6,5,2024,
                1680
            },
            {
                5,
                18,3,2024,
                1180
            },
            {
                6,
                8,2,2024,
                1040
            }
        }
    );

    std::cout << LightBill_Shekhar_Vidhate;

    return 0;
}