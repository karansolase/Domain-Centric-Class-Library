#include "Seating_and_Price.hpp"

Seatings_and_Price::Seatings_and_Price(
    std::string _seat_no,
    double price_of_seat)    :
    Seat_No(_seat_no),
    Price_OF_Seat("Rs", price_of_seat)
{
}

std::ostream& operator<<(std::ostream& os, const Seatings_and_Price& SP_Object)
{
    os 
    << SP_Object.Seat_No 
    << " : " 
    << SP_Object.Price_OF_Seat;

    return os;
}