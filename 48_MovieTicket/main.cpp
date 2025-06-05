#include "MovieTicket.hpp"

#pragma comment(lib, "MovieTicket.lib")

int main(void)
{
    MovieTicket CHHAAVA(
        "CHHAAVA",
        "Connplex Cinemas",
        "Ahilyanagar",

        "Wednesday",16,"Apr",2025,

        3, 30, "PM",

        4,

        {
            {"B1",200},
            {"B2",200},
            {"B3",200},
            {"B4",200}
        },

        118,

        {
            {
                {
                {"French Fries", 100, "g", 1},
                {"Coke", 300, "ml", 1}
                },
                210
            },
            {"Nachos with cheese and Salsa Sauce", 90, "g", 1, 300},
            {"Cappuccino", 200, "ml", 2, 200},
            {"Cafe Latte", 200, "ml", 1, 100}
        },

        "Box Office PickUp"
    );

    std::cout << CHHAAVA;
}