#include "Name.hpp"

std::ostream& operator<<(std::ostream& os, const Name& name_object){
    if(name_object.num_for_constructor == 1){
        os << name_object.first_name  << " "
           << name_object.middle_name << " "
           << name_object.last_name;
    }
    else if(name_object.num_for_constructor == 2){
        os << name_object.first_name << " "
           << name_object.last_name; 
    }
    else if(name_object.num_for_constructor == 3){
        os << name_object.other_name;
    }

    return os;
}

Name::Name(
    std::string _first_name,
    std::string _middle_name,
    std::string _last_name
):  first_name(_first_name),
    middle_name(_middle_name),
    last_name(_last_name)
{
    num_for_constructor = 1;
}

Name::Name(
    std::string _first_name,
    std::string _last_name
):  first_name(_first_name),
    last_name(_last_name)
{
    num_for_constructor = 2;
};

Name::Name(
    std::string _other_name
):  other_name(_other_name)
{
    num_for_constructor = 3;
}