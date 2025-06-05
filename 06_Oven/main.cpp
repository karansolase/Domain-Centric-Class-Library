// oven Client Side :

#pragma comment(lib, "Oven.lib")

#include "Oven.hpp"

int main (void){
    OVen philips(
        "Philips HD6975/00 Digital Oven Toaster Grill",
        "PHILIPS",

        {
        {"Style",{
            {"Standard"}
        }},

        {"Colour", {
            {"Grey"}
        }},

        {"Model Name and Price",{
            {"HD6975/00",8795}, 
            {"HD6977/00",20200}
        }}
        },

        "Electric",
        "Countertop",
        "Defrost",

        50,{"Hz"},

        "Knob",
        "",
        "Timer Function Available",

        25,{"Litre"},

        "digital displays",

        489, 275, 392, "mm", "(W x H x D)",
        330, 211, 324, "mm", "(W x H x D)",

        "Ceramic Enamel",
        "Ceramic Enamel",
        24,{"cm"},
        
        {"Stainless Steel"},
        1500,{"Watts"},
        1400,{"Watts"},
        1100,{"Watts"},
        800,{"Watts"},
        6,{"Level"},
        230,{"Volts"},
        15,{"litres"},
        800,{"Watts"},

        "Left",
        6,
        "Stainless Steel",
        "Tempered Glass",
        "Electric",

        "",100,250,"-","Degree Celcius",

        "Cast Iron",
        "No",
        "No",

        {
            "Electric", 
            "Convection"
        }, 
        {
            "Uses a fan to circulate hot air for even cooking.",
            "Heats food using microwave radiation.",
            "Provides radiant heat for grilling or toasting.",
            "Includes convection, microwave, and grill functions in one."
        }, 
        {
            "Child Lock Available",
            "Door Interlocking System"
        }, 
        {
            "Side Swing", 
            "Child Lock", 
            "Completion Beeper",
            "Timmed Cook"
        }, 
        {
            "Micro",
            "Grill / Combination",
            "Convection",
            "Diet Fry/Low Calorie",
            "Tandoor Se/Kids Delight",
            "Indian Roti Basket Mode",
            "Indian Cuisine",
            "Pasteurize Milk/Tea/Dairy Delight",
            "Cooking Aid/Steam Clean/Dosa/Ghee"
        }, 
        
        {
            "Adjustbale Rack",
            "Opti temp technology",
            "One touch 10 Present menu",
            "Pre - heat Modes",
            "Motorised Rotisseries",
            "Double Glass Door"
        },
        {
            "Stainless Steel Cavity - More Hygenic",
            "More Durable, Pasteurized Milk - Retains Nutrition",
            "Removes Bacteria",
            "Auto Cook Menu - Dish out surprises every day"
        }, 
        {
            "Residential",
            "Home"
        },

            "B07P1BR7L8",

        {
            {"Versuni Home Solutions"}, 
            {"China B.V"},
            "",
            {{""}}
        },
        {2024},

        {
            {2, {"Year", "warranty on Product"}}
        },
        "China",
        "HD6975/00",

        4.3, 9158,
            
        {
            "#6605 in Home and Kitchen (See Top 100 in Home and Litchen)", 
            "#4 in Oven Toaster Grills"
        },

        {0, "/", 0, "/", 0},

        {
            {"Versuni Home Solutions,"}, 
            {"China B.V"},
            "",
            {{""}}
        },

        {
            {"Versuni Home Solutions, China B.V,"},
            {
                    "3rd Floor", 
                    {"Tower A", "DLF IT Park", "08 Block AF Major Arterial Road"},
                    "New Town Rajarhat",
                    "Kolkata",
                    "West Bengal",
                    700156,
                    "India"
            },
            "",
            {{""}}
        },

        {
                "Includes Oven Toaster Drill",
                "Baking Tray",
                "Grill Rack",
                "Tong", 
                "Crumb Tary",
                "Skewer Rods", 
                "User Manual", 
                "India Specific Recipe book"
        },

        40.2, 52, 35.6, "Centimeters", "(D x W x H)",
        0.0, 0.0, 0.0, "", "",

        6.4,{"Kilograms"},
        1,{"Count"},
        {"Oven Toaster Griller"}
    );

    std::cout << philips;

    return 0;
}

