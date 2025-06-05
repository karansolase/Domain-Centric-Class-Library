#include "Bank_Information.hpp"

BankInformation::BankInformation(
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
    std::string _bank_IFSCcode)     :

    BI_BankName(_bankname),
    BI_BankBranch(_bankbranch),
    BI_BranchCode(_branchcode), 
    
    BI_BankAddress(
        _bankaddress_PremisesIdentifier,
        _bankaddress_LocalityDetails,
        _bankaddress_SubcityName,
        _bankaddress_CityName,
        _bankaddress_stateName,
        _bankaddress_pin_or_postalcode,
        _bankaddress_country_name),
    
    BI_BankContactInfo(_bank_Contactinfo),
    BI_BankOfficialWebsite_Or_Email(_bank_officialwebsite_or_email),
    BI_BankMICRCode(_bank_MICRCode),
    BI_BankIFSCCode(_bank_IFSCcode)
{
}

BankInformation::BankInformation(std::string _stringObject)   :
stringObject(_stringObject),
BI_BankAddress("")
{
}


std::ostream& operator<<(std::ostream& os, const BankInformation& BI_Object)
{
    os << "Bank Details : " << std::endl

    << "Bank Name : " << BI_Object.BI_BankName << std::endl
    << "Branch : " << BI_Object.BI_BankBranch << std::endl
    << "Branch Code : " << BI_Object.BI_BranchCode << std::endl << std::endl

    << "Bank Address : " << std::endl;
    BI_Object.BI_BankAddress.Printing_Address_Details_with_Field();
    os << std::endl

    << "Contact Info : ";
    for(const Contact_Info i : BI_Object.BI_BankContactInfo)
    {
        os << i << std::endl;
    }
    os << std::endl

    << "Bank Offical Website or Email : " << BI_Object.BI_BankOfficialWebsite_Or_Email << std::endl
    << "MICR Code : " << BI_Object.BI_BankMICRCode << std::endl
    << "IFSC Code : " << BI_Object.BI_BankIFSCCode << std::endl;

    return os;
}