#include "size_guide.hpp"

size_guide::size_guide(
    std::string _Sizing_option,
    std::string _unit,
    std::initializer_list <size_guide_info> _size_guide_object
)
:   Sizing_option(_Sizing_option),
    unit(_unit),
    size_guide_object(_size_guide_object)
{

}

std::ostream& operator<<(std::ostream& os, const size_guide& object){
    int j = 0;

    os 
    << "Sizing Option : " << object.Sizing_option << std::endl
    << "Unit : " << object.unit << std::endl;

    for(const size_guide_info i : object.size_guide_object){
        j = j + 1;
        os << j << ") " << i << std::endl;
    }

    return os;
}