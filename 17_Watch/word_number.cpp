#include "word_number.hpp"


Word_Number::Word_Number(
    Name Name_object,
    char _year,
    std::string _string_object,
    short _Num_for_printing_form)  :   
    
    m_Name_Object(Name_object),
    m_year(_year),
    m_String_Object(_string_object),
    Num_for_printing_form(_Num_for_printing_form),
    m_Measurement_and_unit_Object(0,{""})
{
    Num_for_constructor = 1;
}

Word_Number::Word_Number(
    Name Name_object,
    Measurement_and_unit Measurement_and_unit_Object,
    short _Num_for_printing_form)  :   
    
    m_Name_Object(Name_object),
    m_Measurement_and_unit_Object(Measurement_and_unit_Object),
    Num_for_printing_form(_Num_for_printing_form),
    m_year(0)
{
    Num_for_constructor = 2;
}


Word_Number::Word_Number(
    Name Name_object,
    std::string _string_object,
    float Float_Number_Object,
    short _Num_for_printing_form)  :   
    
    m_Name_Object(Name_object),
    m_Float_Number_Object(Float_Number_Object),
    m_String_Object(_string_object),
    Num_for_printing_form(_Num_for_printing_form),
    m_year(0),
    m_Measurement_and_unit_Object(0,{""})
{
    Num_for_constructor = 3;
}

Word_Number::Word_Number(
    Name Name_Object,
    float Float_Number_Object,
    short _Num_for_printing_form)  :

    m_Name_Object(Name_Object),
    m_year(0),
    m_Float_Number_Object(Float_Number_Object),
    Num_for_printing_form(_Num_for_printing_form),
    m_Measurement_and_unit_Object("")
{
    Num_for_constructor = 4;
}

Word_Number::Word_Number(
    std::string _string_object)  :   
    
    m_String_Object(_string_object),
    m_Measurement_and_unit_Object(0,{""}),
    m_year(0),
    m_Name_Object("")
{

}

std::ostream& operator<<(std::ostream& os, const Word_Number& Word_Number_Object){
    if(Word_Number_Object.Num_for_constructor == 1){
        if(Word_Number_Object.Num_for_printing_form == 1){
            os << Word_Number_Object.m_Name_Object 
            << " : " << Word_Number_Object.m_year 
            << " " << Word_Number_Object.m_String_Object;
        }
        else if(Word_Number_Object.Num_for_printing_form == 2){
            os << Word_Number_Object.m_Name_Object 
            << " (" << Word_Number_Object.m_year << ")"
            << " " << Word_Number_Object.m_String_Object;;
        }
        else if(Word_Number_Object.Num_for_printing_form == 3){
            os << Word_Number_Object.m_Name_Object 
            << " = " << Word_Number_Object.m_year
            << " " << Word_Number_Object.m_String_Object;;
        }
        else if(Word_Number_Object.Num_for_printing_form == 4){
            os << Word_Number_Object.m_Name_Object 
            << " " << Word_Number_Object.m_year
            << " " << Word_Number_Object.m_String_Object;;
        }
    }

    else if(Word_Number_Object.Num_for_constructor == 2){
        if(Word_Number_Object.Num_for_printing_form == 1){
            os << Word_Number_Object.m_Name_Object
            << " : " << Word_Number_Object.m_Measurement_and_unit_Object;
        }
        else if(Word_Number_Object.Num_for_printing_form == 2){
            os << Word_Number_Object.m_Name_Object
            << " (" << Word_Number_Object.m_Measurement_and_unit_Object << ")";
        }
        else if(Word_Number_Object.Num_for_printing_form == 3){
            os << Word_Number_Object.m_Name_Object
            << " = " << Word_Number_Object.m_Measurement_and_unit_Object;
        }
        else if(Word_Number_Object.Num_for_printing_form == 4){
            os << Word_Number_Object.m_Name_Object
            << " " << Word_Number_Object.m_Measurement_and_unit_Object;
        }
    }
    
    else if(Word_Number_Object.Num_for_constructor == 3){
        if(Word_Number_Object.Num_for_printing_form == 1){
            os << Word_Number_Object.m_Name_Object
            << " : " 
            << Word_Number_Object.m_Float_Number_Object
            << " " << Word_Number_Object.m_String_Object;;
        }
        else if(Word_Number_Object.Num_for_printing_form == 2){
            os << Word_Number_Object.m_Name_Object
            << " (" 
            << Word_Number_Object.m_Float_Number_Object << ")"
            << " " << Word_Number_Object.m_String_Object;;
        }
        else if(Word_Number_Object.Num_for_printing_form == 3){
            os << Word_Number_Object.m_Name_Object
            << " = " 
            << Word_Number_Object.m_Float_Number_Object
            << " " << Word_Number_Object.m_String_Object;;
        }
        else if(Word_Number_Object.Num_for_printing_form == 4){
            os << Word_Number_Object.m_Name_Object
            << " " 
            << Word_Number_Object.m_Float_Number_Object
            << " " << Word_Number_Object.m_String_Object;;
        }
    }
    else if(Word_Number_Object.Num_for_constructor == 4){
        if(Word_Number_Object.Num_for_printing_form == 1){
            os << Word_Number_Object.m_Name_Object
            << " : " 
            << Word_Number_Object.m_Float_Number_Object;
        }
        else if(Word_Number_Object.Num_for_printing_form == 2){
            os << Word_Number_Object.m_Name_Object
            << " (" 
            << Word_Number_Object.m_Float_Number_Object << ")";
        }
        else if(Word_Number_Object.Num_for_printing_form == 3){
            os << Word_Number_Object.m_Name_Object
            << " = " 
            << Word_Number_Object.m_Float_Number_Object;
        }
        else if(Word_Number_Object.Num_for_printing_form == 4){
            os << Word_Number_Object.m_Name_Object
            << " " 
            << Word_Number_Object.m_Float_Number_Object;
        }
    }
    else{
        os << Word_Number_Object.m_String_Object;
    }

    return os;
}

