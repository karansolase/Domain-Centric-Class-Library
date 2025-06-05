#pragma once 

#ifndef _NAME_HPP
#define _NAME_HPP

#include <iostream>

class Name{

    friend std::ostream& operator<<(std::ostream& os, const Name& name_object);

   private :
    // person whole Name :
    std::string first_name;
    std::string middle_name;
    std::string last_name;

    // Other Name :
    std::string other_name;

    char num_for_constructor;

    public :
    Name(
        std::string _Title,
        std::string _first_name,
        std::string _middle_name,
        std::string _last_name
    );

    Name(
        std::string _first_name,
        std::string _middle_name,
        std::string _last_name);

    Name(
        std::string _first_name,
        std::string _last_name
    );

    Name(
        std::string _other_name
    );
};

#endif /* Name.hpp */