#include "variants.hpp"

variants::variants(
    std::string _variant_form,
    std::initializer_list <Variant_Info> _variant_info_object 
)
:   variant_form(_variant_form),
    variant_info_object(_variant_info_object)
{

}

std::ostream& operator<<(std::ostream& os, const variants& object){
    int j = 0;

    os 
    << object.variant_form << " : "
    << std::endl;

    for(const Variant_Info i : object.variant_info_object){
        j = j + 1;
        std::cout << j << ") " << i << std::endl;
    }

    return os;
}