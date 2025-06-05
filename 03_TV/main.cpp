// TV CLIENT SIDE

#pragma comment(lib, "Television.lib")

#include <iostream>
#include "Television.hpp"

int main (void){

    Television Xiaomi(
        "Xiaomi TV",
        "Xiaomi",

        {
        {"Style Name",{
            {"Google TV"}
        }},
        {"Height",{
            {50,{"Inches"},41999}, 
            {55,{"Inches"},47999}
        }}
        },

        50,{"Inches"},

        {"HDR10+", "HDR 10", "HLG"},
        "LED",

        3840,2160,"pixels","",

        4,{"k", "Ultra HD"},
        60,{"Hertz"},
        178,{"degrees"},

        "Flat",

        "",16,9,":","",
        "",5000,1,":","",

        0, {"High Brightness"},

        "X Pro Google Series",
        "Android",
        {
            "PatchWall", 
            "Netflix", 
            "Amazon Prime Video",
            "Disney+ Hotstar", 
            "Miracast", 
            "Media Player",
            "Gallery", 
            "TV Manager", 
            "User Manual", 
            "Live TV", 
            "YouTube",
            "YT Music", 
            "play Store"
        },

        8,{"Milliseconds"},

        {"Quad Core A55 CPU"},
        0,
        {{"Mali g52 MP2"}}, 

        2,{"GB"},
        16,{"GB"},

        {"PNG", "GIF"},

        {""},
        2,
        "Experience True Power with a category leading system enhanced by tuning by Xiaomi Audio labs" 
        "that further elevates your audio experience",
        {"Dolby Atmos", "DTS X"},

        40,{"Watts"},

        {"FLAC", "AAC", "AC4", "OGG & ADPCM"},
        {"AVI", "MP4"},
        {"MPEG", "AVI"},

        3,{"HDMI"},  
        2,{"USB"},
        {""},

        0,{"Yes"},
        {"WI-fi", "USB", "Ethernet", "AV"},

        "Yes",
        {
            "One Click Amazon prime Video and Netflix and Disney+ Hotstar and YouTube Button Remote",
            "Google Assistant  With voice Assistant"
        },
        {"Bluetooth"},

        130,{"Watts"},
        "AC",
        9,{"Feets"},

        "NO",
        {"4k Dolby Vision IQ",
        "Far Field mic",
        "Hey google", 
        "google TV",
        "HDR 10+", 
        "HDR 10", 
        "HLG",
        "Wide Color", 
        "Gamut"},

        4,{"k"},

        "Indoor",
        {""},
        "Black",
        {"Wall Mount", "Table Mount"},

        240,{"volts"},

        "Surround",

        130,{"watts"},

        "Auxiliary",
        "Lithium-Ion",

        2,{"GB"},

        "Digital",

        40,{"Watts"},

        "Analog",
        "Not Water Resistant",
        {"Gaming Console"},
        "Standby Power Shutoff",
        "Filters",
        "Voice Control",
        "Yes",
        {"HDMI", "Ethernet", "USB", "Bluetooth"},
        "Remote",
        
        {"DVB- T2"},
        {"Bluetooth", "Wi-fi"},
        {"AV1", "H.265", "H.264", "H.263", 
        "VP8/VP9/VC1", "MPEG1/2/4"},

        0,{""},

        "B0CG5STP81",

        {
            {"Dixon Technolgies (India) Limited"},
            {
                "SHED#2, 3",
                {"4 EMC-2 Munagalapalem Post"},
                "Yerpdeu mandalam",
                "Chithoor",
                "Andhra Pradesh",
                51726,
                "India"
            },
            "",
            {{""}}
        },
        {2023},

        {
            {0,{"Onsite Warranty on Product and No Delivery Damages Covered"}}
        },
        "India",
        "L50M8-5XIN",

        4.1,2982,

        {"#13,283 in Electronics", 
        "#134 in Smart Televisions"},

        {21, "Aug", 2023},

        {
            {"Survey No. 111, 112, S-2 A 1"},
            {
                "Survey No. 111, 112, S-2 A 1",
                {"Ecity", "Fabcity", "Maheshwaram mandal"},
                "raviryala village",
                "Ranga Reddy",
                "Telegana",
                501141,
                "India"
            },
            "",
            {{""}}
        },

        {""},

        {"1 LED TV", 
        "2 Table Stand Base Along with screws",
        "1 User Manual" ,
        "1 Warranty Card",
        "1 Remote Control"},

        26.3, 111.6, 70, "Centimeters", "",
        0.0, 0.0, 0.0, "", "",

        10.35,{"Kilograms"},
        1,{"Count"},

        {"TV"}
    
    );

    std::cout << Xiaomi;

    return 0;   
}
