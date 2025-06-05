#pragma comment(lib, "Camera.lib")

#include <iostream>
#include "camera.hpp"

int main (void){
    Camera Sony(
        "Sony Alpha ILCE-6100Y 24.4 MP Mirrorless Dogitak SLR Camera",
        "Sony",

        {
            {"Colour", {
                {"Black"}
            }},

            {"Models", {
                {"ILCE-6100"},
                {"ILCE-6100L"},
                {"ILCE-6100Y"}
            }},

            {"Prices",{
                {"Black, ",51989},
                {"Black, ILCE-6100 with offer",51988},
                {"Black, ILCE-6100L",61488},
                {"Black, ILCE-6100L with offer", 61487},
                {"Black, ILCE-6100Y", 73490},
                {"Black, ILCE-6100Y with offer", 73924}
            }}
        },

        16,
        {2023},

        32,{"GB"},
        
        2,
        "Pop-up flash",
        {"USB", "Secure Digital Card"},

        32,{"GB"},
        
        1,
        "Instant",
        "black",
        "Colored",

        1.4,{"f"},

        50,
        "Automatic",

        1,{"x"},
        0.00025,{"Seconds"},
        0.0005,{"Seconds"},

        192143003458,
        "Micro Four Thirds",

        {4,3,":"},

        3,{"Hours"},

        "CMOS",
        "MP4",
        "Digital",
        "JPEG",
        "Digital",

        20,{"x"},
        200,{"mm"},
        18,{"mm"},

        "3.5mm mic input for external microphones",
        1,

        2.8,{"Inches"},
        
        "OLED",
        "LCD",
        "yes",
        "F3.0 - F6.5",
        "yes",
        "2E + 1x",

        56,{"MP"},
        64,{"MP"},

        "Digital Audio Output",
        "HDMI",
        "Lithium Ion",
        "1 Lithium Ion Batteries required.(Included)",
        "Yes",
        "Lithium",

        30,{"fps"},
        1,
        128,{"GB"},

        "Micro USB",
        "Micro SD Card",
        "Compact",
        "Wide Angle",

        120,{"Degree"},
        128,{"GB"},

        "Evaluative",
        {"Micro Four Thirds"},
        "Electronic",
        "NO",
        "Yes",
        "Yes",
        "Yes",
        "No",
        "Yes",
        "No",
        "Water",

        {"SD"}, 
        {
            "Auto",
            "ON",
            "Off",
            "Slow Synch",
            "Rear Curtain Synch"
        },
        {
            {4,{"k"}},
            {1080,{"P"}}
        }, 
        {"Micro Four Thirds Mounting system devices"},
        {
            {1,{"x Storage Bag & Lanyard"}},
            {1,{"x User Manual"}},
            {1,{"x Digital Camera & 32G Card"}},
            {1,{"x USB C Cable"}},
            {1,{"x Rechargeable Battery"}},
        }, 
        {
            "Aluminum",
            "magnesium alloy",
            "polycarbonate"
        }, 
        {"Wifi"}, 

        {
            "Optical image stabilization",
            "face detection",
            "touch screen",
            "4K video recording",
            "Wi-Fi connectivity"
        },
        {""}, 

            "B081JRLB4P",

            {
                {"Sony Imaging Products & Solutions Inc.,"},
                {
                    "",
                    {"1-7-1 konan"}, 
                    "",
                    "Minato-KU", 
                    "Tokyo",
                    1080075,
                    "Japan"
                },
                "",
                {{""}}
            },
            {0},

            {{0.0,{""}}},
            "China",
            "ICLE - 6100Y/B IN5",

            4.5, 123,
            {"#4,008 in Electronics", 
            "#1 in Mirrorless System Cameras"},
            {0, "/", 0, "/", 0},

            {
                {"Sony Imaging Products & Solutions Inc.,"},
                {
                    "",
                    {"1-7-1 konan"}, 
                    "",
                    "Minato-KU", 
                    "Tokyo",
                    1080075,
                    "Japan"
                },
                "",
                {{""}}
            },

            {
                {"Sony India Private Limited,"},
                {
                    "A-18", 
                    {"Mohan Co-operative Industrial Estate", "Mathura Road"}, 
                    "",
                    "New Delhi",
                    "Delhi", 
                    110044,
                    "India"
                },
                "Sonyindia.care@ap.sony.com",
                {{""}}
            },

            {"1 Unit - Including Lens(SELP1650 & SEL55210)",
            "Lens Hood", 
            "Lens cap", 
            "Lens Rear Cap", 
            "Power Cord",
            "Rechargeable Battery (NP-FW50)",
            "AC Adaptor (AC-UUE12)", 
            "Shoulder Strap",
            "Eyepiece Cup", 
            "Micro USB Cable-1U Each.."},

            12, 5.9, 6.6, "Centimeters", "(L x W x H)",
            12, 5.9, 6.6, "Centimeters", "",

            396,{"gram"},
            1,{"U"},
            {"ICLE-6100Y Camera with 16-50 millimeters and 55-120 millimeters Zoom Lenses"}   
    );

    std::cout << Sony;

    return 0;
}