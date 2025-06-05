#include "Marksheet.hpp"
#include <typeinfo>

Marksheet::Marksheet(
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

    double _cutoff_percentage)    :

    MS_StateBoard(_stateboard_name),
    MS_DivisonalBoardName(_division_board_name),

    MS_Stream(_stream),
    MS_SeatNo(_seatno),
    MS_CenterNo(_centerno),
    MS_Dist_And_Hr_Sec_School_No(_dist_and_hr_sec_school_no),
    MS_Month_And_Year_OfExam(month_of_exam, year_of_exam),
    MS_SrNo_OF_Statement(_srno_of_statement),

    MS_CandidateFullName(
        _candidate_surname,
        _candidate_firstname,
        _candidate_fathername
    ),

    MS_CandidateMotherName(_candidate_mothername),
    MS_MarksTableObject(_markstable_Object),
    MS_CutOffin_Percentage(_cutoff_percentage)
{
    Calculate_TotalOfMarks();
    Calculate_TotalOf_ObtainedMarks();
    Calculate_Percentage();
    set_ObtainedMarks_InWords();
    Verify_Result();
}

void Marksheet::Calculate_TotalOfMarks()
{
    std::vector<Marks>::iterator Iter =
    MS_MarksTableObject.begin();

    MS_TotalOfMarks = 0;

    while(Iter != MS_MarksTableObject.end())
    {
        MS_TotalOfMarks += (*Iter).M_MaximumMarks;
        ++Iter;
    }
}

void Marksheet::Calculate_TotalOf_ObtainedMarks()
{
    std::vector<Marks>::iterator Iter = 
    MS_MarksTableObject.begin();

    MS_TotalOfObtained_Marks = 0;

    while(Iter != MS_MarksTableObject.end())
    {
        MS_TotalOfObtained_Marks += (*Iter).M_MarksObtained.Marks_In_Number;
        ++Iter;
    }

    MS_TotalObtainedMarks_InWords = NumberToWords(MS_TotalOfObtained_Marks);
}

void Marksheet::Calculate_Percentage()
{
    MS_Percentage = (MS_TotalOfObtained_Marks / MS_TotalOfMarks) * 100.0;
}

void Marksheet::set_ObtainedMarks_InWords()
{
    std::vector<Marks>::iterator Iter =
    MS_MarksTableObject.begin();

    while(Iter != MS_MarksTableObject.end())
    {
        if(((*Iter).M_MaximumMarks) == 0)
        {
            (*Iter).M_ObtainedMarks_InWords = "-";
        }
        else
        {
            (*Iter).M_ObtainedMarks_InWords = NumberToWords((*Iter).M_MarksObtained.Marks_In_Number);
        }
        ++Iter;
    }
}

void Marksheet::Verify_Result()
{
    if(MS_Percentage > MS_CutOffin_Percentage)
    {
        MS_Result = "Pass";
    }
    else if(MS_Percentage < MS_CutOffin_Percentage)
    {
        MS_Result = "Fail";
    }
    else
    {
        MS_Result = "BorderLine";
    }
}

std::string ones[] = {
    "", "ONE", "TWO", "THREE", "FOUR", "FIVE",
    "SIX", "SEVEN", "EIGHT", "NINE"};

std::string teens[] = {"TEN", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN",
     "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN"};

std::string tens[] = {"", "", "TWENTY", "THIRTY", "FORTY", "FIFTY",
    "SIXTY", "SEVENTY", "EIGHTY", "NINETY"};

std::string Marksheet::NumberToWords(int num){
    if (num == 0){
        return "ZERO";
    }
    
    std::string result = "";
    
    if (num >= 100){
        result += ones[num / 100] + " HUNDRED";
        num %= 100;
    if (num > 0){
        result += " AND ";
    }
    }
    
    if (num >= 20) {
        result += tens[num / 10];
    if (num % 10 != 0){
        result += "-" + ones[num % 10];} 
    }
    else if (num >= 10){
        result += teens[num - 10];} 
    else if (num > 0){
        result += ones[num];}
        
    return result;
}

std::ostream& operator<<(std::ostream& os, const Marksheet& MS_Object)
{
    os << "Marksheet Details : "  << std::endl << std::endl
    
    << "State Board : " << MS_Object.MS_StateBoard << std::endl
    << "Divisional Board Name : " << MS_Object.MS_DivisonalBoardName << std::endl
    << "Stream : " << MS_Object.MS_Stream << std::endl
    << "Seat No : " << MS_Object.MS_SeatNo << std::endl
    << "Center No. : " << MS_Object.MS_CenterNo << std::endl
    << "Dist and Hr Sec School No. : " << MS_Object.MS_Dist_And_Hr_Sec_School_No << std::endl
    << "Month and Year of Exam : " << MS_Object.MS_Month_And_Year_OfExam << std::endl
    << "Sr No Of Statement : " << MS_Object.MS_SrNo_OF_Statement << std::endl << std::endl

    << "Candidate Full Name : " << MS_Object.MS_CandidateFullName << std::endl
    << "Candidate Mother Name : " << MS_Object.MS_CandidateMotherName << std::endl

    << "Marks Table Format : Subject Code | Subject Name | Medium of Subject | Maximum Marks | Obtained Marks in Figures | Obtained Marks in Words |" << std::endl << std::endl;

    std::vector<Marks>::const_iterator Iter = 
    MS_Object.MS_MarksTableObject.begin();

    while(Iter != MS_Object.MS_MarksTableObject.end())
    {
        std::cout << *Iter << std::endl << std::endl;
        Iter++;
    }
    os 

    << "Total Marks : " << MS_Object.MS_TotalOfMarks 
    << "  |  "
    << "Obtained Marks : " << MS_Object.MS_TotalOfObtained_Marks 
    << std::endl

    << "Obtained Marks in Words : " << MS_Object.MS_TotalObtainedMarks_InWords << std::endl
    << "Percentage : " << MS_Object.MS_Percentage << std::endl 
    << "Result : " << MS_Object.MS_Result << std::endl; 

    return os;
}  

