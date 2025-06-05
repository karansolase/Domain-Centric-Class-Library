#include "RailwayTicket.hpp"

#pragma comment(lib, "RailwayTicket.lib")

int main (void)
{
    IRCTC_Ticket Shekhar_Vidhate(
        "Shekhar",
        "Vidhate",

        45,

        "Male",
        "Lower",
        "Indian",
        "No",
        "Adhar Card",

        9685124722,
        "ShekharV045@gmail.com",

        "New Delhi",
        "Mumbai Central",
        
        2025, 4, 20,

        "3A",
        "General",
        12952,
        "Mumbai Raajdhani",

        16, 55, "AM",
        8, 35, "PM",

        "B1",
        23,
        "New Delhi",
        "Mumbai Central",
        1234567890,
        "TXN987654321",

        2025, 4, 10,

        "IRCTC Website",

        1500,
        40,
        45,
        75,

        "GN",
        "COnfirmed",
        "Prepared",
        "Refund as Per IRCTC Rules",
        "3rd From Engine"
    );

    std::cout << Shekhar_Vidhate;
}