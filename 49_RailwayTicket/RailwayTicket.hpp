#pragma once 

#ifndef _RAILWAYTICEKT_HPP
#define _RAILWAYTICKET_HPP

#include <iostream>
#include "Name.hpp"
#include "Address.hpp"
#include "Contact_Info.hpp"
#include "Price.hpp"
#include "Time.hpp"
#include "Date.hpp"

class IRCTC_Ticket;

class Passenger_Details
{
    friend std::ostream& operator<<(std::ostream& os, const IRCTC_Ticket& IRCTC_Ticket_Object);
    private :
    Name PassengerName;
    unsigned int PassengerAge;
    std::string PassengerGender;
    std::string Berth_Preference;
    std::string Nationality;
    std::string Is_Senior_Citizen;
    std::string ID_Proof;

    Contact_Info MobileNo;
    std::string Email;

    public :
    Passenger_Details(
        std::string _Passenger_firstname,
        std::string _Passenger_secondname,

        unsigned int _Passenger_age,

        std::string _Passsenger_gender,
        std::string _berth_preference,
        std::string _nationality,
        std::string _is_senior_citizen,
        std::string _id_proof,

        unsigned long long int _Passenger_mobileno,
        std::string _Passenger_email
    );
};

class IRCTC_Ticket 
{
    friend std::ostream& operator<<(std::ostream& os, const IRCTC_Ticket& IRCTC_Ticket_Object);

    private :
    Passenger_Details Passenger_Details_Object;
    Address From_Station;
    Address To_Station;
    Date JourneyDate;
    std::string TravelClass;
    std::string Quota;
    unsigned int TrainNumber;
    std::string TrainName;
    Time DepartureTime;
    Time ArrivalTime;
    std::string Coach;
    unsigned int BerthNumber;
    Address BoardingPoint;
    Address ReservationUpto;
    unsigned int PNR_Number;
    std::string TransactionID;
    Date BookingDate;
    std::string BookedFrom;

    Price BaseFare;
    Price ReservationCharges;
    Price Superfast_Charges;
    Price GST;
    Price Total_Fare;

    std::string TravalQuota;
    std::string TicketStatus;
    std::string ChartStatus;
    std::string Cancellation_Policy;
    std::string CoachPosition;

    public :
    IRCTC_Ticket(
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
        std::string _coach_position
    );
};

#endif /* RailwayTicket.hpp */