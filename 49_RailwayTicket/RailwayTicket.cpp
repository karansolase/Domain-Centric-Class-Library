#include "RailwayTicket.hpp"

Passenger_Details::Passenger_Details(
    std::string _Passenger_firstname,
    std::string _Passenger_secondname,

    unsigned int _Passenger_age,

    std::string _Passsenger_gender,
    std::string _berth_preference,
    std::string _nationality,
    std::string _is_senior_citizen,
    std::string _id_proof,

    unsigned long long int _Passenger_mobileno,
    std::string _Passenger_email)   :

    PassengerName(
        _Passenger_firstname,
        _Passenger_secondname),

    PassengerAge(_Passenger_age),

    PassengerGender(_Passsenger_gender),
    Berth_Preference(_berth_preference),
    Nationality(_nationality),
    Is_Senior_Citizen(_is_senior_citizen),
    ID_Proof(_id_proof),

    MobileNo(_Passenger_mobileno),
    Email(_Passenger_email)
{
}

IRCTC_Ticket::IRCTC_Ticket(
    std::string _Passenger_firstname,
    std::string _Passenger_secondname,

    unsigned int _Passenger_age,

    std::string _Passsenger_gender,
    std::string _berth_preference,
    std::string _nationality,
    std::string _is_senior_citizen,
    std::string _id_proof,

    unsigned long long int _Passenger_mobileno,
    std::string _Passenger_email,

    std::string _from_station,
    std::string _to_station,

    int _journeydate_year,
    int _journeydate_month,
    int _journeydate_day,

    std::string _travelclass,
    std::string _quota,
    unsigned int _trainnumber,
    std::string _trainname,
        
    int _departuretime_hour,
    int _departuretime_minute,
    std::string _departure_meridiemtime,

    int _arrivaltime_hour,
    int _arrivaltime_minute,
    std::string _arrival_meridiemtime,

    std::string _coach,
    unsigned int _berthNumber,
    std::string _boardingpoint,
    std::string _reservationupto,
    unsigned int _pnr_number,
    std::string _transaction_id,

    int _bookingdate_year,
    int _bookingdate_month,
    int _bookingdate_day,

    std::string _bookedfrom,

    double _base_fare,
    double _reservation_charges,
    double _superfast_charges,
    double _gst,

    std::string _travel_quota,
    std::string _ticketstatus,
    std::string _chart_status,
    std::string _cancellation_policy,
    std::string _coach_position)    :

    Passenger_Details_Object(
        _Passenger_firstname,
        _Passenger_secondname,
    
        _Passenger_age,

        _Passsenger_gender,
        _berth_preference,
        _nationality,
        _is_senior_citizen,
        _id_proof,

        _Passenger_mobileno,
        _Passenger_email),

    From_Station(_from_station),
    To_Station(_to_station),

    JourneyDate(
        _journeydate_year, "-",
        _journeydate_month, "-",
        _journeydate_day),
    
    TravelClass(_travelclass),
    Quota(_quota),
    TrainNumber(_trainnumber),
    TrainName(_trainname),

    DepartureTime(
        _departuretime_hour,
        _departuretime_minute,
        _departure_meridiemtime
    ),
    
    ArrivalTime(
        _arrivaltime_hour,
        _arrivaltime_minute,
        _arrival_meridiemtime),

    Coach(_coach),
    BerthNumber(_berthNumber),
    BoardingPoint(_boardingpoint),
    ReservationUpto(_reservationupto),
    PNR_Number(_pnr_number),
    TransactionID(_transaction_id),

    BookingDate(
        _bookingdate_year, "-",
        _bookingdate_month, "-",
        _bookingdate_day),

    BookedFrom(_bookedfrom),

    BaseFare("Rs", _base_fare),
    ReservationCharges("Rs", _reservation_charges),
    Superfast_Charges("Rs", _superfast_charges),
    GST("Rs", _gst),
    Total_Fare("Rs", 0.0),

    TravalQuota(_travel_quota),
    TicketStatus(_ticketstatus),
    ChartStatus(_chart_status),
    Cancellation_Policy(_cancellation_policy),
    CoachPosition(_coach_position)
{
    Total_Fare.P_Price = 
    BaseFare.P_Price +
    ReservationCharges.P_Price +
    Superfast_Charges.P_Price +
    GST.P_Price;
}

std::ostream& operator<<(std::ostream& os, const IRCTC_Ticket& IRCTC_Ticket_Object)
{
    os << "Railway Ticket Details : " << std::endl << std::endl

    << "Passenger Name : " << IRCTC_Ticket_Object.Passenger_Details_Object.PassengerName << std::endl
    << "Passenger Age : " << IRCTC_Ticket_Object.Passenger_Details_Object.PassengerAge << " Yrs" << std::endl
    << "Passenger Gender : " << IRCTC_Ticket_Object.Passenger_Details_Object.PassengerGender << std::endl
    << "Berth Preference : "<< IRCTC_Ticket_Object.Passenger_Details_Object.Berth_Preference << std::endl
    << "Nationality : " << IRCTC_Ticket_Object.Passenger_Details_Object.Nationality << std::endl
    << "Is Senior Citizen : "<< IRCTC_Ticket_Object.Passenger_Details_Object.Is_Senior_Citizen << std::endl
    << "ID Proof : " << IRCTC_Ticket_Object.Passenger_Details_Object.ID_Proof << std::endl
    << "Mobile No. : " << IRCTC_Ticket_Object.Passenger_Details_Object.MobileNo << std::endl
    << "Email : " << IRCTC_Ticket_Object.Passenger_Details_Object.Email << std::endl << std::endl

    << "From Station : "<< IRCTC_Ticket_Object.From_Station << std::endl
    << "To Station : "<< IRCTC_Ticket_Object.To_Station << std::endl
    << "Journey Date : " << IRCTC_Ticket_Object.JourneyDate << std::endl
    << "Travel Class : " << IRCTC_Ticket_Object.TravelClass << std::endl
    << "Quota : " << IRCTC_Ticket_Object.Quota << std::endl
    << "Train Number : " << IRCTC_Ticket_Object.TrainNumber << std::endl
    << "Train Name : " << IRCTC_Ticket_Object.TrainName << std::endl
    << "Departure Time : "<< IRCTC_Ticket_Object.DepartureTime << std::endl
    << "Arrival Time : "<< IRCTC_Ticket_Object.ArrivalTime << std::endl
    << "Coach : " << IRCTC_Ticket_Object.Coach << std::endl
    << "Boarding Point : " << IRCTC_Ticket_Object.BoardingPoint << std::endl
    << "BerthNumber : " << IRCTC_Ticket_Object.BerthNumber << std::endl
    << "Reservation Upto : "<< IRCTC_Ticket_Object.ReservationUpto << std::endl
    << "PNR Number : " << IRCTC_Ticket_Object.PNR_Number << std::endl
    << "Transaction ID : " << IRCTC_Ticket_Object.TransactionID << std::endl
    << "Booking Date : " << IRCTC_Ticket_Object.BookingDate << std::endl
    << "Booked From : " << IRCTC_Ticket_Object.BookedFrom << std::endl << std::endl

    << "Base Fare : " << IRCTC_Ticket_Object.BaseFare << std::endl
    << "Reservation Charges : " << IRCTC_Ticket_Object.ReservationCharges << std::endl
    << "Superfast Charges : " << IRCTC_Ticket_Object.Superfast_Charges << std::endl
    << "GST : " << IRCTC_Ticket_Object.GST << std::endl
    << "-----------------------------" << std::endl
    << "Total Fare : " << IRCTC_Ticket_Object.Total_Fare << std::endl << std::endl

    << "Travel Quota : " << IRCTC_Ticket_Object.TravalQuota << std::endl
    << "Ticket Status : " << IRCTC_Ticket_Object.TicketStatus << std::endl
    << "Chart Status : " << IRCTC_Ticket_Object.ChartStatus << std::endl
    << "Cancellation Policy : " << IRCTC_Ticket_Object.Cancellation_Policy << std::endl
    << "Coach Position : " << IRCTC_Ticket_Object.CoachPosition << std::endl;

    return os;
}