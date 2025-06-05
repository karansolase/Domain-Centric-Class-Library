#ifndef _TRANSACTION_ENTRIES_HPP
#define _TRANSACTION_ENTRIES_HPP

#include "Date.hpp"
#include "TransactionEntries.hpp"

class TransactionRecord;

class Transaction_Entries
{
    friend class TransactionEntries;
    friend std::ostream& operator<<(std::ostream& os, const Transaction_Entries& TE_Object);
    friend std::ostream& operator<<(std::ostream& os, const TransactionRecord& TR_Object);

    private :
    unsigned int Transaction_LineNo;
    Date Transaction_Date;
    std::string Transaction_Particular;
    unsigned int Transaction_ChequeNo;
    double Transaction_DebitAmount;
    double Transaction_CreditAmount;
    static double Transaction_BalanceAmount;

    char Num_FOr_Constructor;

    bool Is_It_Zero(double Value) const;
    double Calculate_BalAmount(
        double DrAmount, double CrAmount) const;
        
    public :
    int Get_Month() const;

    Transaction_Entries(
        unsigned int _transaction_lineno,
        
        char _day, 
        char _month,
        short _year,

        std::string _transaction_particular,
        unsigned int transaction_chequeno,

        double transaction_drAmount,
        double transaction_crAmount
    );

    Transaction_Entries(
        unsigned int _transaction_lineno,

        char _day,
        char _month,
        short _year,

        double Payment_Amount
    );
};

#endif /* TransactionEntries.hpp */