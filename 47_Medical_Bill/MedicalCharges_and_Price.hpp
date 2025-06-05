#pragma once

#ifndef _MEDICAL_CHARGES_AND_PRICE
#define _MEDICAL_CHARGES_AND_PRICE

#include <iostream>
#include "price.hpp"

class MedicalCharges_and_Price
{
    friend class MedicalBill;
    friend std::ostream& operator<<(std::ostream& os, const MedicalCharges_and_Price& MC_P_Object);

    private :
    std::string Charge_Name;
    Price Charge_Price;

    public :
    MedicalCharges_and_Price(
        std::string _charge_name,
        double _charge_price);
};

#endif /* MedicalCharges_and_Price.hpp */