#include "AdharCard.hpp"

AdharCard::AdharCard(
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
    int _adharcard_printdate_year)    :

    AdharCard_HolderName(
        _adharcard_holder_FirstName,
        _adharcard_holder_middleName,
        _adharcard_holder_surname),

    AdharCard_HolderAddress(
        _adharcard_holder_address_PremisesIdentifiers,
        _adharcard_holder_address_LocalityDetails,
        _adharcard_holder_subcityName,
        _adharcard_holder_CityName,
        _adharcard_holder_stateName,
        _adharcard_holder_pin_Or_PostalCode,
        _adharcard_holder_countryName),

    AdharCard_Holder_DOB(
        _adharcard_holder_DOB_day, "/",
        _adharcard_holder_DOB_month, "/",
        _adharcard_holder_DOB_year
    ),

    AdharCard_Holder_Gender(
        _adhardcard_holder_gender),

    AdharCard_No(_adharcard_No),
    AdharCard_VID(_adharcard_VID),

    AdharCard_DownloadDate(
        _adharcard_downloaddate_day, "/",
        _adharcard_downloaddate_month, "/",
        _adharcard_downloaddate_year),

    AdharCard_IssuedDate(
        _adharcard_issueddate_day, "/",
        _adharcard_issueddate_month, "/",
        _adharcard_issueddate_year),

    AdharCard_PrintDate(
        _adharcard_printdate_day, "/",
        _adharcard_printdate_month, "/",
        _adharcard_printdate_year)

{
}

std::ostream& operator<<(std::ostream& os, const AdharCard& AdharCardObject)
{
    os << "Adhar Card Details : " << std::endl << std::endl

    << "Adhar Card Holder Name : "  << AdharCardObject.AdharCard_HolderName << std::endl
    << "Adhar Card Holder Address : "  << AdharCardObject.AdharCard_HolderAddress << std::endl
    << "Adhar Card Holder Date of Birth : " << AdharCardObject.AdharCard_Holder_DOB << std::endl
    << "Adhar Card Holder Gender : "  << AdharCardObject.AdharCard_Holder_Gender << std::endl << std::endl

    << "Adhar Card No. : "  << AdharCardObject.AdharCard_No << std::endl
    << "Adhar Card VID : "  << AdharCardObject.AdharCard_VID << std::endl << std::endl
    
    << "Adhar Card Download Date : " << AdharCardObject.AdharCard_DownloadDate << std::endl
    << "Adhar Card Issued Date : " << AdharCardObject.AdharCard_IssuedDate << std::endl
    << "Adhar Card Print Date : " << AdharCardObject.AdharCard_PrintDate << std::endl;

    return os;
}