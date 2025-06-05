#pragma once

#ifndef _MARKS_TABLE_HPP
#define _MARKS_TABLE_HPP

#include <iostream>
#include "MarksForm.hpp"
#include <vector>

class Marks
{
    friend class Marksheet;
    friend std::ostream& operator<<(std::ostream& os, const Marks& M_Object);

    private :
    std::string M_SubjectCode;
    std::string M_SubjectName;
    std::string M_MediumOfSubject;

    double M_MaximumMarks;
    MarksForm M_MarksObtained;
    std::string M_ObtainedMarks_InWords;

    public : 
    Marks(
        std::string _subjectcode,
        std::string _subjectname,
        std::string _mediumOfsubject,

        double maximum_marks,
        MarksForm marks_obtained
    );
};

#endif /* Marks.hpp */