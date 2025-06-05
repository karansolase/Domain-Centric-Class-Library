#include <cstdio>
#include "SMARTPHONE.hpp"

#pragma comment(lib, "Smartphone.lib")

int main (void){
    SmartPhone Samsung_M34(
        "Samsung Galaxy M34 5G",
        "Samsung",
        "Samsung Galaxy M34 5G",

        {
            {"Colour and Storage",{
            {"Prism Silver (6GB + 128GB)", 14999},
            {"Waterfall Blue (6GB + 128GB)"}, 
            {"Midnight Blue (6GB + 128GB)"}, 
            {"8GB + 128GB", 16999},
            }}
        },

        6.5, 
        {"Inch", 
        "SUPER AMOLED Display | 1080 x 2340 Pixels | Corning Gorilla Glass"},

        {"50MP + 8MP + 2MP Triple Camera Setup",
        "Front Camera : 13MP"},
        {"OIS and Nightography",
        "AR Zone",
        "Bixby Vision",
        "Hyperlaps",
        "Panaroma",
        "Pro Video",
        "Single Take"},
        "LED",

        6000,{"mAH"},
        "Lithium Ion", 
        0,{""},
        "Type C", 
        25, {"Watt"},
        89,{"Minute"},
        8,{"GB", "RAM"}, 
        256, {"GB", "Storage"},
        120,{"Hz"},

        "4th Generation of OS Upgrades and 5 years of Security Updates",
        "",
        {{"Exynos"},1280,4},
        
        2.40,{"GHz"},
        "",19,":",9,"",
        0,{"Auto"},
        100,{"ms"},
        {{"Android"},14,4},

        "Core",

        {"AnTuTu Score 595K+",
        "Built-in GPS",
        "Dual Sim",
        "Expandable Memory",
        "Stereo Speakers"},
        "Dual-Nano",
        "Unlocked for All Carriers",
        "5G",
        {"Bluetooth", "USB", "Wi-fi", "NFC"},
        {"GSM", "LTE", "Wi-fi"},
        "Fingerprint Recognition",

        3.5,{"mm"},
        "Dual Sim",

        1080, 2340, "", "",
        "",
        "Bar",
        50, {"megapixels"},

        "Touchscreen",
        "Nano",
        "plasTic",
        "True",
        "Not Water resistant",
        {""},

        1080, {"p"},
        0,{""},
        0,{""},
        8,{"pixels"},

        {
            {4, {"k"}},
            {1080, {"p"}},
        },

            "BOC7C1DRK5",

            {
                {"Samsung India Electronics Pvt Ltd,"},    
                {
                    "6th Floor",
                    {"DLF Center", "Sansad Marg"},
                    "",
                    "New Delhi",
                    "Delhi",
                    110001,
                    "India"
                }, 
                "support.india@samsung.com", 
                {{1800407267864}},
            },
            {2023},

            {
                {1, {"year", "for Device"}},
                {6, {"Months","for Accessories including Batteries from the date of purchase"}}
            },
            "China",
            "No Info",

            4.0, 
            16899,

            {"#107 in Electronics", 
            "#25 in Smartphones"},

            {01, "July", 2023},

            {
                {"Samsung India Electronics Pvt Ltd,"},
                {
                    "6th Floor",
                    {"DLF Center", "Sansad Marg"},
                    "",
                    "New Delhi",
                    "Delhi",
                    110001,
                    "India"
                }, 
                "",
                {{""}}
            },

            {
                {"Samsung India Electronics Pvt Ltd,"},
                {
                    "6th Floor",
                    {"DLF Center", "Sansad Marg"},
                    "",
                    "New Delhi",
                    "Delhi",
                    110001,
                    "India"
                }, 
                "",
                {{""}}
            },

            {"Data Cable(USB Type C-to-C)", 
            "SIM Tray Ejector Pin",
            "Quick Start Guide"},

            0.9, 7.7, 16.2, "cm", "(L x W x H)",
            0.0, 0.0, 0.0, "", "",

            208, {"gram"},
            1, {"Count"},
            {"Smartphone"}
    );

    std::cout << Samsung_M34;

    return EXIT_SUCCESS;
}
