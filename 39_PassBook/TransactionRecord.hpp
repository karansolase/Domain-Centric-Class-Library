#pragma once

#ifndef _TRANSACTIONRECORD_HPP
#define _TRANSACTIONRECORD_HPP

#include <vector>
#include "Date.hpp"
#include "TransactionEntries.hpp"

class PassBook;

class TransactionRecord
{

    friend std::ostream& operator<<(std::ostream& os, const TransactionRecord& TR_Object);
    friend std::ostream& operator<<(std::ostream& os, const PassBook& PB_Object);

    private :
    std::vector <Transaction_Entries> TransactionRecords;

    public :
    void Print_TransactionTable_Format() const;

    TransactionRecord(
        std::initializer_list <Transaction_Entries> _transactionRecords);

};

#endif /* TransactionRecord.hpp */