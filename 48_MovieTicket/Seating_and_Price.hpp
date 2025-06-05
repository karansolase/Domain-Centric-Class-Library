#pragma once

#ifndef _SEATINGS_AND_PRICE_HPP
#define _SEATINGS_AND_PRICE_HPP

#include <iostream>
#include "Price.hpp"

class Seatings_and_Price
{
    friend class MovieTicket;
    friend std::ostream& operator<<(std::ostream& os, const Seatings_and_Price& SP_Object);
    private :
    std::string Seat_No;
    Price Price_OF_Seat;

    public :
    Seatings_and_Price(
        std::string _seat_no,
        double price_of_seat);
};

#endif /* Seating_and_Price.hpp */