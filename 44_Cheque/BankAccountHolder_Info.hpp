#pragma once

#ifndef _BANKACCOUNTHOLDER_INFO_HPP
#define _BANKACCOUNTHOLDER_INFO_HPP

#include "Name.hpp"
#include "Address.hpp"
#include "Contact_Info.hpp"
#include "Date.hpp"

class Cheque;

class BankAccountHolder_Info
{
    friend std::ostream& operator<<(std::ostream& os, const BankAccountHolder_Info& BAH_Info_Object);
    friend std::ostream& operator<<(std::ostream& os, const Cheque& ChqObject);

    private :
    Name B_AccHolder_Name;
    Address B_AccHolder_Address;
    Contact_Info B_AccHolder_ContactNo;
    Date B_AccHolder_DOB;
    std::string B_AccHolder_Email;
    std::string B_AccHolder_Son_Or_Daughter_Or_Wife_Or_Husband_OF;
    std::string B_AccHolder_AccountNumber;
    std::string B_AccHolder_AccountType;
    unsigned long long B_AccHolder_AdharNo;
    std::string B_AccHolder_CustomerID_Or_CustomerNo_Or_CustomerIdentificatioNo;
    std::string B_AccHolder_ModeOfOperation;
    std::string B_AccHolder_Nomination_RegisteredNo;

    Date B_AccHolder_AccountOpeningDate;
    Date B_AccHolder_DateOfIssue;

    unsigned int B_AccHolder_PassBookNo;
    std::string B_AccHolder_PassBookType;

    std::string B_StringObject;

    public : 

    BankAccountHolder_Info(
        std::string Title_Of_AccountHolder,
        std::string FirstName_Of_AccountHolder,
        std::string MiddleName_Of_AccountHolder,
        std::string LastName_Of_AccountHolder,

        Contact_Info AccHolder_ContactInfo,

        std::string AccHolderAddress_PremisesIdentifier,
        std::initializer_list <std::string> AccHolderAddress_LocalityDetails,
        std::string AccHolderAddress_SubCityName,
        std::string AccHolderAddress_CityName,
        std::string AccHolderAddress_StateName,
        int AccHolderAddress_pin_or_PostalCode,
        std::string AccHolderAddress_CountryName,

        int AccHolder_BirthDate_day,
        int AccHolder_BirthDate_month,
        int AccHolder_BirthDate_year,

        std::string AccHolder_Email,
        std::string AccHolder_Son_Or_Daughter_Or_Wife_Or_Husband_Of,
        std::string AccHolder_AccountNumber,
        std::string AccHolder_AccountType,

        unsigned long long AccHolder_AdharNo,

        std::string AccHolder_CustomerId_Or_CustomerNo_Or_CustomerIdentificationNo,
        std::string AccHolder_ModeOfOperation,
        std::string AccHolder_Nomination_RegistratioNo,

        int AccountOpeningDate_day,
        int AccountOpeningDate_month,
        int AccountOpeningDate_year,

        int DateOfIssue_day,
        int DateOfIssue_month,
        int DateOfIssue_year,

        unsigned int _passbookNo,
        std::string _passbookType
    );

    BankAccountHolder_Info(
        std::string _StringObject);
};

#endif /* BankAccountHolder_Info.hpp */