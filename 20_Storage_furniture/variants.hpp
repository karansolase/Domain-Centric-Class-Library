#ifndef _VARIANTS_HPP
#define _VARIANTS_HPP

#include "variants_info.hpp"

class variants{

    friend std::ostream& operator<<(std::ostream& os, const variants& object);

    private :
    std::string variant_form;
    std::vector <Variant_Info> variant_info_object;

    public :

    variants(
    std::string _variant_form,
    std::initializer_list <Variant_Info> _variant_info_object 
    );
};

#endif /* variants.hpp */