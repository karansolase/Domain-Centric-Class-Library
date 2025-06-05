// #pragma comment(lib, "Mositurizer.lib")

#include "Moisturizer.hpp"
#include <iostream>

int main(void){
    MoisTURizer NIVEA(
        "NIVEA Nourishing Body Milk 600ml Body Lotion", 
        
        {   
            {"Prices", {
                {"1 Count(Pack of 1)", 209},
                {"(Pack of 1)", 120, {"ml"} ,  82.50},
                {"(Pack of 1)", 600, {"ml"} , 405.42}
            }}
        },
        {"Women"},

            {""},
            {""},
            {"Dry"},
            {"Unisex"}, 
            {""}, 
            {""}, 
            {""}, 
            "Lotion", 

            0.0,{""},

            "",
            "",
            "",

            {""},
            {"Dryness"},    
            {"Nourishing"}, 
            {""},
            {"Almond Oil"},
            {"Vitamin E"},
            {"Almond", "Almond milk", "Milk", "Milk Enzymes", 
            "Milk Peptides", "Only Milk"}, 
        
        {"Dispense the body lotion into the palm of your hand.",
        "Gently massage the lotion onto your skin.",
        "Apply evenly all over the body",
        "Use daily to give your skin the perfect results."},
        
        {""},

        "",
        
            "BO7VKM2HR5",

            {
                {"Beiersdorf Manufacturing Gujrat, NIVEA INDIA PVT ltd,"},
                {
                    "SM-9/1, Sanand",
                    {"IND. ESTATE", "VILL.BOL."}, 
                    "SANAND", 
                    "AHMEDABAD",
                    "GujRat",
                    382110,
                    "India"
                },
                "",
                {{2262487999}}
            },
            {0},

            {{0.0,{""}}},
            "India",
            "85781 -09815 -37",

            4.4, 51346,
            {"#17 in Beauty",
            "#1 in Body Lotions"},

            {23, "July", 2019},

            {
                {"Nivea India Pvt. Ltd,"},
                {
                    "4th Floor", 
                    {"A Wing", "Art guild House", "Phoenix Market City"}, 
                    "Kurla West", 
                    "Mumbai", 
                    "Maharashtra",
                    400070,
                    "India"
                },
                "",
                {{2262487999}}
            },

            {""},

            {"Body Lotion"},
            
            44, 29, 148, "Millimeters", "",
            4.4, 2.9, 14.85, "Centimeters", "",

            600,{"Gram"},
            600,{"Millilitre"},

            {""}
    );

    std::cout << NIVEA;
}