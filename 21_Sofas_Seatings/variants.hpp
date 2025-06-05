#pragma once

#ifndef _VARIANTS_HPP
#define _VARIANTS_HPP

#include "Variants_Info.hpp"

class Variants{

    friend std::ostream& operator<<(std::ostream& os, const Variants& Variants_object);

    private :
    std::string m_Variant_Form;
    std::vector <Variant_Info> m_Variants_Info_Object;

    std::string m_String_Object;

    char Num_For_Constructor;

    public :

    Variants(
    std::string _Variant_form,
    std::initializer_list <Variant_Info> _Variant_Info_Object);

    Variants(std::string string_Object);
};

#endif /* variants.hpp */