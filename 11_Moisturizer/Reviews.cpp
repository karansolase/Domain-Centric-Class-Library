#include "Reviews.hpp"

std::ostream& operator<<(std::ostream& os, const Reviews& rvw_obj){
    os << rvw_obj.ratings << " out of 5 Stars Ratings and " 
       << rvw_obj.reviews << " Reviews";

    return os;
}

Reviews::Reviews(float _ratings, unsigned int _reviews)
: ratings(_ratings), reviews(_reviews){
    
}

Reviews::Reviews(std::string _string_object)
: string_object(_string_object)
{

}
