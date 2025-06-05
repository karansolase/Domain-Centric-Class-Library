#pragma once 

#ifndef _CHEQUE_HPP
#define _CHEQUE_HPP

#include <iostream>
#include "Bank_Information.hpp"
#include "BankAccountHolder_Info.hpp"
#include "Date.hpp"
#include "Price.hpp"

class Cheque
{
    friend std::ostream& operator<<(std::ostream& os, const Cheque& ChqObject);

    private :
    BankInformation Chq_BankInfoObject;
    Name Chq_PayeeName;

    Name Chq_DrawerName;
    std::string Chq_AccNo;
    Price Chq_AmountInNumber;
    std::string Chq_AmountinWords;
    Date Chq_DateOfIssue;

    public :
    Cheque(
        std::string _cheque_BankName,
        
        std::string _cheque_BankAddress_PremisesIdentifiers,
        std::initializer_list <std::string> _cheque_BankAddress_LocalityDetails,
        std::string _cheque_BankAddress_SubCityName,
        std::string _cheque_BankAddress_CityName,
        std::string _cheque_BankAddress_StateName,
        int _cheque_BankAddress_pin_Or_PostalCode,

        std::string _cheque_BankIFSCCode,
        
        Name _cheque_PayeeName,

        Name _cheque_DrawerName,
        std::string _cheque_DrawerAccNo,
        std::string _cheque_AmountCurrency,
        double _cheque_Amount_inNumber,
        std::string _cheque_Amount_inWords,

        int _cheque_DateOfIsuue_day,
        int _cheque_DateOfIsuue_month,
        int _cheque_DateofIsuue_year
    );
};

#endif /* Cheque.hpp */