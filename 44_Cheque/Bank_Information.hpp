#pragma once

#ifndef _BANK_INFO_HPP
#define _BANK_INFO_HPP

#include "Address.hpp"
#include "Contact_Info.hpp"
#include <iostream>

class Cheque;

class BankInformation
{
    friend std::ostream& operator<<(std::ostream& os, const BankInformation& BI_Object);
    friend std::ostream& operator<<(std::ostream& os, const Cheque& ChqObject);
    friend class Cheque;

    private :
    std::string BI_BankName;
    std::string BI_BankBranch;
    unsigned int BI_BranchCode;
    Address BI_BankAddress;
    std::vector <Contact_Info> BI_BankContactInfo;
    std::string BI_BankOfficialWebsite_Or_Email;
    unsigned int BI_BankMICRCode;
    std::string BI_BankIFSCCode;

    std::string stringObject;

    public :
    BankInformation(
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
        std::string _bank_IFSCcode
    );

    BankInformation(
        std::string _stringObject);
};

#endif /* Bank_Information.hpp */