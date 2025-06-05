#pragma once 

#ifndef _MOVIE_TICKET_HPP
#define _MOVIE_TICKET_HPP

#include <iostream>
#include <vector>
#include "Seating_and_Price.hpp"
#include "MenuItems_Price.hpp"
#include "Address.hpp"
#include "Time.hpp"
#include "Date.hpp"

class MovieTicket
{
    friend std::ostream& operator<<(std::ostream& os, const MovieTicket& MT_Object);

    private :
    // Movie Information :
    std::string MovieName;
    std::string TheatreName;
    Address TheatreAddress;
    Date MovieShowDate;
    Time MovieShow_Time;
    unsigned int No_Of_Tickets;
    std::vector<Seatings_and_Price> Seatings_and_Price_Object;
    Price Convenience_Fees;
    std::vector<Single_Or_Combo_Of_FoodItemsMenu_And_Price> FoodBeverages_and_Prices_Object;
    Price Amount_Payable;

    std::string TicketType;

    double Calculate_AmountPayable();

    public :
    MovieTicket(
        std::string _movie_name,
        std::string _theatre_name,

        std::string _City_name,

        std::string _Day_of_Week,
        int _day_in_date,
        std::string _month_in_date_in_string,
        int _year_in_date,

        int _movietime_hour,
        int _movietime_minute,
        std::string _meridiem_time,

        unsigned int _no_of_tickets,

        std::initializer_list <Seatings_and_Price> _seatings_and_price_object,

        double _convenience_fees,
        std::initializer_list <Single_Or_Combo_Of_FoodItemsMenu_And_Price> _foodbeverages_and_price_object,

        std::string _tickets_type
    );
};
 
#endif /* MovieTicket.hpp */