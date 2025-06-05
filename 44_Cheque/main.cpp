#include "Cheque.hpp"

#pragma comment(lib, "Cheque.lib")

int main (void)
{
    Cheque ABC_Company(
        "HDFC Bank",

        "Shop No.1, Jatin Heights",
        {"VijayLine Chowk", "Nagar Pathardi Road"},
        "Bhingar",
        "Ahilyanagar",
        "Maharashtra",
        414002,

        "HDFC0008345",
        {"Kapil Textile Industries Pvt Ltd."},
        {"ABC Company"},
        "60200858797878",
        "Rs",
        10050000,
        "One Crore Fifty Thousand",

        15,8,2024
    );
    
    std::cout << ABC_Company;
}