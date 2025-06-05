#include "PassBook.hpp"

PassBook::PassBook(
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

    TransactionRecord _transactionRecord_Object)    :

    PB_BankDetails(
    _bankname,
    _bankbranch,
    _branchcode, 
    
    _bankaddress_PremisesIdentifier,
    _bankaddress_LocalityDetails,
    _bankaddress_SubcityName,
    _bankaddress_CityName,
    _bankaddress_stateName,
    _bankaddress_pin_or_postalcode,
    _bankaddress_country_name,
    
    _bank_Contactinfo,
    _bank_officialwebsite_or_email,
    _bank_MICRCode,
    _bank_IFSCcode
    ),

    PB_AccountHolder_Details(
        Title_Of_AccountHolder,
        FirstName_Of_AccountHolder,
        MiddleName_Of_AccountHolder,
        LastName_Of_AccountHolder,

        AccHolder_ContactInfo,

        AccHolderAddress_PremisesIdentifier,
        AccHolderAddress_LocalityDetails,
        AccHolderAddress_SubCityName,
        AccHolderAddress_CityName,
        AccHolderAddress_StateName,
        AccHolderAddress_pin_or_PostalCode,
        AccHolderAddress_CountryName,

        AccHolder_BirthDate_day,
        AccHolder_BirthDate_month,
        AccHolder_BirthDate_year,

        AccHolder_Email,
        AccHolder_Son_Or_Daughter_Or_Wife_Or_Husband_Of,
        AccHolder_AccountNumber,
        AccHolder_AccountType,

        AccHolder_AdharNo,

        AccHolder_CustomerId_Or_CustomerNo_Or_CustomerIdentificationNo,
        AccHolder_ModeOfOperation,
        AccHolder_Nomination_RegistratioNo,

        AccountOpeningDate_day,
        AccountOpeningDate_month,
        AccountOpeningDate_year,

        DateOfIssue_day,
        DateOfIssue_month,
        DateOfIssue_year,

        _passbookNo,
        _passbookType
    ),

    PB_TransactionRecord_Object(_transactionRecord_Object)
{
}

std::ostream& operator<<(std::ostream& os, const PassBook& PB_Object)
{
    os 
    << "PassBook Details : " << std::endl << std::endl

    << PB_Object.PB_BankDetails << std::endl
    << PB_Object.PB_AccountHolder_Details << std::endl;

    PB_Object.PB_TransactionRecord_Object.Print_TransactionTable_Format();
    os << std::endl

    << PB_Object.PB_TransactionRecord_Object << std::endl;
    return os;
}