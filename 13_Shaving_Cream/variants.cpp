#include "Variants.hpp"

Variants::Variants(
    std::string _Variant_form,
    std::initializer_list <Variant_Info> _Variant_Info_Object)  :
    
    m_Variant_Form(_Variant_form),
    m_Variants_Info_Object(_Variant_Info_Object)
{
    Num_For_Constructor = 1;
}

Variants::Variants(
    std::string string_Object)   :

    m_String_Object(string_Object)
{
    Num_For_Constructor = 2;
}

std::ostream& operator<<(std::ostream& os, const Variants& Variants_object){

    if(Variants_object.Num_For_Constructor == 1){
    int j = 0;
    os 
    << Variants_object.m_Variant_Form << " : "
    << std::endl;

    for(const Variant_Info i : Variants_object.m_Variants_Info_Object){
        j = j + 1;
        std::cout << j << ") " << i  << std::endl;
    } 
    }
    else if(Variants_object.Num_For_Constructor == 2){
    int j = 0;
        for(const Variant_Info i : Variants_object.m_String_Object)
        {
            j = j + 1;
            os << j << ") " << i << std::endl; 
        }
    }


    return os;
}