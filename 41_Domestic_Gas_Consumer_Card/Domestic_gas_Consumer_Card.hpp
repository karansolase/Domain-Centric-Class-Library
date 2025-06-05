#pragma once 

#ifndef _DOMESTIC_GAS_CONSUMER_CARD_HPP
#define _DOMESTIC_GAS_CONSUMER_CARD_HPP

#include "Date.hpp"
#include "Price.hpp"
#include "Name.hpp"
#include "Address.hpp"
#include "Contact_Details.hpp"

class DGCC;

class DGCC_RefillReceipt_Entries
{
    friend std::ostream& operator<<(std::ostream& os, const DGCC& DGCCObject);
    
    private :
    unsigned int DGCC_RR_SerialNo;
    unsigned int DGCC_RR_OrderNo;
    std::string DGCC_RR_CashMemoNo;
    Date DGCC_RR_DeliveryDate;

    public :
    DGCC_RefillReceipt_Entries(
        unsigned int _RefillReceipt_SerialNo,
        unsigned int RefillReceipt_OrderNo,
        std::string RefillReceipt_CashMemoNo,
        
        int RefillReceipt_DeliveryDate_day,
        int RefillReceipt_DeliveryDate_month,
        int RefillReceipt_DeliveryDate_year);
};

class DGCC
{
    friend std::ostream& operator<<(std::ostream& os, const DGCC& DGCCObject);

    private : 
    unsigned int DGCC_CardSerailNo_HPC;
    unsigned int DGCC_ConsumerNo;
    
    unsigned int DGCC_SVNo;
    Date DGCC_date_with_SVNo;

    unsigned int DGCC_NoOFCylinders;
    Price Deposit_Amount_1;

    unsigned int DGCC_NoOfRegulators;
    Price Deposit_Amount_2;

    Name DGCC_ConsumerName;
    Address DGCC_ConsumerAddress;
    
    std::string DGCC_DistributorCode;
    Name_Address_Email_No DGCC_DistributorDetails;

    std::string DGCC_IssuingCompany;
    Date DGCC_Issuingdate;

    std::vector<DGCC_RefillReceipt_Entries> DGCC_RefillReceiptObject;

    public :

    DGCC(
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

        std::initializer_list <DGCC_RefillReceipt_Entries> _RefillReceipt_Entries);
};

#endif /* Domestic_gas_Consumer_Card.hpp */