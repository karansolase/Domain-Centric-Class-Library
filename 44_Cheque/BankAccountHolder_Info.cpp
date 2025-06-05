#include "BankAccountHolder_Info.hpp"

BankAccountHolder_Info::BankAccountHolder_Info(
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
    std::string _passbookType)    :

    B_AccHolder_Name(
        Title_Of_AccountHolder,
        FirstName_Of_AccountHolder,
        MiddleName_Of_AccountHolder,
        LastName_Of_AccountHolder),
    
    B_AccHolder_Address(
        AccHolderAddress_PremisesIdentifier,
        AccHolderAddress_LocalityDetails,
        AccHolderAddress_SubCityName,
        AccHolderAddress_CityName,
        AccHolderAddress_StateName,
        AccHolderAddress_pin_or_PostalCode,
        AccHolderAddress_CountryName),

    B_AccHolder_ContactNo(AccHolder_ContactInfo),

    B_AccHolder_DOB(
        AccHolder_BirthDate_day, "/",
        AccHolder_BirthDate_month, "/",
        AccHolder_BirthDate_year),

    B_AccHolder_Email(AccHolder_Email),
    
    B_AccHolder_Son_Or_Daughter_Or_Wife_Or_Husband_OF(
    AccHolder_Son_Or_Daughter_Or_Wife_Or_Husband_Of),
    
    B_AccHolder_AccountNumber(AccHolder_AccountNumber),
    B_AccHolder_AccountType(AccHolder_AccountType),
    B_AccHolder_AdharNo(AccHolder_AdharNo),

    B_AccHolder_CustomerID_Or_CustomerNo_Or_CustomerIdentificatioNo(
    AccHolder_CustomerId_Or_CustomerNo_Or_CustomerIdentificationNo),
    
    B_AccHolder_ModeOfOperation(AccHolder_ModeOfOperation), 
    B_AccHolder_Nomination_RegisteredNo(AccHolder_Nomination_RegistratioNo),

    B_AccHolder_AccountOpeningDate(
        AccountOpeningDate_day, "/",
        AccountOpeningDate_month, "/",
        AccountOpeningDate_year),

    B_AccHolder_DateOfIssue(
        DateOfIssue_day, "/",
        DateOfIssue_month, "/",
        DateOfIssue_year),

    B_AccHolder_PassBookNo(_passbookNo),
    B_AccHolder_PassBookType(_passbookType)
{
}

BankAccountHolder_Info::BankAccountHolder_Info(
    std::string _StringObject)     :
    B_StringObject(_StringObject),
    B_AccHolder_Name(""),
    B_AccHolder_Address(""),
    B_AccHolder_ContactNo(""),
    B_AccHolder_DOB(0,0,0),
    B_AccHolder_AccountOpeningDate(0,0,0),
    B_AccHolder_DateOfIssue(0,0,0)
{
}

std::ostream& operator<<(std::ostream& os, const BankAccountHolder_Info& BAH_Info_Object)
{
    os << "Bank Account Holder Details : " << std::endl

    << "Name : " << BAH_Info_Object.B_AccHolder_Name << std::endl << std::endl
    
    << "Address : " << std::endl;
    BAH_Info_Object.B_AccHolder_Address.Printing_Address_Details_with_Field();
    os << std::endl

    << "Contact Info : " << BAH_Info_Object.B_AccHolder_ContactNo << std::endl
    << "Date of Birth : " << BAH_Info_Object.B_AccHolder_DOB << std::endl
    << "Email : " << BAH_Info_Object.B_AccHolder_Email << std::endl
    << "S/D/W/H Of : " << BAH_Info_Object.B_AccHolder_Son_Or_Daughter_Or_Wife_Or_Husband_OF << std::endl
    << "Accout Number : " << BAH_Info_Object.B_AccHolder_AccountNumber << std::endl
    << "Account Type : " << BAH_Info_Object.B_AccHolder_AccountType << std::endl
    << "Adhar No. : " << BAH_Info_Object.B_AccHolder_AdharNo << std::endl
    << "Customer ID / Customer Identification File Number / Customer No : " 
    << BAH_Info_Object.B_AccHolder_CustomerID_Or_CustomerNo_Or_CustomerIdentificatioNo << std::endl
    << "Mode Of Operation : " << BAH_Info_Object.B_AccHolder_ModeOfOperation << std::endl
    << "Nomination Registered No : " << BAH_Info_Object.B_AccHolder_Nomination_RegisteredNo << std::endl << std::endl

    << "Acconut Opening Date : " << BAH_Info_Object.B_AccHolder_AccountOpeningDate << std::endl
    << "Date of Issue : " << BAH_Info_Object.B_AccHolder_DateOfIssue << std::endl
    << "PassBook No. : " << BAH_Info_Object.B_AccHolder_PassBookNo << std::endl
    << "PassBook Type : " << BAH_Info_Object.B_AccHolder_PassBookType << std::endl << std::endl;

    return os;
}