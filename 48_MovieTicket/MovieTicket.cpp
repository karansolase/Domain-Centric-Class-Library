#include "MovieTicket.hpp"

MovieTicket::MovieTicket(
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

    std::string _tickets_type)   :

    MovieName(_movie_name),
    TheatreName(_theatre_name),
    TheatreAddress(_City_name),

    MovieShowDate(
        _Day_of_Week,
        _day_in_date,
        _month_in_date_in_string,
        _year_in_date
    ),
    
    MovieShow_Time(
        _movietime_hour,
        _movietime_minute,
        _meridiem_time),

    No_Of_Tickets(_no_of_tickets),
    Seatings_and_Price_Object(_seatings_and_price_object),
    Convenience_Fees("Rs", _convenience_fees),
    FoodBeverages_and_Prices_Object(_foodbeverages_and_price_object),

    TicketType(_tickets_type),
    Amount_Payable("Rs", 0.0)
{
    Amount_Payable.P_Price = Calculate_AmountPayable();
}

double MovieTicket::Calculate_AmountPayable()
{
    double Total = 0.0;

    std::vector<Seatings_and_Price>::iterator Iter_1 = 
    Seatings_and_Price_Object.begin();

    while(Iter_1 != Seatings_and_Price_Object.end())
    {
        Total = Total + (*Iter_1).Price_OF_Seat.P_Price;
        ++Iter_1;
    }

    std::vector<Single_Or_Combo_Of_FoodItemsMenu_And_Price>::iterator Iter_2 = 
    FoodBeverages_and_Prices_Object.begin();

    while(Iter_2 != FoodBeverages_and_Prices_Object.end())
    {
        Total = Total + (*Iter_2).Price_Object.P_Price;
        ++Iter_2;
    }

    Total = Total + Convenience_Fees.P_Price;

    return Total;
}

std::ostream& operator<<(std::ostream& os, const MovieTicket& MT_Object)
{
    os << "MOVIE TICKETS DETAILS : " << std::endl << std::endl

    << "Movie Name : "  << MT_Object.MovieName << std::endl
    << "Theatre Name : "  << MT_Object.TheatreName << std::endl
    << "City Name : "  << MT_Object.TheatreAddress << std::endl
    << "Movie Show Date : "  << MT_Object.MovieShowDate << std::endl
    << "Movie Show Time : "  << MT_Object.MovieShow_Time << std::endl
    << "No of Tickets : "  << MT_Object.No_Of_Tickets << std::endl << std::endl

    << "Seatings and Prices : " << std::endl;

    std::vector<Seatings_and_Price>::const_iterator Iter_1 = 
    MT_Object.Seatings_and_Price_Object.begin();

    while(Iter_1 != MT_Object.Seatings_and_Price_Object.end())
    {
        os << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os << std::endl

    << "Convenience Fees : "  << MT_Object.Convenience_Fees << std::endl << std::endl

    << "Food and Beverages : " << std::endl;

    std::vector<Single_Or_Combo_Of_FoodItemsMenu_And_Price>::const_iterator Iter_2 = 
    MT_Object.FoodBeverages_and_Prices_Object.begin();

    while(Iter_2 != MT_Object.FoodBeverages_and_Prices_Object.end())
    {
        os << *Iter_2 << std::endl;
        ++Iter_2;
    }
    os 
    << "--------------------------------------------------------------"
    << std::endl 

    << "Amount Payable : " << MT_Object.Amount_Payable << std::endl 
    << "Ticket Type : " << MT_Object.TicketType << std::endl;

    return os;
}