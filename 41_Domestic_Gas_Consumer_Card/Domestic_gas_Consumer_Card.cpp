#include "Domestic_gas_Consumer_Card.hpp"

DGCC_RefillReceipt_Entries::DGCC_RefillReceipt_Entries(
    unsigned int _RefillReceipt_SerialNo,
    unsigned int RefillReceipt_OrderNo,
    std::string RefillReceipt_CashMemoNo,
    
    int RefillReceipt_DeliveryDate_day,
    int RefillReceipt_DeliveryDate_month,
    int RefillReceipt_DeliveryDate_year)    :

    DGCC_RR_SerialNo(_RefillReceipt_SerialNo),
    DGCC_RR_OrderNo(RefillReceipt_OrderNo),
    DGCC_RR_CashMemoNo(RefillReceipt_CashMemoNo),
    
    DGCC_RR_DeliveryDate(
        RefillReceipt_DeliveryDate_day, "-",
        RefillReceipt_DeliveryDate_month, "-",
        RefillReceipt_DeliveryDate_year)
{
}

DGCC::DGCC(
    unsigned int _cardserialno_hpc,
    unsigned int _consumerno,

    unsigned int _svno,
    int _day_with_svno,
    int _month_with_svno,
    int _year_with_svno,

    unsigned int _noOfCylinders,
    std::string Deposit_Amount_1_Currency,
    double Deposit_Amount_1,

    unsigned int _noOfRegulators,
    std::string Deposit_Amount_2_Currency,
    double Deposit_Amount_2,

    std::string ConsumerName_title,
    std::string Consumer_FirstName,
    std::string Consumer_MiddleName,
    std::string Consumer_SurName,

    std::string Consumer_Address_PremisesIdentifiers,
    std::initializer_list <std::string> Consumer_Address_LocalityDetails,
    std::string Consumer_Address_SubCityName,
    std::string Consumer_Address_CityName,
    std::string Consumer_Address_StateName,
    int Consumer_Address_pin_Or_postalCode,
    std::string Consumer_Address_CountryName,

    std::string _distributorCode,

    std::string Distributor_name,
    std::string Distributor_Address_PremisesIdentifiers,
    std::initializer_list <std::string> Distributor_Address_LocalityDetails,
    std::string Distributor_Address_SubCityname,
    std::string Distributor_Address_CityName,
    std::string Distributor_Address_StateName,
    int Distributor_Address_Pin_OR_PostalCode,
    std::string Distributor_Address_Countryname,

    std::initializer_list<Contact_Info> Distributor_Contact_info,

    std::string IssuingCompany,
        
    int Issuingdate_day,
    int Issuingdate_month,
    int Issuingdate_year,

    std::initializer_list <DGCC_RefillReceipt_Entries> _RefillReceipt_Entries)    :

    DGCC_CardSerailNo_HPC(_cardserialno_hpc),
    DGCC_ConsumerNo(_consumerno),
    
    DGCC_SVNo(_svno),
    DGCC_date_with_SVNo(
        _day_with_svno, "-",
        _month_with_svno, "-",
        _year_with_svno),

    DGCC_NoOFCylinders(_noOfCylinders),

    Deposit_Amount_1(
        Deposit_Amount_1_Currency,
        Deposit_Amount_1),

    DGCC_NoOfRegulators(_noOfRegulators),
    
    Deposit_Amount_2(
        Deposit_Amount_2_Currency,
        Deposit_Amount_2),

    DGCC_ConsumerName(
        ConsumerName_title,
        Consumer_FirstName,
        Consumer_MiddleName,
        Consumer_SurName),

    DGCC_ConsumerAddress(
        Consumer_Address_PremisesIdentifiers,
        Consumer_Address_LocalityDetails,
        Consumer_Address_SubCityName,
        Consumer_Address_CityName,
        Consumer_Address_StateName,
        Consumer_Address_pin_Or_postalCode,
        Consumer_Address_CountryName),
    
    DGCC_DistributorCode(_distributorCode),
    DGCC_DistributorDetails(
        {Distributor_name},
        {
            Distributor_Address_PremisesIdentifiers,
            Distributor_Address_LocalityDetails,
            Distributor_Address_SubCityname,
            Distributor_Address_CityName,
            Distributor_Address_StateName,
            Distributor_Address_Pin_OR_PostalCode,
            Distributor_Address_Countryname
        },
        "",
        Distributor_Contact_info
    ),

    DGCC_IssuingCompany(IssuingCompany),
    DGCC_Issuingdate(
        Issuingdate_day, "-",
        Issuingdate_month, "-",
        Issuingdate_year),

    DGCC_RefillReceiptObject(_RefillReceipt_Entries)
{
}

std::ostream& operator<<(std::ostream& os, const DGCC& DGCCObject)
{
    os << "Domestic Gas Consumer Card Details : " << std::endl << std::endl

    << "Serial No. : " << DGCCObject.DGCC_CardSerailNo_HPC << std::endl
    << "Consumer No. : " << DGCCObject.DGCC_ConsumerNo << std::endl 
    << "SV No & Date : " << DGCCObject.DGCC_SVNo << " | " << DGCCObject.DGCC_date_with_SVNo << std::endl
    << "No of Cylinders : " << DGCCObject.DGCC_NoOFCylinders << std::endl
    << "Deposit Amount : " << DGCCObject.Deposit_Amount_1 << std::endl
    
    << std::endl
    << "No of Regulators : " << DGCCObject.DGCC_NoOfRegulators << std::endl
    << "Deposit Amount : " << DGCCObject.Deposit_Amount_2 << std::endl
    << std::endl

    << "Consumer Name : " << DGCCObject.DGCC_ConsumerName << std::endl
    << "Consumer Address : " << DGCCObject.DGCC_ConsumerAddress << std::endl

    << "Distributor Code : " << DGCCObject.DGCC_DistributorCode << std::endl
    << "Distributor Details : " << std::endl 
    << DGCCObject.DGCC_DistributorDetails

    << "Issuing Company : " << DGCCObject.DGCC_IssuingCompany << std::endl
    << "Issuing Date : " << DGCCObject.DGCC_Issuingdate << std::endl

    << "Gas PassBook Entries : " << std::endl
    << "Format : Serial No | Refill Order No. of Distributor | Cash Memo No | Delivery Date | " <<
    std::endl;

    std::vector<DGCC_RefillReceipt_Entries>::const_iterator Iter = 
    DGCCObject.DGCC_RefillReceiptObject.begin();

    while(Iter != DGCCObject.DGCC_RefillReceiptObject.end())
    {
        os 
        << (*Iter).DGCC_RR_SerialNo     << " | "
        << (*Iter).DGCC_RR_OrderNo      << " | "
        << (*Iter).DGCC_RR_CashMemoNo   << " | "
        << (*Iter).DGCC_RR_DeliveryDate << " | "
        << std::endl;

        ++Iter;
    }
    
    return os;
}