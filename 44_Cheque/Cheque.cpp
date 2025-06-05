#include "Cheque.hpp"

Cheque::Cheque(
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
    int _cheque_DateofIsuue_year)    :

    Chq_BankInfoObject(
        _cheque_BankName,
        "",
        0,

        _cheque_BankAddress_PremisesIdentifiers,
        _cheque_BankAddress_LocalityDetails,
        _cheque_BankAddress_SubCityName,
        _cheque_BankAddress_CityName,
        _cheque_BankAddress_StateName,
        _cheque_BankAddress_pin_Or_PostalCode,
        "",

        {{""}},

        "",
        0,
        _cheque_BankIFSCCode
    ),

    Chq_PayeeName(_cheque_PayeeName),


    Chq_DrawerName(_cheque_DrawerName),
    Chq_AccNo(_cheque_DrawerAccNo),
    Chq_AmountInNumber(
        _cheque_AmountCurrency,
        _cheque_Amount_inNumber),
    Chq_AmountinWords(
        _cheque_Amount_inWords),
    Chq_DateOfIssue(
        _cheque_DateOfIsuue_day, "-",
        _cheque_DateOfIsuue_month, "-",
        _cheque_DateofIsuue_year)
{
}

std::ostream& operator<<(std::ostream& os, const Cheque& ChqObject)
{
    os << "Cheque Details : " << std::endl << std::endl

    << "Bank Name : "  << ChqObject.Chq_BankInfoObject.BI_BankName << std::endl
    << "Bank Address : " << ChqObject.Chq_BankInfoObject.BI_BankAddress << std::endl
    << "Bank IFSC Code : " << ChqObject.Chq_BankInfoObject.BI_BankIFSCCode << std::endl << std::endl

    << "Payee Name : " << ChqObject.Chq_PayeeName << std::endl
    << "Drawer Name : " << ChqObject.Chq_DrawerName << std::endl
    << "Drawer's Account Number : " << ChqObject.Chq_AccNo << std::endl 
   
    << "Amount in Number : " << ChqObject.Chq_AmountInNumber << std::endl
    << "Amount in Words : " << ChqObject.Chq_AmountinWords << std::endl 
    << "Date of Issue : "  << ChqObject.Chq_DateOfIssue << std::endl;

    return os;
}