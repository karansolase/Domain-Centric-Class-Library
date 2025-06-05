#include "Medical_Bill.hpp"

MedicalBill::MedicalBill(
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
    double _advance_amount)    :

    MB_HospitalAddress(
        Hospital_Address_PremisesIdentifiers,
        Hospital_Address_Locality_Details,
        Hospital_Address_SubCityName,
        Hospital_Address_CityName,
        Hospital_Address_StateName,
        Hosptial_Address_Pin_OR_PostalCode,
        ""),

    MB_BillNo(_billno),

    MB_BillDate(
        BillDate_day, "/",
        BillDate_month, "/",
        BillDate_year
    ),

    MB_PatientName(
        _titlename,
        _firstname,
        _middlename,
        _surname),

    MB_PatientID(_patient_id),
    MB_PatientAddress(_patient_address),
    MB_Gender(_patient_gender),
    MB_PatientAge(
        _patient_age,
        _age_unit),

    MB_AdmissionNo(_admission_no),
    MB_BedCategory(_bed_category),

    MB_AdmissionDate(
        _admissiondate_day, "/",
        _admissiondate_month, "/",
        _admissiondate_year
    ),
    MB_AdmissionTime(
        _admissiontime_hour,
        _admissiontime_minute,
        _admission_meridiemtime),

    MB_DischargeDate(
        _dischargedate_day, "/",
        _dischargedate_month, "/",
        _dischargedate_year
    ),
    MB_DischargeTime(
        _dischargetime_hour,
        _dischargetime_minute,
        _dischargetime_meridiemtime),

    MB_SurgeonCharges_Amounts(_surgeoncharges_amounts),
    MB_AnaesthethistsCharges_Amounts(_anaesthethistscharges_amounts),
    MedicalCharges_and_Price_Object(_medicalcharges_and_price_object),

    MB_DiscountAmount("Rs", _discountamount),
    MB_AdvanceAmount("Rs", _advance_amount),

    MB_Total_Of_SurgeonCharges("Rs", 0),
    MB_Total_Of_AnaesthethistsCharges("Rs", 0),
    MB_Total_Of_Items_and_Services("Rs", 0),
    MB_RefundAmount("Rs", 0),
    MB_AmountPayable("Rs", 0)
{
    MB_Total_Of_SurgeonCharges.P_Price = Calculate_Total(MB_SurgeonCharges_Amounts);
    MB_Total_Of_AnaesthethistsCharges.P_Price = Calculate_Total(MB_AnaesthethistsCharges_Amounts);

    MB_Total_Of_Items_and_Services = 
    MB_Total_Of_SurgeonCharges +
    MB_Total_Of_AnaesthethistsCharges;
    
    MB_Total_Of_Items_and_Services.P_Price += 
    Calculate_Total_Of_Items_And_Services();

    Price AmountPayable = 
    MB_Total_Of_Items_and_Services - MB_DiscountAmount;

    if(MB_AdvanceAmount > AmountPayable)
    {
        MB_RefundAmount = MB_AdvanceAmount - AmountPayable;
        MB_AmountPayable.P_Price = 0;
    }
    else if(MB_AdvanceAmount == MB_Total_Of_Items_and_Services)
    {
        MB_RefundAmount.P_Price = 0;
        MB_AmountPayable.P_Price = 0;
    }
    else if(MB_AdvanceAmount < MB_Total_Of_Items_and_Services)
    {
        MB_RefundAmount.P_Price = 0;
        MB_AmountPayable = AmountPayable - MB_AdvanceAmount;
    }
}

double MedicalBill::Calculate_Total(std::vector <double> _charges)
{
    double Total = 0.0;

    std::vector<double>::iterator Iter = 
    _charges.begin();

    while(Iter != _charges.end())
    {
        Total += (*Iter);
        ++Iter;
    }

    return Total;
}


double MedicalBill::Calculate_Total_Of_Items_And_Services()
{
    double Total = 0.0;

    std::vector<MedicalCharges_and_Price>::iterator Iter = 
    MedicalCharges_and_Price_Object.begin();

    while(Iter != MedicalCharges_and_Price_Object.end())
    {
        Total += (*Iter).Charge_Price.P_Price;
        ++Iter;
    }

    return Total;
}

std::ostream& operator<<(std::ostream& os, const MedicalBill& MB_Object)
{
    os << "Medical Bill : " << std::endl << std::endl

    << "Hospital Address : "  << MB_Object.MB_HospitalAddress << std::endl 
    << "Bill No. : "  << MB_Object.MB_BillNo << std::endl 
    << "Bill Date : "  << MB_Object.MB_BillDate << std::endl << std::endl 
    
    << "Patient Name : "  << MB_Object.MB_PatientName << std::endl 
    << "Patient ID : "  << MB_Object.MB_PatientID << std::endl 
    << "Patient Address : "  << MB_Object.MB_PatientAddress << std::endl 
    << "Gender : "  << MB_Object.MB_Gender << std::endl 
    << "Patient Age : "  << MB_Object.MB_PatientAge << std::endl << std::endl

    << "Admission No. : "  << MB_Object.MB_AdmissionNo << std::endl 
    << "Bed Category : "  << MB_Object.MB_BedCategory << std::endl 

    << "Admission Date : "  << MB_Object.MB_AdmissionDate << std::endl 
    << "Admission Time : "  << MB_Object.MB_AdmissionTime << std::endl 
    
    << "Discharge Date : "  << MB_Object.MB_AdmissionDate << std::endl 
    << "Discharge Time : "  << MB_Object.MB_AdmissionTime << std::endl << std::endl

    << "Medical Charges and Price : " << std::endl << std::endl

    << "Surgeon Charges : " << MB_Object.MB_Total_Of_SurgeonCharges << std::endl 
    << "Anaesthethists Charges : "  << MB_Object.MB_Total_Of_AnaesthethistsCharges << std::endl << std::endl;

    std::vector<MedicalCharges_and_Price>::const_iterator Iter =
    MB_Object.MedicalCharges_and_Price_Object.begin();

    while(Iter != MB_Object.MedicalCharges_and_Price_Object.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }
    os 
    << "------------------------------------------------------" 
    << std::endl

    << "Total of Items and Services : " << 
    MB_Object.MB_Total_Of_Items_and_Services << std::endl
    << "------------------------------------------------------" 
    << std::endl

    << "Discount Amount : " << 
    MB_Object.MB_DiscountAmount << std::endl 
    
    << "Advance Amount : " << 
    MB_Object.MB_AdvanceAmount << std::endl 
    
    << "Refund Amount : " << 
    MB_Object.MB_RefundAmount << std::endl 

    << "------------------------------------------------------" 
    << std::endl
    << "Amount Payable : " << 
    MB_Object.MB_AmountPayable << std::endl
    << "------------------------------------------------------" ;

    return os;
}
