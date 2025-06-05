// Washing Machine Client Side

#pragma comment(lib, "Washing_Machine.lib")

#include <cstdio>
#include <iostream>
#include "WasHinG_MacHinE.hpp"

int main(void){
    WasHinG_MacHinE LG(
        "LG 7kg 5 Star Wind jet Dry Semi-Automtic Top Loading Washing Machine",
        "LG",

        {
        {"Colour", {
            {"Glacial White"},
            {"Flint Grey"}
        }},

        {"Style and Price",{
            {"AI", 6.5, {"kg"}, 16990},
            {"AI", 7,   {"kg"}, 17990},
            {"AI", 8,   {"kg"}, 21990}
        }}
        },

        7,{"Kilograms"},
        200,{"Kilowatt Hours Per Year"},
        300,{"Kwh / Year"},
        17.72,{"L /", "Kg /", "Cycle"},

        12,
        "Stainless Steel",
        "Top Load",
        "Gloss",
        {"stainless steel"},
        "knob",
        "Traditional dials and knobs",
        "Manual",
        1300,{"RPM"},
        65,{"dB"},
        {"",50,"-",70,"cm"},
        230,{"Volts"},

        3,
        "dials and knobs,",
        0,
        "Red LED Digital Display",
        "Free Standing",
        "",
        "",

        5,{"Star", "Ratings"},

        "20NAGZ",
        "Stand Alone",
        3,

        360,{"Watts"},
        "Water inlet and Drain",
        "",
        2,
        "",
        "Energy Star",
        "No",
        "No",

        {
            "Higher Spin speed helps in better water extraction from the clothes during the spin cycle",
            "Resulting in faster drying"
        },
        {
            "Daily", 
            "Heavy",
            "Delicate", 
            "Whites",
            "Stainwash", 
            "Wash Only",
            "Woollens", 
            "Bedsheet",
            "Eco Wash", 
            "Rinse + Dry",
            "Dry",      
            "Aqua Store"
        },
        {"Diamond"}, 
        {
            "Dual Storm", 
            "plastic Body"
        }, 
        {
            "Stainless Steel",
            "Plastic Body"
        },
        {
            "Tub Clean",
            "Delicates",
            "Quick Wash",
            "Jeans",
            "Normal"
        },

        {
            "Wind Jet Dry", 
            "Collar Srucbber",
            "Rat Away Technology", 
            "Normal Pulsator",
            "Rust Free Plastic Base"
        }, 
        {
            "ZPF Technology",
            "Smart Sensor",
            "Delay Wash"
        }, 
        {
            "Anti Vibration Rubber",
            "Rust Plastic Base",
            "Spin Window",
            "Wash Window",
            "Spin Timer - 05 Min",
            "Wash Timer - 15 Min"
        }, 
        {
            "Baking, roasting, grilling, reheating, and defrosting.",
            "Specific models might support pizza making, slow cooking, or air frying."
        },

        "B09DD573SY",

        {
            {"LG Electronics India Pvt Ltd,"}, 
            {"Udyog Vihar, Surajpur kasna Road 201306"}, 
            "serviceindia@lge.com",
            {{18003159999}}
        },
        {0},

        {
            {2, {"years", "Comprehensive"}},
            {5, {"years", "on Motor T&C"}}
        },
        "India",
        "P7020NGAZ",

        4.3,5931,

        {"#1501 in Home and Kitchen |", 
        "#1 in Semi-Automatic"},

        {23, "Aug", 2021},

        {
            {"LG Electronics India Pvt Ltd,"}, 
            {"Udyog Vihar, Surajpur kasna Road 201306"}, 
            "serviceindia@lge.com",
            {{18003159999}}
        },

        {
            {"Mohan Cooperative Ind. Estate,"}, 
            {
                "A-24/6",
                {"Mathura Road"},
                "",
                "New Delhi",
                "Delhi",
                110044,
                "India"
            },
            "",
            {{""}}
        },

        {"1 Washing Machine", 
        "1 Anti Rat Cover",
        "1 Owner's manual", 
        "1 Service Manual", 
        "1 OT Hose", 
        "1 Drain Hose", 
        "1 QRG"},

        48, 81, 98,"Centimeters", "(D x W x H)",
        0, 0, 0, "", "",

        33,{"kilograms"},
        1,{"Count"},
        {"Semi - Automatic Top Loading Washing Machine"}
    );

    std::cout << LG;

    return 0;
}
