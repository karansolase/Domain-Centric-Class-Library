#include "Price.hpp"

Price::Price(
    std::string _Currency,
    double _price)  :

    P_Currency(_Currency),
    P_Price(_price)
{

}

std::ostream& operator<<(std::ostream& os, const Price& P_Object)
{
    unsigned long long int Num_before_Decimal = 
    P_Object.P_Price;
    std::string Price_In_String = std::to_string(Num_before_Decimal);
    std::cout << P_Object.P_Currency << " ";

    if(Price_In_String.length() == 4)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 0)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else if(Price_In_String.length() == 5)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 1)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else  if(Price_In_String.length() == 6)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 0 || i == 2)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else if(Price_In_String.length() == 7)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 1 || i == 3)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else if(Price_In_String.length() == 8)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 0 || i == 2 || i == 4)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else if(Price_In_String.length() == 9)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 1 || i == 3 || i == 5)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else if(Price_In_String.length() == 10)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 0 || i == 2 || i == 4 || i == 6)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else if(Price_In_String.length() == 11)
    {
        for(size_t i = 0; i < Price_In_String.length(); ++i)
        {
            if(i == 1 || i == 3 || i == 5 || i == 7)
            {
                std::cout << Price_In_String[i] << ",";
            }
            else
            {
                std::cout << Price_In_String[i];
            }
        }
    }
    else{
        std::cout << Price_In_String;
    }

    int AfterDecimal = static_cast<int>(std::round(std::fmod(P_Object.P_Price, 1) * 100));

    std::cout << "." << AfterDecimal;

    return os;
}

Price Price::operator-(const Price& RHS) const{
    Price P_Object("Rs", 0.0);

    P_Object.P_Price = this->P_Price - RHS.P_Price;

    return P_Object;
}

Price Price::operator+(const Price& RHS) const{
    Price P_Object("Rs", 0.0);

    P_Object.P_Price = this->P_Price + RHS.P_Price;

    return P_Object;
}

bool Price::operator<(const Price& RHS) const{
    
    return this->P_Price < RHS.P_Price;
}

bool Price::operator>(const Price& RHS) const {

    return this->P_Price > RHS.P_Price;
}

bool Price::operator==(const Price& RHS) const{
    
    return this->P_Price == RHS.P_Price;
}

Price Price::operator=(const Price& RHS){
    
    this->P_Price = RHS.P_Price;

    return *this;
}