// Shampoo Client Side 

#pragma comment(lib, "Shampoo.lib")

#include <cstdio>
#include "shampoo.hpp"

int main (void){
    SHamPoo tresemme_keratin_smooth(
        "TRESemme",
        "tresemme_keratin_smooth",
        
        {
            {"Style Name",{
                {"TRESemme Keratin Smooth Shampoo"}
            }},
            
            {"Size", {
                {1,   {"l",  "(Pack of 1)"}},
                {5,   {"ml", "(Pack of 1)"}},
                {185, {"ml", "(Pack of 1)"}},
                {540, {"ml", "(Pack of 1)"}}
            }},
            
            {"Price", {
                {"(Pack of 1)",  1,{"l"}, 624},
                {"(Pack of 1)",  5,{"ml"}, 80},
                {"(Pack of 1)",  185,{"ml"}, 190},
                {"(Pack of 1)",  540,{"ml"}, 619}
            }}
        },

        {"Floral"},
        {"All", "Frizzy", "Dull", "Dry"},
        {"All"}, 
        {"Unisex"}, 
        {"Adults"}, 
        {"Free From Parabens"},
        {"Nourishing",
        "smoothing",
        "anti-frizz"},
        "Cream",

        10.7,{"Litres"},

        "creamy white or light-colored liquid",
        "Smooth and sleek finish",
        "Full hair strand coverage for effective cleansing and nourishment.",

        {
            "TRESemme Keratin Smooth Shampoo is designed to cleanse hair while leaving it smooth and manageable.",
            "Formulated with keratin and marula oil, it fights frizz, adds shine, detangles, and keeps hair smooth for up to 72 hours."
        },
        {
            "Taming frizz and flyaways",
            "Achieving smooth and sleek hairstyles",
            "Nourishing and moisturizing dry hair"
        },
        {
            "Infused with Keratin and Argan Oil", 
            "Long Lasting Hair Solution",
            "Dual Action Goodness",
            "lower Sulphate Formula", 
            "Hair Easy Stylable",
            "Anti Hair Loss"
        },
        {
            "Enriched with keratin and marula oil",
            "Provides 5 benefits: anti-frizz, detangling, shine, smooth texture, and soft touch",
            "Suitable for daily use"
        },
        {
            "Keratin",
            "Marula Oil"
        },
        {
            "Keratin",
            "Sodium Laureth Sulfate",
            "Glycerin"
        },
        {
            "Water", "Sodium Laureth Sulfate", "Dimethiconol", "Trideceth-10", "Tea-Dodecylbenzenesulfonate",
        "Cocamidopropyl Betaine", "Perfume", "Sodium Chloride", "Carbomer", "Amodimethicone", "Cetrimonium Chloride",
        "Trideceth-12", "Glycol Distearate", "Guar Hydroxypropyltrimonium Chloride", "Mica and Titanium Dioxide", 
        "Disodium Edta", "DMDM Hydantoin", "Hydrolyzed Keratin", "Methylchloroisothiazolinone",
        "Methylisothiazolinone", "Sodium Hydroxide"
        },
        
        {
            "Apply and massage a coin size amount of the shampoo into your wet scalp",
            "Later rinse and follow with conditioner",
            "Apply Adequate amount from mid-length to ends",
            "Leave it for 2-3 minutes and thoroughly",
            "After rinsing shampoo, use the TRESemme conditioner."
        },
        {
            "Avoid contact with eyes.", 
            "In case of contact rinse thoroughly with water."
        },
        {""},

        "NO",

            "B07L3ZCJ53",

            {
                {"Yodeva Plastic Pvt Ltd,"},
                {
                    "Plot No. 81", 
                    {"thana", "Baddi 173", "205"}, 
                    "",
                    "Dist. Solan", 
                    "Himanchal Pradesh",
                    173205,
                    "India"
                },
                "",
                {{""}}
            },
            {0},

            {
                {0.0,{""}}
            },
            "India",
            "26118",

            4.3,52814,
            {"#25 in Beauty", 
            "#3 in Shampoos"},
            {4, "Dec", 2018},

            {
                {"Hindustan Unilever Ltd| Unliever House,"},
                {
                    "",
                    {"B D Sawant Marg"}, 
                    "Chakala Andheri East" ,
                    "Mumbai",
                    "Maharashtra",
                    400099,
                    "India"
                },
                "",
                {{""}}
            },

            {
                {"Hindustan Unilever Ltd| Unliever House,"},
                {
                    "",
                    {"B D Sawant Marg"}, 
                    "Chakala Andheri East",
                    "Mumbai",
                    "Maharashtra",
                    400099,
                    "India"
                },
                "",
                {{""}}
            },

            {"Shampoo"},

            11.0, 7.0, 24.0, "Millimeters", "(L x W x H)",
            1.1, 0.7, 2.4, "Centimeters", "", 

            1,{"kg"},
            1000,{"Millilitre"},
            {"Keratin Smooth Shampoo"}
    );

    std::cout << tresemme_keratin_smooth;

    return 0;
}

/* 

   */