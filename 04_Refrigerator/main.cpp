// Friger client Side

#include <iostream>
#include "Friger.hpp"

#pragma comment(lib, "Friger.lib")

int main (void){
    Friger samsung_500_L(
        "Samsung 500 L",
        "Samsung",

        {
        {"Size",{
            {580,{"L"},69990}
        }},

        {"colour",{
            {"Refined Inox"}
        }}, 

        {"pattern",{
            {"Solid"}
        }},  

        {"style",{
            {"With Offer"} 
        }},
        },
        
        550,{"litres"},
        186,{"litres"},
        364,{"litres"},

        3,
        3,
        3,
        2,
        2,
        6,
        20,{"Litre"},
        5,{"Bottle"},
        {100, "v", 300, "v", "-",""},
        "Toughened Glass",
        "No",
        {"Anti Bacterial Gasket"},

        "Full-Sized French Doors",
        "Frost Free",
        "Chrome",
        "Yes",
        {"Stainless Steel"},

        {
            "Energy Efficient",
            "Inverter Compressor",
            "Frost Free",
            "Automatic Defrost",
            "Low Noise",
            "Adjustable Shelves",
            "Large Capacity"
            "Up to 15 Days of Fresh Food",
            "Recess Handle",
            "Door Alarm",
            "Easy Clean Back",
            "Veg Box",
            "Big Bottle Guard (Deep Door Guard)",
            "LED Light"
        },
        {
            "Smart Diagnosis",
            "Twin Cooling",
            "Fresh Zone"
        },
        {
            "Premium with Auto-Defrost function and bottom freezer easy access to food and Drinks.",
            "Ensures Food Stays fresh and moist longer.",
            "Prevent Odor from mixing between compartments."
        },

        200,{"kWh/Year"},
        4,{"Star"},
        240, {" Kilowatt hours", "Per Year"},
        "Frost-Free.",
        42,{"dB"},
        "Freestanding",
        230,{"Volts"},

        "R-600A",
        "Stainless Steel",
        3,
        4,
        "French Door Refrigerator",
        "Twist and Serve",
        "Energy Star",
        "Compressor",
        "Double Door",
        "ISO certification",
        "Yes",
        "Type D",
        "Yes",
        "Yes",

        "B093Q1SLL4",

        {
            {"Thai Samsung Electronics Co.Ltd,"},
            {
                "313 Moo 1", 
                {"Sukhaphiban 8 Rd", "Sriracha Industry ParK"}, 
                "",
                "T.Bung A.Sriracha",
                "Chonburi",
                20230,
                "Thailand"
            },
            "",
            {{""}}
        },
        {0},

        {
            {1, {"year", "comprehensive warranty"}},
            {20, {"years", "warranty on Digital Inverter Compressor (T & C Apply)"}}
        },
        "Thailand",
        "RF57A5032S9/TL",

        4.3,490,
        {
            "#8,232 in Home and Kitchen", 
            "#52 in Refrigerator"
        },

        {28, "April", 2021},

        {
            {"Samsung India Electronics Pvt Ltd."},
            {
                "having its Registered Office at: 6th Floor", 
                {"DLF centre", "Sansad Marg"}, 
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
            {"Samsung India Electronics Pvt Ltd."},
            {
                "having its Registered Office at: 6th Floor", 
                {"DLF centre", "Sansad Marg"}, 
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
            "1 Refrigerator", 
            "1 User Manual",
            "1 Warranty Card"
        },

        76.5, 81.7, 177.6, "centimeters", "(L x W x H)",
        0.0, 0.0, 0.0, "", "",

        97.5,{"Kilograms"},
        1,{"Count"},
        {"Refrigerator"}
    );

    std::cout << samsung_500_L;

    return 0;
}