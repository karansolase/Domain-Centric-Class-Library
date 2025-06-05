#pragma comment(lib, "Marksheet.lib")

#ifndef _MARKSHEET_HPP
#define _MARKSHEET_HPP

#include <iostream>
#include "Name.hpp"
#include "Date.hpp"
#include "Marks.hpp"
#include <vector>

class Marksheet
{

    friend std::ostream& operator<<(std::ostream& os, const Marksheet& MS_Object);

    private :
    std::string MS_StateBoard;
    std::string MS_DivisonalBoardName;

    std::string MS_Stream;
    std::string MS_SeatNo;
    std::string MS_CenterNo;
    std::string MS_Dist_And_Hr_Sec_School_No;
    Date MS_Month_And_Year_OfExam;
    unsigned int MS_SrNo_OF_Statement;

    Name MS_CandidateFullName;
    Name MS_CandidateMotherName;

    std::vector<Marks> MS_MarksTableObject;
    double MS_TotalOfMarks;
    double MS_TotalOfObtained_Marks;
    std::string MS_TotalObtainedMarks_InWords;
    double MS_Percentage;

    std::string MS_Result;
    double MS_CutOffin_Percentage;

    void Calculate_TotalOfMarks();
    void Calculate_TotalOf_ObtainedMarks();
    void Calculate_Percentage();
    void set_ObtainedMarks_InWords();
    std::string NumberToWords(int num);
    void Verify_Result();

    public :

    Marksheet(
        std::string _stateboard_name,
        std::string _division_board_name,

        std::string _stream,
        std::string _seatno,
        std::string _centerno,
        std::string _dist_and_hr_sec_school_no,

        std::string month_of_exam,
        int year_of_exam,

        unsigned int _srno_of_statement,

        std::string _candidate_surname,
        std::string _candidate_firstname,
        std::string _candidate_fathername,

        std::string _candidate_mothername,

        std::initializer_list<Marks> _markstable_Object,

        double _cutoff_percentage
    );
};

#endif /* Marksheet.hpp */