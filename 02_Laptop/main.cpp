#pragma comment(lib, "laptop.lib")

#include <iostream>
#include "Laptop.hpp"


int main(void){
    Laptop HP_Smart_choice_Victus(
      {"HP Victus Gaming Laptop"},
      "HP",
      {"15-fa1319X"},

      {
        {"Price",{
          {"", 75000}
        }}
      },

      39.6,{"Centimeters"},
      1920, 1080, "Pixel","",
      1920, 1080, "Pixel","",

      15.6,{"inch"},
      0.0, 0.0, "", "",
      52.1,{"Centimeters"},
      31.1,{"Centimeters"},
      144,{"Hz"},
      9,{"ms"},
      0,{""},
      
      "",
      {
        {1, {"x","USB Type-C"}},
        {2, {"x","USB Type-A"}},
        {1, {"x","HDMI 2.1"}},
        {1, {"x","RJ-45"}}
      },
      {""},
      {""},
      "1 Lithium ion batteries required.",
      {"Intel Core i7"},
      "Intel",
      {"Intel Core i7"},

      4.9, {"GHz"},
      1,
      16, {"GB"},
      "DDR4",
      16,{"GB"},
      5600,{"MHz"},
      "DDR5 RAM",
      1,{"TB"},
      "SSD",
      "Solid State",
      0,{""},
      {"Headphones"},
      "1 TB",
      "SSD",
      0,{""},

      "Integrated",
      "",
      {{"NVIDIA GeForce RTX"},"",4050,4},
      "Intel",
      "Dedicated",
      "GDDR6",
      "Integrated",
      {"Wifi"},
      {""},
      2,
      1,
      1,
      0,
      "",
      "laptop",

      5,{"Volts"},
      75,{"Watts"},
      0,{""},
      720,{"Pixels"},

      {"Windows 11 Home"},

      {"It has 24MB L3 Cache and 16 threads, Experience unparalled speed and efficiency",
      "Stay cool in the heat of gaming with updated thermals",
      "Experience immersive and realistic graphics with a dedicated GPU",
      "Experience lag free gaming wiht quick load times and smooth in game transistions",
      "This laptop is EPEAT registered and Energy Star certified"},

      {
        {""}
      },

      {""},

      "",
      {""},
      "Yes",
      8,{"Hours"},
      0,{""},
      70,{"Watt", "Hours"},
      0,{""},

      4,
      0,

        "BOD2DHNKFB",

        {"HP"},
        {0},

        {
          {0, {""}}
        },
        "China",
        "",

        3.9, 5,

        {"#3,142 in Computers and Accessories",
        "#84 in Traditional Laptops"},

        {22, "April", 2024},

        {
          {"SG66 - QUANTA CQ, Tech Front (CHongqing) computer CO. LTD"},
          {
            "18#",
            {"Comprehensive bonded zone avenue"},
            "",
            "Shapingba District",
            "CHongqing",
            401332,
            "China",
          },
          "",
          {{""}}
        },

        {
          {"HP India Sales pvt Limited"},
          {
            "24 Kothari Arena", 
            {"Hosur main road"}, 
            "",
            "Adugodi", 
            "Banglore", 
            560030,
            "Karnataka",
          },
          "",
          {{""}}
        },

        {"Laptop", "Charger", "User Manual"},

        6.9, 31.1, 52.1, "Centimeters", "(L x W x H)",
        6.9, 31.1, 52.1, "Centimeters", "",

        3.4, {" kg"},
        1, {" Count"},

        {"Laptop"}
    );

    std::cout << HP_Smart_choice_Victus;
}