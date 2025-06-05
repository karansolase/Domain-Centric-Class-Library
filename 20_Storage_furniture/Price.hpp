#pragma once

#ifndef _PRICE_HPP
#define _PRICE_HPP

#include <iostream>
#include <string>

class Price 
{
    friend std::ostream& operator<<(std::ostream& os, const Price& P_Object);

    private :
    std::string  P_Currency;
    double P_Price;

    public :
    Price(
        std::string _Currency,
        double _price);
    Price operator-(const Price& RHS) const;
    Price operator+(const Price& RHS) const;
    bool operator<(const Price& RHS) const;
    bool operator>(const Price& RHS) const;
    bool operator==(const Price& RHS) const;
    Price operator=(const Price& RHS);
}; 

#endif /* Price.hpp */