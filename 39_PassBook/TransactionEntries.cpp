#include "TransactionEntries.hpp"

Transaction_Entries::Transaction_Entries(
    unsigned int _transaction_lineno,

    char _day, 
    char _month,
    short _year,

    std::string _transaction_particular,
    unsigned int transaction_chequeno,

    double transaction_drAmount,
    double transaction_crAmount)   :

    Transaction_LineNo(_transaction_lineno),
    
    Transaction_Date(
        _day, "-", 
        _month, "-", 
        _year),
    
    Transaction_Particular(_transaction_particular),
    Transaction_ChequeNo(transaction_chequeno),

    Transaction_DebitAmount(transaction_drAmount),
    Transaction_CreditAmount(transaction_crAmount)
{
}

double Transaction_Entries::Transaction_BalanceAmount = 0;

bool Transaction_Entries::Is_It_Zero(double Value) const
{
    return (Value == 0);
}

double Transaction_Entries::Calculate_BalAmount(
    double DrAmount, double CrAmount) const
{
    if(Is_It_Zero(DrAmount))
    {
        return Transaction_BalanceAmount += CrAmount;
    }
    else if(Is_It_Zero(CrAmount))
    {
        return Transaction_BalanceAmount -= DrAmount;
    }
    
    return 0;
}

int Transaction_Entries::Get_Month() const
{
    return Transaction_Date.m_Month_In_Num;
}

std::ostream& operator<<(std::ostream& os, const Transaction_Entries& TE_Object)
{
    os 
    << TE_Object.Transaction_LineNo        << " | "
    << TE_Object.Transaction_Date          << " | "
    << TE_Object.Transaction_Particular    << " | ";
    
    if(TE_Object.Is_It_Zero(TE_Object.Transaction_ChequeNo))
    {
        std::cout << "-" << " | ";
    }
    else
    {
        os << TE_Object.Transaction_ChequeNo << " | ";
    }

    if(TE_Object.Is_It_Zero(TE_Object.Transaction_DebitAmount))
    {
        std::cout << "-" << " | ";
    }
    else
    {
        os << TE_Object.Transaction_DebitAmount << " | ";
    }

    if(TE_Object.Is_It_Zero(TE_Object.Transaction_CreditAmount))
    {
        std::cout << "-" << " | ";
    }
    else
    {
        os << TE_Object.Transaction_CreditAmount << " | ";
    }
    
    TE_Object.Transaction_BalanceAmount = TE_Object.Calculate_BalAmount(
        TE_Object.Transaction_DebitAmount,
        TE_Object.Transaction_CreditAmount);

    os 
    << TE_Object.Transaction_BalanceAmount << " | ";

    return os;
}