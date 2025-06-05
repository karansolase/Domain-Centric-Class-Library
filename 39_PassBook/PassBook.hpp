#pragma once 

#ifndef _PASSBOOK_HPP
#define _PASSBOOK_HPP

#include <iostream>
#include "Name.hpp"
#include "Address.hpp"
#include "Contact_Info.hpp"
#include "Date.hpp"
#include "TransactionRecord.hpp"
#include "Bank_Information.hpp"
#include "BankAccountHolder_Info.hpp"
#include <vector>

class PassBook
{
    friend std::ostream& operator<<(std::ostream& os, const PassBook& PB_Object);

    private :
    // Bank Details : 
    BankInformation PB_BankDetails;
    
    // Person Details :
    BankAccountHolder_Info PB_AccountHolder_Details;

    // Transaction Details : 
    TransactionRecord PB_TransactionRecord_Object;

    public :

    PassBook(
        std::string _bankname,
        std::string _bankbranch,
        unsigned int _branchcode,

        std::string _bankaddress_PremisesIdentifier,
        std::initializer_list <std::string> _bankaddress_LocalityDetails,
        std::string _bankaddress_SubcityName,
        std::string _bankaddress_CityName,
        std::string _bankaddress_stateName,
        int _bankaddress_pin_or_postalcode,
        std::string _bankaddress_country_name,

        std::initializer_list <Contact_Info> _bank_Contactinfo,

        std::string _bank_officialwebsite_or_email,
        unsigned int _bank_MICRCode,
        std::string _bank_IFSCcode,

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
        std::string _passbookType,

        TransactionRecord _transactionRecord_Object
    );
};

#endif /* PassBook.hpp */