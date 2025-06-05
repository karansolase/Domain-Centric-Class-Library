#include "MarksForm.hpp"

MarksForm::MarksForm(
    double marks_in_number) :

    Marks_In_Number(marks_in_number)
{
    Num_For_Constructor = 1;
}

MarksForm::MarksForm(
    std::string marks_in_grade)  :
    Marks_In_Grade(marks_in_grade)
{
    Num_For_Constructor = 2;
}

std::ostream& operator<<(std::ostream& os, const MarksForm& MF_Object)
{
    if(MF_Object.Num_For_Constructor == 1)
    {
        os << MF_Object.Marks_In_Number;
    }
    else if(MF_Object.Num_For_Constructor == 2)
    {
        os << MF_Object.Marks_In_Grade;
    }

    return os;
}