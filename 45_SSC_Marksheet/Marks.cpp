#include "Marks.hpp"

Marks::Marks(
    std::string _subjectcode,
    std::string _subjectname,
    std::string _mediumOfsubject,

    double maximum_marks,
    MarksForm marks_obtained)  :

    M_SubjectCode(_subjectcode),
    M_SubjectName(_subjectname),
    M_MediumOfSubject(_mediumOfsubject),

    M_MaximumMarks(maximum_marks),
    M_MarksObtained(marks_obtained)
{
}

std::ostream& operator<<(std::ostream& os, const Marks& M_Object)
{
    os 
    << M_Object.M_SubjectCode << " | " 
    << M_Object.M_SubjectName << " | " 
    << M_Object.M_MediumOfSubject << " | ";
    
    if(M_Object.M_MaximumMarks == 0)
    {
        os << "-" << " | ";
    }
    else
    {
        os << M_Object.M_MaximumMarks << " | ";
    }

    os
    << M_Object.M_MarksObtained << " | "
    << M_Object.M_ObtainedMarks_InWords << " | "; 

    return os;
}