#include "Footwear.hpp"

#pragma comment(lib, "footwear.lib")

int main (void){
    Footwear NIKE_Revolution_7_Men_s_Road_Running_Shoes(
        "NIKE_Revolution_7_Men_s_Road_Running_Shoes",
        "NIKE",

        {
        {"Size", {
            {5,{"UK"}},
            {7,{"UK"}},
            {10,{"UK"}}
        }},
        {"Colour", {
            {"Yellow Blue"},
            {"Blue White"},
            {"Black Gold"}
        }},
        {"Style",{
            {"Running Shoes"},
            {"Walking Shoes"},
            {"Training Shoes"}
        }},
        {"Price",{
            {"Yellow Blue", 5,{"UK"},  1799},
            {"Blue White",  5,{"UK"},  1799},
            {"Black Gold",  5,{"UK"},  1799},

            {"Yellow Blue", 7,{"UK"},  1899},
            {"Yellow Blue", 7,{"UK"},  1899},
            {"Yellow Blue", 7,{"UK"},  1899},

            {"Yellow Blue", 10,{"UK"}, 1999},
            {"Yellow Blue", 10,{"UK"}, 1999},
            {"Yellow Blue", 10,{"UK"}, 1999}
        }}
        },

        "Lace-Up",
        "No Heel",
        "Ankle",
        "Round Toe",
        "Not Water Resistant",
        "Mens",
        "Fabric",
        "German",
        "Audlt",
        "Football",
        1,
        "Slingback",
        "All",

        {
            "Polyurethane",
            "Rubber"
        },
        {
            "Rubber", 
            "Faux Leather", 
            "Polyvinyl Chloride (PVC)", 
            "Polyvinyl"
        },
        {
            "Running",
            "Walking",
            "Training",
            "Casual Wear",
            "Sports"
        },

        "Nike Size Chart",
        {
            {
            "IN REGULAR",
            "",
            {
            {{5.5},{0.0},{5.5},{6},{38.5},{9.4},{22.3}},
            {{6},{0.0},{6},{6.5},{39},{9.7},{23.2}},
            {{6.5},{0.0},{6},{7},{40},{9.8},{24.1}},
            {{7},{0.0},{6.5},{7.5},{40.5},{10},{25.7}},
            {{7.5},{0.0},{7},{8},{41},{10.2},{26.5}},
            {{8},{0.0},{7.5},{8.5},{42},{10.4},{27.3}},
            {{8.5},{0.0},{8},{9},{42.5},{10.6},{28.1}},
            {{9},{0.0},{8.5},{9.5},{43},{10.8},{28.9}},
            {{9.5},{0.0},{9},{10},{44},{11},{29.5}}
            }
            }
        },

        {
            "Versatile Sneaker Style suitable for casual or athletic wear",
            "Durable Design for long-lasting performance",
            "Cushioned Insole for all-day comfort",
            "Perfect for Active Lifestyles, ideal for walking or running"
        },
        {
            "Lightweight", 
            "Durable", 
            "Comfortable"
        },
        {""},
        {
            "Machine Wash", 
            "Wipe with clean and dry cloth to remove dust"
        },
        {""},

        "No",
        33.6,26.2,11.8,"cm","", 

            "B0C8TFS74H",

            {
                {"NIKE INDIA PVT LTD"},
                {
                    "GROUND & 1ST FLOOR",
                    {"OLYMPIA BUILDING", "NO 66/1", "BAGMANE TECH PARK", "CV RAMAN NAGAR"},
                    "",
                    "BANGALORE",
                    "KARNATAKA",
                    560093,
                    "INDIA"
                },
                "",
                {{""}}
            },
            {0},

            {{0.0,{""}}},
            "Vietnam",
            "FB2207",

            4.2,201,

            {
                "#101 in Shoes & Handbags",
                "#19 in Men's Running Shoes"
            },

            {20, "December" ,2023},

            {
                {"NIKE INDIA PVT LTD"},
                {
                    "GROUND & 1ST FLOOR",
                    {"OLYMPIA BUILDING", "NO 66/1", "BAGMANE TECH PARK", "CV RAMAN NAGAR"},
                    "",
                    "BANGALORE",
                    "KARNATAKA",
                    560093,
                    "INDIA" 
                },
                "",
                {{""}}
            },
            {
                {"NIKE INDIA PVT LTD"},
                {
                    "GROUND & 1ST FLOOR",
                    {"OLYMPIA BUILDING", "NO 66/1", "BAGMANE TECH PARK", "CV RAMAN NAGAR"},
                    "",
                    "BANGALORE",
                    "KARNATAKA",
                    560093,
                    "INDIA" 
                },
                "",
                {{""}}
            },

            {""},

            33,23,11,"cm","",
            33,23,11,"cm","",

            400,{"g"},
            1,{"Set"},

            {"Running Shoes"}
    );

    std::cout << NIKE_Revolution_7_Men_s_Road_Running_Shoes;
}
