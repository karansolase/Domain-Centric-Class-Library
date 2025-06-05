#pragma once 

#ifndef _LIGHTBILL_HPP
#define _LIGHTBILL_HPP

#include "Contact_Details.hpp"
#include "Measurement_and_unit.hpp"
#include "TransactionEntries.hpp"
#include "Date.hpp"

class Date_and_Units
{
    friend std::ostream& operator<<(std::ostream& os, const LightBill& LB_Object);

    private : 
    Date DateObject;
    int ElectricityUnits;

    public :
    Date_and_Units(
        std::string Month_in_String,
        int Year,
        int _ElectricityUnits);
};

class LightBill
{

    friend std::ostream& operator<<(std::ostream& os, const LightBill& LB_Object);

    private :
    Name_Address_Email_No LB_CustomerDetails;
    std::string LB_BillNo_GGN;
    Date LB_Bill_Supply_For_A_MonthOf;
    unsigned long long int LB_CustomerNo;
    unsigned long long int LB_HSNCode;

    std::string LB_BillingUnit; // बिलिंग unit
    std::string LB_Category; // दर संकेत
    std::string LB_PoleNO;
    std::string LB_PC_MR_RouteSequence_DTC;
    std::string LB_MeterNo;
    std::string LB_MeterGroup;
    Date LB_SupplyDate;
    Measurement_and_unit LB_SanctionedLoad;
    double LB_SecurityDeposit;
    Date LB_CurrentReading_Date;
    Date LB_PreviousReading_Date;

    double LB_CurrentReading;
    double LB_PreviousReading;
    double LB_MultiplicationFactor;
    int LB_Unit;
    int LB_AdjustedUnit;

    std::string LB_MeterStatus;
    Measurement_and_unit LB_BillPeriod;

    std::vector<Date_and_Units> LB_PastUnits;
    std::vector<Date_and_Units> LB_CurrentYearMonth_And_PreviousYearMonth_Unit;

    Date LB_BillDate;
    double LB_BillAmount;

    Date LB_MidDate;
    double LB_BillAmount_IfPaidByThis_MidDate;

    Date LB_BillDueDate;
    double LB_BillAmount_IfPaidAfterDueDate;

    double LB_FixedCharges; // स्थिर आकार
    double LB_EnergyCharges; // वीज आकार
    double LB_AdditionalSupplyCharges_; // वहन आकार 
    double LB_FAC; // इंधन समायोजन आकार
    double LB_ElectricityDuty; // वीज शुल्क
    double LB_TaxOnSale;  // विज विक्री कर
    double LB_CurrentInterest; // व्याज 
    double LB_OtherCharges; // इतर आकार
    double LB_Total; // चालू वीज देयक

    double LB_NetArrears; // निव्वळ थकबाकी / जमा
    double LB_Adjustments; // समायोजित रक्कम
    double LB_Interest_Arrears; // व्याजाची थकबाकी
    double LB_TotalArrears; // ऐकून थकबाकी
    double LB_NetBillAmount; // देयकाची निव्वळ रक्कम
    double LB_RoundedBill; // पूर्णांक देयक

    Date LB_LastReceiptDate; // 
    double LB_LastReceiptAmount; // 

    double LB_DelayedPaymentCharges; // विलंब आकार

    std::string GSTIN;
    std::vector <Transaction_Entries> LB_PaymentHistory;

    void Print_PaymentHistory_Format();
    double Calculate_Total(
        double _fixedcharges,
        double _energycharges,
        double _AdditonalSupplyCharges,
        double _FAC,
        double _ElectricityDuty,
        double taxOnsale,
        double CurrentInterest,
        double OtherCharges) const;

    double Calculate_TotalArrears(
        double _NetArrears,
        double _Adjustments,
        double _Interest_Arrears
    ) const;

    double roundCustom(double Value) const;

    public :
    LightBill(
        std::string _Customer_TitleName,
        std::string _Customer_firstName,
        std::string _Customer_middleName,
        std::string _Customer_SurName,

        std::string _Customer_Address_PremisesIdentifiers,
        std::initializer_list <std::string> _Customer_Address_LoaclityDetails,
        std::string _Customer_Address_SubCityName,
        std::string _Customer_Address_CityName,
        std::string _Customer_Address_StateName,
        int _Customer_pin_Or_PostalCode,

        std::string _Customer_Email,
        std::initializer_list <Contact_Info> Contact_Info_Object,

        std::string billno_ggn,

        std::string Month_of_BillFor,
        int Year_of_BillFor,

        unsigned long long int _Customerno,
        unsigned long long int _HSNCode,

        std::string _billingunit,
        std::string _category,
        std::string _poleno,
        std::string _pc_mr_routesequence_dtc,
        std::string _meterno,
        std::string _metergroup,

        int SupplyDate_day,
        int SupplyDate_month,
        int SupplyDate_year,

        double _sanctionedload_value,
        std::string _sanctionedload_unit_and_string,

        double SecurityDeposit,
        
        int CurrentReadingDate_day,
        int CurrentReadingDate_month,
        int CurrentReadingDate_year,

        int PreviousReading_day,
        int PreviousReading_month,
        int PreviousReading_year,

        double _currentReading,
        double _previousReading,
        double _multiplicationfactor,
        int _unit,
        int _adjustUnit,

        std::string _meterstatus,

        double BillBoard_value,
        std::string BillBoard_string,

        std::initializer_list <Date_and_Units> PastUnits,
        std::initializer_list <Date_and_Units> CurrentYearMonth_And_PreviousYearMoonth_Unit,

        int _BillDate_day,
        int _BillDate_month,
        int _BillDate_year,

        double _BillAmount,

        int _MidDate_day,
        int _MidDate_month,
        int _MidDate_year,

        double _BillAmount_IfPaidByThis_MidDate,

        int _BillDueDate_day,
        int _BillDueDate_month,
        int _BillDueDate_year,

        double _BillAmount_IfPaidAfterDueDate,

        double FixedCharges,
        double EnergyCharges,
        double AdditionalSupplyCharges,
        double FAC,
        double ElectricityDuty,
        double TaxONSale,
        double CurrentInterest,
        double OtherCharges,

        double NetArrears,
        double Adjustments,
        double Interest_Arrears,

        int LastReceiptDate_day,
        int LastReceiptDate_month,
        int LastReceiptDate_year,

        double LastReceiptAmount,
        double DelayedPaymentCharges,

        std::string _gstin,
        std::initializer_list <Transaction_Entries> PaymentHistory
    );
};

#endif /* LightBill.hpp */