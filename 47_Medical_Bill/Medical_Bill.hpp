#pragma once

#ifndef _FEE_RECEIPT_HPP
#define _FEE_RECEIPT_HPP

#include <iostream>
#include "Address.hpp"
#include "Price.hpp"
#include "Time.hpp"
#include "Measurement_and_unit.hpp"
#include "MedicalCharges_and_Price.hpp"
#include "Name.hpp"
#include "Date.hpp"

class MedicalBill
{
    friend std::ostream& operator<<(std::ostream& os, const MedicalBill& MB_Object);

    private :
    Address MB_HospitalAddress;
    unsigned int MB_BillNo;
    Date MB_BillDate;

    Name MB_PatientName;
    std::string MB_PatientID;
    Address MB_PatientAddress;
    std::string MB_Gender;
    Measurement_and_unit MB_PatientAge;

    std::string MB_AdmissionNo;
    std::string MB_BedCategory;

    Date MB_AdmissionDate;
    Time MB_AdmissionTime;

    Date MB_DischargeDate;
    Time MB_DischargeTime;

    std::vector<double> MB_SurgeonCharges_Amounts;
    Price MB_Total_Of_SurgeonCharges;

    std::vector<double> MB_AnaesthethistsCharges_Amounts;
    Price MB_Total_Of_AnaesthethistsCharges;

    std::vector<MedicalCharges_and_Price> MedicalCharges_and_Price_Object;
    Price MB_Total_Of_Items_and_Services;

    Price MB_DiscountAmount;
    Price MB_AdvanceAmount;
    Price MB_RefundAmount;

    Price MB_AmountPayable;

    double Calculate_Total(std::vector<double> _charges);
    double Calculate_Total_Of_Items_And_Services();

    public :

    MedicalBill(
        std::string Hospital_Address_PremisesIdentifiers,
        std::initializer_list <std::string> Hospital_Address_Locality_Details,
        std::string Hospital_Address_SubCityName,
        std::string Hospital_Address_CityName,
        unsigned int Hosptial_Address_Pin_OR_PostalCode,
        std::string Hospital_Address_StateName,

        unsigned int _billno,
        
        int BillDate_day,
        int BillDate_month,
        int BillDate_year,

        std::string _titlename,
        std::string _firstname,
        std::string _middlename,
        std::string _surname,

        std::string _patient_id,
        std::string _patient_address,
        std::string _patient_gender,

        double _patient_age,
        std::string _age_unit,

        std::string _admission_no,
        std::string _bed_category,

        int _admissiondate_day,
        int _admissiondate_month,
        int _admissiondate_year,

        int _admissiontime_hour,
        int _admissiontime_minute,
        std::string _admission_meridiemtime,

        int _dischargedate_day,
        int _dischargedate_month,
        int _dischargedate_year,

        int _dischargetime_hour,
        int _dischargetime_minute,
        std::string _dischargetime_meridiemtime,

        std::initializer_list <double> _surgeoncharges_amounts,
        std::initializer_list <double> _anaesthethistscharges_amounts,
        std::initializer_list <MedicalCharges_and_Price> _medicalcharges_and_price_object,

        double _discountamount,
        double _advance_amount
    );
};

#endif /* Medical_Bill.hpp */