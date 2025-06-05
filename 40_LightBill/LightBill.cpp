#include "LightBill.hpp"

Date_and_Units::Date_and_Units(
    std::string Month_in_String,
    int _Year,
    int _ElectricityUnits)   :

    DateObject(
        Month_in_String,
        _Year),
    ElectricityUnits(_ElectricityUnits)
{
}

LightBill::LightBill(
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
    std::initializer_list <Transaction_Entries> PaymentHistory)   :

    LB_CustomerDetails(
        {
            _Customer_TitleName,
            _Customer_firstName,
            _Customer_middleName,
            _Customer_SurName
        },
        {
            _Customer_Address_PremisesIdentifiers,
            _Customer_Address_LoaclityDetails,
            _Customer_Address_SubCityName,
            _Customer_Address_CityName,
            _Customer_Address_StateName,
            _Customer_pin_Or_PostalCode,
            ""
        },

        _Customer_Email,
        Contact_Info_Object
    ),

    LB_BillNo_GGN(billno_ggn),
    
    LB_Bill_Supply_For_A_MonthOf(
        Month_of_BillFor,
        Year_of_BillFor),
    
    LB_CustomerNo(_Customerno),
    LB_HSNCode(_HSNCode),

    LB_BillingUnit(_billingunit),
    LB_Category(_category), 
    LB_PoleNO(_poleno),
    LB_PC_MR_RouteSequence_DTC(_pc_mr_routesequence_dtc),
    LB_MeterNo(_meterno),
    LB_MeterGroup(_metergroup),

    LB_SupplyDate(
        SupplyDate_day, "-",
        SupplyDate_month, "-",
        SupplyDate_year),
    
    LB_SanctionedLoad(
        _sanctionedload_value,
        _sanctionedload_unit_and_string),

    LB_SecurityDeposit(SecurityDeposit),

    LB_CurrentReading_Date(
    CurrentReadingDate_day, "-",
    CurrentReadingDate_month, "-",
    CurrentReadingDate_year
    ),

    LB_PreviousReading_Date(
        PreviousReading_day, "-",
        PreviousReading_month, "-",
        PreviousReading_year
    ),

    LB_CurrentReading(_currentReading),
    LB_PreviousReading(_previousReading),
    LB_MultiplicationFactor(_multiplicationfactor),
    LB_Unit(_unit),
    LB_AdjustedUnit(_adjustUnit),

    LB_MeterStatus(_meterstatus),
    
    LB_BillPeriod(BillBoard_value, BillBoard_string),

    LB_PastUnits(PastUnits),
    LB_CurrentYearMonth_And_PreviousYearMonth_Unit(
        CurrentYearMonth_And_PreviousYearMoonth_Unit
    ),

    LB_BillDate(
        _BillDate_day, "-",
        _BillDate_month, "-",
        _BillDate_year),

    LB_BillAmount(_BillAmount),

    LB_MidDate(
        _MidDate_day, "-",
        _MidDate_month, "-",
        _MidDate_year),

    LB_BillAmount_IfPaidByThis_MidDate(
        _BillAmount_IfPaidByThis_MidDate),

    LB_BillDueDate(
        _BillDueDate_day, "-",
        _BillDueDate_month, "-",
        _BillDueDate_year),

    LB_BillAmount_IfPaidAfterDueDate(
        _BillAmount_IfPaidAfterDueDate),

    LB_FixedCharges(FixedCharges), 
    LB_EnergyCharges(EnergyCharges),
    LB_AdditionalSupplyCharges_(AdditionalSupplyCharges),
    LB_FAC(FAC), 
    LB_ElectricityDuty(ElectricityDuty), 
    LB_TaxOnSale(TaxONSale),  
    LB_CurrentInterest(CurrentInterest),
    LB_OtherCharges(OtherCharges), 

    LB_NetArrears(NetArrears), 
    LB_Adjustments(Adjustments), 
    LB_Interest_Arrears(Interest_Arrears), 

    LB_LastReceiptDate(
        LastReceiptDate_day, "-",
        LastReceiptDate_month, "-",
        LastReceiptDate_year), 

    LB_LastReceiptAmount(LastReceiptAmount), 
    LB_DelayedPaymentCharges(DelayedPaymentCharges),

    GSTIN(_gstin),
    LB_PaymentHistory(PaymentHistory)
{
    LB_Total = Calculate_Total(
        FixedCharges,
        EnergyCharges,
        AdditionalSupplyCharges,
        FAC,
        ElectricityDuty,
        TaxONSale,
        CurrentInterest,
        OtherCharges);
        
    LB_TotalArrears = Calculate_TotalArrears(
        LB_NetArrears,
        LB_Adjustments,
        LB_Interest_Arrears);
    
    LB_NetBillAmount = LB_Total + LB_TotalArrears;
    LB_RoundedBill = roundCustom(LB_NetBillAmount);
}

void LightBill::Print_PaymentHistory_Format()
{
    std::cout << "Payment History Format : "
    << "Receipt Date  |  PAid Amount" << std::endl; 
}

double LightBill::Calculate_Total(
    double _fixedcharges,
    double _energycharges,
    double _AdditonalSupplyCharges,
    double _FAC,
    double _ElectricityDuty,
    double taxOnsale,
    double CurrentInterest,
    double OtherCharges) const
{
    double Total = 
    _fixedcharges           +
    _energycharges          +
    _AdditonalSupplyCharges + 
    _FAC                    +
    _ElectricityDuty        + 
    taxOnsale               + 
    CurrentInterest         + 
    OtherCharges;
    
    return Total;
} 

double LightBill::Calculate_TotalArrears(
    double _NetArrears,
    double _Adjustments,
    double _Interest_Arrears) const
{
    return _NetArrears + _Adjustments + _Interest_Arrears;
}

double LightBill::roundCustom(double Value) const
{
    if(Value < 1000)
    {
        return std::round(Value / 10.0) * 10;
    }
    else 
    {
        return std::round(Value / 100.0) * 100;
    }
}

std::ostream& operator<<(std::ostream& os, const LightBill& LB_Object)
{
    os << "LightBill Details : " << std::endl << std::endl

    << "Customer Name : " << LB_Object.LB_CustomerDetails.m_Name_Object << std::endl
    << "Customer Address : " << LB_Object.LB_CustomerDetails.m_Address_Object << std::endl
    << "Customer Email : " << LB_Object.LB_CustomerDetails.m_Email_Id_Object << std::endl
    << "Customer Contact No : ";
    
    std::vector<Contact_Info>::const_iterator iter_0 = 
    LB_Object.LB_CustomerDetails.m_Contact_Number_Info.begin();

    while(iter_0 != LB_Object.LB_CustomerDetails.m_Contact_Number_Info.end())
    {
        std::cout << *iter_0 << std::endl;
        ++iter_0;
    }
    os << std::endl

    << "Bill No. (GGN) : " << LB_Object.LB_BillNo_GGN << std::endl
    << "Bill Supply for A Month of : " << LB_Object.LB_Bill_Supply_For_A_MonthOf << std::endl
    << "Customer No. : " << LB_Object.LB_CustomerNo << std::endl
    << "HSN Code : " << LB_Object.LB_HSNCode << std::endl
    << "Billling Unit : " << LB_Object.LB_BillingUnit << std::endl
    << "Category : " << LB_Object.LB_Category << std::endl
    << "Pole No. : " << LB_Object.LB_PoleNO << std::endl
    << "PC/MR/Route Sequence/ DTC : " << LB_Object.LB_PC_MR_RouteSequence_DTC << std::endl
    << "Meter No. : " << LB_Object.LB_MeterNo << std::endl
    << "Meter Group : " << LB_Object.LB_MeterGroup << std::endl
    << "Supply Date : " << LB_Object.LB_SupplyDate << std::endl
    << "Sanctioned Load : " << LB_Object.LB_SanctionedLoad << std::endl
    << "Security Deposit : Rs. " << LB_Object.LB_SecurityDeposit << std::endl
    << "Current Reading Date : " << LB_Object.LB_CurrentReading_Date << std::endl
    << "Previous Reading Date : " << LB_Object.LB_PreviousReading_Date << std::endl
    << "Current Reading : " << LB_Object.LB_CurrentReading << std::endl
    << "Previous Reading : " << LB_Object.LB_PreviousReading << std::endl
    << "Multiplication Factor : " << LB_Object.LB_MultiplicationFactor << std::endl
    << "Unit : " << LB_Object.LB_Unit << std::endl
    << "Adjusted Unit : " << LB_Object.LB_AdjustedUnit << std::endl << std::endl

    << "Meter Status : " << LB_Object.LB_MeterStatus << std::endl
    << "Bill Period : " << LB_Object.LB_BillPeriod << std::endl << std::endl;

    os
    << "Past ELectricty Usage : " << std::endl
    << "Format : Month | Electricity Unit" << std::endl << std::endl;

    std::vector<Date_and_Units>::const_iterator iter_1 = LB_Object.LB_PastUnits.begin();
    while(iter_1 != LB_Object.LB_PastUnits.end())
    {
        std::cout << (*iter_1).DateObject << " | " << (*iter_1).ElectricityUnits << std::endl;
        ++iter_1; 
    }
    os << std::endl

    << "Electricity Usage : " << std::endl;

    std::vector<Date_and_Units>::const_iterator iter_2 = 
    LB_Object.LB_CurrentYearMonth_And_PreviousYearMonth_Unit.begin();
    while(iter_2 != LB_Object.LB_CurrentYearMonth_And_PreviousYearMonth_Unit.end())
    {
        std::cout << (*iter_2).DateObject << " | " << (*iter_2).ElectricityUnits << std::endl;
        ++iter_2;
    }
    os << std::endl

    << "Fixed Charges : " << LB_Object.LB_FixedCharges << std::endl
    << "Energy Charges : " << LB_Object.LB_EnergyCharges << std::endl
    << "Additional Supply Charges : " << LB_Object.LB_AdditionalSupplyCharges_ << std::endl
    << "FAC : " << LB_Object.LB_FAC << std::endl
    << "ELectricity Duty : " << LB_Object.LB_ElectricityDuty << std::endl
    << "Tax on Sale : " << LB_Object.LB_TaxOnSale << std::endl
    << "Current Interest : " << LB_Object.LB_CurrentInterest << std::endl
    << "Other Charges : " << LB_Object.LB_OtherCharges << std::endl
    << "-----------------------------------------" << std::endl
    << "Total : " << LB_Object.LB_Total << std::endl
    << "-----------------------------------------" << std::endl
    << "Net Arrears : " << LB_Object.LB_NetArrears << std::endl
    << "Adjustments : " << LB_Object.LB_AdjustedUnit << std::endl
    << "Interest Arrears : " << LB_Object.LB_Interest_Arrears << std::endl
    << "-----------------------------------------"  << std::endl
    << "Net Bill Amount : " << LB_Object.LB_NetBillAmount << std::endl
    << "-----------------------------------------" << std::endl
    << "Rounded Bill Amount : " << LB_Object.LB_RoundedBill << std::endl 
    << "-----------------------------------------" << std::endl << std::endl

    << "Last Receipt Date : " << LB_Object.LB_LastReceiptDate << std::endl
    << "Last Receipt Amount : " << LB_Object.LB_LastReceiptAmount << std::endl
    << "Delayed Payment Charges : " << LB_Object.LB_DelayedPaymentCharges << std::endl << std::endl

    << "Bill Date : " << LB_Object.LB_BillDate << std::endl
    << "Bill Amount : " << LB_Object.LB_BillAmount << std::endl

    << "Mid Date : " << LB_Object.LB_MidDate << std::endl
    << "Bill Amount If Paid By this Mid Date : " << LB_Object.LB_BillAmount_IfPaidByThis_MidDate << std::endl

    << "Due Date : " << LB_Object.LB_BillDueDate << std::endl
    << "Bill Amount if Paid After Due Date : " << LB_Object.LB_BillAmount_IfPaidAfterDueDate << std::endl

    << "GSTIN : " << LB_Object.GSTIN << std::endl << std::endl

    << "Past Payment History : " << std::endl
    << "Format : LineNo  |  Receipt Date  |  Payment Amount in Rs." << std::endl << std::endl;

    std::vector<Transaction_Entries>::const_iterator iter_3 = LB_Object.LB_PaymentHistory.begin();
    while(iter_3 != LB_Object.LB_PaymentHistory.end())
    {
        std::cout << *iter_3 << std::endl;
        ++iter_3;
    }

    return os;
}
