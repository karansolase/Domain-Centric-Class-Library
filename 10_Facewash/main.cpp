// facewash client SIde :

#include "FaceWash.hpp"
#include <iostream>

int main(void){
    FaceWash Garnier(
        "WOW Skin Science Brightening Vitamin C & Niacinamide Foaming Face Wash",
        "WOW Skin Science", 

        {
            {"Style Name", {
                {100,{"G"}},
                {"Facewash + Vitamin C Booster"},
                {100, {"G", "(Pack of 2)"}},
                {"Face Wash + Icy Serum Gel"}
            }},

            {"Size",{
                {100,{"g","(Pack of 2)"}}
            }},

            {"Prices", {
                {"", 438}
            }},
        },
        "Box",
        "Bottle",
        
            {"Vitamin C"},
            {"All"}, 
            {"All"}, 
            {"Unisex"}, 
            {"Adult"}, 
            {"No Parabens",
            "Silicons"},
            {"Dermatologist Tested"}, 
            "Foam",
            
            150,{"ml"}, 
            
            "The product is typically clear or has a light, transparent appearance.",
            "Leaves the skin feeling clean and refreshed.", 
            " Not applicable, as it is a cleanser and does not provide coverage.", 

            {
                "Revitalize dull, lifeless skin with WOW Skin Science Brightening Vitamin C Foaming Face Wash.",
                "This face wash gently exfoliates and deep cleanses to clear away dead skin cells and excess oil,leaving your skin refreshed and radiant.",
                "Infused with active vitamin C, orange and lemon essential oils, extracts of liquorice and mulberry.",
                "It brightens and evens out your complexion while reducing dark spots and age marks.",
                "The built-in brush with soft silicone bristles enhances cleansing, promoting smooth, supple skin.",
                "Plus, the eco-friendly packaging uses 30% PCR material, helping you reduce your carbon footprint."
            },
            
            {"Face"},
            {
                "Brightening", 
                "Provides Vitamins", 
                "Refresh"
            },
            {
                "Comes with a built-in brush for deep cleansing.",
                "Helps brighten skin tone and fade age spots.",
                "Reduces fine lines and smoothens complexion.",
                "Free from parabens, sulphates, silicones, and color."
            }, 
            {
                "Glycerin", 
                "Vitamin E", 
                "Vitamin C", 
                "Aloe Vera", 
                "Panthenol"
            }, 
            {
                "Vitamin C",
                "Niacinamide",
                "Liquorice Extract",
                "Mulberry Extract",
                "Lemon Essential Oil",
                "Orange Essential Oil",
                "Aloe Vera Extract",
                "D Panthenol (Pro-Vitamin B5)",
                "Vitamin E (Tocopheryl Acetate)",
            }, 
            
            {
                "Purified Water", 
                "Cocamidopropyl betaine", 
                "Sodium Lauroyl Sarcosinate", 
                "Disodium Cocoamphodiacetate", 
                "Glycerin", 
                "Aloe Vera", 
                "D panthenol", 
                "Sodium PCA", 
                "Ascorbyl Glucoside",
                "Lemon Essential oil", 
                "Orange Essential Oil", 
                "Liquorice Extract", 
                "Mulberrry Extract", 
                "Tocopheryl Acetate", 
                "Phenoxyethanol", 
                "Ethylhexylglycerin and Disodium EDTA"
            },
        
        1,
        1,
        350,{"Millilitres"},
        350,{"Grams"},
        350.0, {"Millilitres"},

        {
            "Removes Pollution, Dirt, and Impurities while also brightening the skin's tone.",
            "Give a healthy Glow",
            "Enriched With natural ingredients such as absorbing charcoal and brightening icy clay.",
        },
        {
            "In Case of Contact with eyes, Rinse with water thoroghly"},
        {
            "Rinse the face with water.",
            "Apply a small quantity of the face wash on the face",
            "Gently rub with your fingers in circular motions to work up a lather.",
            "-Rinse it off and pat dry"
        },
        {
            "Keep out of reach of children.",
            "Consult a healthcare professional before use if you have sensitive skin or existing scalp conditions."
        },

        "NO",

            "B093QGT747",

            {"Kapco International Limited"},
            {0},

            {
                {0.0,{""}}
            },
            "India",
            "FWVITCBRREFILL",

            4.1, 638,
            {"#11,588 in Beauty",
            "#647 in Facewash"},
            {28, "April", 2021},

            {"Kapco International Limited"},

            {"Kapco International Limited"},

            {
                "Bottle or Container",
                "Dispensing Cap or Pump",
                "Label or Sticker:",
                "Inner Seal",
                "Manual or Leaflet ",
            },

            12, 7, 25, "Centimeters", "",
            12, 7, 25, "Centimeters", "",
            
            350,{"Gram"},
            350.0,{"Millilitre"},
            {"Face Wash",
            "Refill Combo"}
    );

    std::cout << Garnier;

    return 0;
}