#pragma once 

#ifndef _ADHARCARD_HPP
#define _ADHARCARD_HPP

#include "Name.hpp"
#include "Address.hpp"
#include "Date.hpp"

class AdharCard
{
    friend std::ostream& operator<<(std::ostream& os, const AdharCard& AdharCardObject);

    private :
    Name AdharCard_HolderName;
    Address AdharCard_HolderAddress;
    Date AdharCard_Holder_DOB;
    std::string AdharCard_Holder_Gender;

    unsigned long long int AdharCard_No;
    unsigned long long int AdharCard_VID;

    Date AdharCard_DownloadDate;
    Date AdharCard_IssuedDate;
    Date AdharCard_PrintDate;

    public :
    AdharCard(
        std::string _adharcard_holder_FirstName,
        std::string _adharcard_holder_middleName,
        std::string _adharcard_holder_surname,

        std::string _adharcard_holder_address_PremisesIdentifiers,
        std::initializer_list <std::string> _adharcard_holder_address_LocalityDetails,
        std::string _adharcard_holder_subcityName,
        std::string _adharcard_holder_CityName,
        std::string _adharcard_holder_stateName,
        int _adharcard_holder_pin_Or_PostalCode,
        std::string _adharcard_holder_countryName,

        int _adharcard_holder_DOB_day,
        int _adharcard_holder_DOB_month,
        int _adharcard_holder_DOB_year,

        std::string _adhardcard_holder_gender,

        unsigned long long int _adharcard_No,
        unsigned long long int _adharcard_VID,

        int _adharcard_downloaddate_day,
        int _adharcard_downloaddate_month,
        int _adharcard_downloaddate_year,

        int _adharcard_issueddate_day,
        int _adharcard_issueddate_month,
        int _adharcard_issueddate_year,

        int _adharcard_printdate_day,
        int _adharcard_printdate_month,
        int _adharcard_printdate_year
    );
};

#endif /* AdharCard.hpp */