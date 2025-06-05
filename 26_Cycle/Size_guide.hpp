#ifndef _SIZE_GUIDE_HPP
#define _SIZE_GUIDE_HPP

#include <iostream>
#include "size_guide_info.hpp"
#include <vector>

class size_guide{

    friend std::ostream& operator<<(std::ostream& os, const size_guide& object);

    private :
    std::string Sizing_option;
    std::string unit;
    std::vector <size_guide_info> size_guide_object;

    public :
    size_guide(
        std::string _Sizing_option,
        std::string _unit,
        std::initializer_list <size_guide_info> _size_guide_object
    );
};

#endif /* Size_guide.hpp */