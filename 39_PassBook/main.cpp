#include "PassBook.hpp"

#pragma comment(lib, "Passbook.lib")

int main(void)
{
    PassBook Vedant_Shinde_SBI(
        "HDFC Bank",
        "Bhingar",
        8345,

        "HDFC Bank LTD, Ground Floor Shop No. 1",
        {"Jatan Heights", "Vijay Chowk", "Nagar Pathardi Road"},
        "Bhingar",
        "AhilyaNagar",
        "Maharashtra",
        414002,
        "India",

        {
            {"Toll Free", "18001802222 / 18001032222"},
            {"Tolled", 01202400000},
            {"PriniPal Model Officer : Phn", "01128044907"}
        },

        "www.hdfcbank.com",
        414240505,
        "IFSC0008345",

        "Mr.", "Vedant", "Arjun", "Shinde",

        {"Phone No.", 8080308502},

        "H.no. 664",
        {"VijayLine", "Naykunagar", "Wadarwadi"},
        "Bhingar",
        "AhilyaNagar",
        "Maharashtra",
        414002,
        "India",

        1,3,2004,

        "VedaShinde275@gmail.com",
        "Son of Arjun Shinde",
        "342995401867",
        "HDFC-Chq General-Pub-IND-All",

        856974132819,

        "ATI006259",
        "Self",
        "00000000102078096",

        8,8,11,
        19,6,2021,

        3,
        "Continuation",

        {
            {
                1,
                1,1,2023,
                "By Cash Deposit Self",0,
                0,70000
            },
            {
                3,
                11,1,2023,
                "PM JivanDai Schm",0,
                0,2500
            },
            {
                2,
                5,1,2023,
                "To Nitesh Mahajan",47220,
                15000,0
            },
            
            {
                4,
                11,1,2023,
                "To UPI/113436947519/P2V/Q77140937@ybl",0,
                9600,0
            },
            {
                5,
                15,1,2023,
                "By Interest",0,
                0,700
            },
            {
                6,
                22,1,2023,
                "To UPI/127346016926/P2V/9822107037@ybl",0,
                20000,0
            },
            {
                7,
                30,1,2023,
                "To Eureka Forbed Limited",676474,
                10000,0
            },
            {
                8,
                2,2,2023,
                "By Vasant Nikrad", 856241,
                0,40000
            },
            {
                9,
                10,2,2023,
                "To Max Life Insurance",0,
                20000,0
            },
            {
                10,
                13,2,2023,
                "POS 419188XXXXXX6998 CROMA",0,
                4999.0,0
            },
            {
                11,
                20,2,2023,
                "INVESTNOW - Nippon India Mutual Fund Sip 001617059694 - 167059694-50020036589",0,
                1000,0
            },
            {
                12,
                29,2,2023,
                "UPI-Billdesktz.electricty@ici - 401421324415-UPI",0,
                1350,0
            }
        }
    );

    std::cout << Vedant_Shinde_SBI;
}
