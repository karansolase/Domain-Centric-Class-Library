#pragma once 

#ifndef _SIZE_GUIDE_INFO_HPP
#define _SIZE_GUIDE_INFO_HPP

#include <iostream>
#include <vector>
#include "variants_info.hpp"

class size_guide_info{
    friend std::ostream& operator<<(std::ostream& os, const size_guide_info& object);

    private :

    Variant_Info brand_size;
    Variant_Info standard_size;
    Variant_Info IN_size;
    Variant_Info india;
    Variant_Info UK;
    Variant_Info US;
    Variant_Info EU;
    Variant_Info USA_or_US;

    Variant_Info waist;
    Variant_Info Inseam;
    Variant_Info hip;
    Variant_Info Rise;
    Variant_Info thigh_circumference;
    Variant_Info leg_opening;
    Variant_Info Chest;
    Variant_Info Sleeve_length;
    Variant_Info shoulder;
    Variant_Info Neck;
    Variant_Info front_length_or_length;
    Variant_Info heel_to_toe_in_inch;

    Variant_Info head_circumference;
    Variant_Info Hat_Size;
    Variant_Info Age;

    Variant_Info Rider_height;  
    Variant_Info Wheel_Size; 
    Variant_Info Weight_capacity;  
    Variant_Info Frame_Size; 

    int num_for_constructor;

    public :
    // Tops :
    size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _Standard_size,
        Variant_Info _IN_size,
        Variant_Info _india,
        Variant_Info _UK,
        
        Variant_Info _chest,
        Variant_Info _waist, 
        Variant_Info _shoulder,
        Variant_Info _sleeve_length,
        Variant_Info _front_length_or_length,
        Variant_Info _neck
    );

    // Bottoms :
    size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _standard_size,
        Variant_Info _IN_size,

        Variant_Info _waist,
        Variant_Info _hip,
        Variant_Info _inseam,
        Variant_Info _Rise,
        Variant_Info _front_length_or_length,
        Variant_Info _thigh_circumference,
        Variant_Info _leg_opening
    );

    // footwear
    size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _india,
        Variant_Info _UK,
        Variant_Info _USA_or_US,
        Variant_Info _EU,
        Variant_Info _heel_to_toe_in_inch,
        Variant_Info _front_length_or_length
    );

    // Helmet
    size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _head_circumference,
        Variant_Info _hat_size,
        Variant_Info _Age
    );

    // Cap
    size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _india,
        Variant_Info _head_circumference
    );

    // Cycle
    size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _rider_height,
        Variant_Info _wheel_size,
        Variant_Info _weight_capacity,
        Variant_Info _Frame_Size,
        Variant_Info _Age
    );

    // if Waist is in range put it in string.
};

#endif