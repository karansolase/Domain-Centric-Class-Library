#include "TransactionRecord.hpp"

TransactionRecord::TransactionRecord(
    std::initializer_list <Transaction_Entries> _transactionRecords)   :
    TransactionRecords(_transactionRecords)
{
}

void TransactionRecord::Print_TransactionTable_Format() const
{
    std::cout 
    << "Transaction Entries Format : "
    << "Line No.  |  "
    << "Date  |  "
    << "Particular  |  "
    << "Cheque No  |  "
    << "Debit Amount  |  "
    << "Credit Amount  |  "
    << "Balance  |  "
    << std::endl;
}

std::ostream& operator<<(std::ostream& os, const TransactionRecord& TR_Object)
{
        
    std::vector<Transaction_Entries>::const_iterator IT = TR_Object.TransactionRecords.begin();
    while(IT != TR_Object.TransactionRecords.end())
    {
        std::vector<Transaction_Entries>::const_iterator NextIT = std::next(IT);
        if(NextIT != TR_Object.TransactionRecords.end() && (*IT).Get_Month() != (*NextIT).Get_Month())
        {
            std::cout << *IT << std::endl;
            std::cout << "Balance Carried Forward : " << (*IT).Transaction_BalanceAmount << " Cr.";
            std::cout << std::endl << std::endl;
            std::cout << "Balance Brought Forward : " << (*IT).Transaction_BalanceAmount << " Cr.";
            std::cout << std::endl;
        }
        else 
        {
            std::cout << *IT << std::endl << std::endl;
        }
        ++IT;
    }
    std::cout << "Balance Brought Forward : " << (*IT).Transaction_BalanceAmount << " Cr.";

    return os;
}


/* 
std::vector<Transaction_Entries>::const_iterator NextIT = std::next(IT);
        if(NextIT != TR_Object.TransactionRecords.end() && (*IT).Get_Month() != (*NextIT).Get_Month())
        {
            std::cout << "Balance Carried Forward : " << (*IT).Transaction_BalanceAmount << " Cr";
            std::cout << std::endl << std::endl;
            std::cout << "Balance Brought Forward : " << (*IT).Transaction_BalanceAmount << " Cr";
            std::cout << std::endl;
        }
        std::cout << *IT << std::endl;
*/

/* 
std::vector<Transaction_Entries>::const_iterator NextIT = std::next(IT);
        if(NextIT != TR_Object.TransactionRecords.end()){
        std::cout << (*IT) << "--------" << (*IT).Get_Month() << std::endl;
        std::cout << (*NextIT) << "--------" << (*IT).Get_Month() << std::endl << std::endl;
        }
*/