#include "MedicalCharges_and_Price.hpp"

MedicalCharges_and_Price::MedicalCharges_and_Price(
    std::string _charge_name,
    double _charge_price)   :
    Charge_Name(_charge_name),
    Charge_Price("Rs", _charge_price)
{
}

std::ostream& operator<<(std::ostream& os, const MedicalCharges_and_Price& MC_P_Object)
{
    os 
    << MC_P_Object.Charge_Name << " : "
    << MC_P_Object.Charge_Price;

    return os;
}