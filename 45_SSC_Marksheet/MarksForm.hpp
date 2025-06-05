#pragma once

#ifndef _MARKS_FORM_HPP
#define _MARKS_FORM_HPP

#include <iostream>

class MarksForm
{
    friend class Marksheet;
    friend std::ostream& operator<<(std::ostream& os, const MarksForm& MF_Object);

    private :
    double Marks_In_Number;
    std::string Marks_In_Grade;

    char Num_For_Constructor;

    public :
    MarksForm(
        double marks_in_number);

    MarksForm(
        std::string marks_in_grade);
};

#endif /* MarksForm.hpp */