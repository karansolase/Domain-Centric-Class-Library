#pragma once 

#ifndef _REVIEW_HPP
#define _REVIEW_HPP

#include <iostream>

class Reviews{

    friend std::ostream& operator<<(std::ostream& os, const Reviews& rvw_obj);

    private :
       float ratings;
       unsigned int reviews;

       std::string string_object;

    public :
       Reviews(float _ratings, unsigned int _reviews);
       Reviews(std::string _string_object);
};

#endif /* Reviews.hpp */