#include "size_guide_info.hpp"

std::ostream& operator<<(std::ostream& os, const size_guide_info& object){

    if(object.num_for_constructor == 1){
        os
        << object.brand_size    << "  |  "
        << object.standard_size << "  |  "
        << object.IN_size       << "  |  "
        << object.india         << "  |  "
        << object.UK            << "  |  "
        << object.Chest         << "  |  "
        << object.waist         << "  |  "
        << object.shoulder      << "  |  "
        << object.Sleeve_length << "  |  "
        << object.front_length_or_length << "  |  "
        << object.Neck          << "  |  " << std::endl;
    }
    else if(object.num_for_constructor == 2){
        os
        << object.brand_size             << "  |  "
        << object.standard_size          << "  |  "
        << object.IN_size                << "  |  "
        << object.waist                  << "  |  "
        << object.hip                    << "  |  "
        << object.Inseam                 << "  |  "
        << object.Rise                   << "  |  "
        << object.front_length_or_length << "  |  "
        << object.thigh_circumference    << "  |  "
        << object.leg_opening            << "  |  " << std::endl;
    }
    else if(object.num_for_constructor == 3){
        os
        << object.brand_size             << "  |  "
        << object.india                  << "  |  "
        << object.UK                     << "  |  "
        << object.USA_or_US              << "  |  "
        << object.EU                     << "  |  "
        << object.heel_to_toe_in_inch    << "  |  "
        << object.front_length_or_length << "  |  " << std::endl;
    }
    else if(object.num_for_constructor == 4){
        os 
        << object.brand_size          << "  |  "
        << object.head_circumference  << "  |  " 
        << object.Hat_Size            << "  |  "
        << object.Age                 << "  |  " << std::endl;
    }
    else if(object.num_for_constructor == 5){
        os 
        << object.brand_size          << "  |  "
        << object.india               << "  |  "
        << object.head_circumference  << "  |  " << std::endl;
    }
    else if(object.num_for_constructor == 6){
        os
        << object.brand_size          << "  |  "
        << object.Rider_height        << "  |  "
        << object.Wheel_Size          << "  |  "
        << object.Weight_capacity     << "  |  "
        << object.Frame_Size          << "  |  "
        << object.Age                 << "  |  " << std::endl;
    }

    return os;
}

size_guide_info::size_guide_info(
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
)
:   brand_size(_brand_size),
    standard_size(_Standard_size),
    IN_size(_IN_size),
    india(_india),
    UK(_UK),
        
    Chest(_chest),
    waist(_waist), 
    shoulder(_shoulder),
    Sleeve_length(_sleeve_length),
    front_length_or_length(_front_length_or_length),
    Neck(_neck),

    US(""), 
    EU(""), 
    USA_or_US(""), 
    Inseam(""), 
    hip(""), 
    Rise(""), 
    thigh_circumference(""), 
    leg_opening(""), 
    heel_to_toe_in_inch(""), 
    head_circumference(""), 
    Hat_Size(""), 
    Age(""),

    Rider_height(""),
    Wheel_Size(""),
    Weight_capacity(""),
    Frame_Size("")
{
    num_for_constructor = 1;
}

size_guide_info::size_guide_info(
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
)
:   brand_size(_brand_size),
    standard_size(_standard_size),
    IN_size(_IN_size),

    waist(_waist),
    hip(_hip),
    Inseam(_inseam),
    Rise(_Rise),
    front_length_or_length(_front_length_or_length),
    thigh_circumference(_thigh_circumference),
    leg_opening(_leg_opening),

    india(""), 
    UK(""), 
    US(""), 
    EU(""), 
    USA_or_US(""),
    Chest(""), 
    Sleeve_length(""), 
    shoulder(""), 
    Neck(""), 
    heel_to_toe_in_inch(""),
    head_circumference(""), 
    Hat_Size(""), 
    Age(""),

    Rider_height(""),
    Wheel_Size(""),
    Weight_capacity(""),
    Frame_Size("")
{
    num_for_constructor = 2;
}

size_guide_info::size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _india,
        Variant_Info _UK,
        Variant_Info _USA_or_US,
        Variant_Info _EU,
        Variant_Info _heel_to_toe_in_inch,
        Variant_Info _front_length_or_length

)
:   brand_size(_brand_size),
    india(_india),
    UK(_UK),
    USA_or_US(_USA_or_US),
    EU(_EU),
    heel_to_toe_in_inch(_heel_to_toe_in_inch),
    front_length_or_length(_front_length_or_length),

    standard_size(""),
    IN_size(""),
    US(""),
    waist(""),
    Inseam(""),
    hip(""),
    Rise(""),
    thigh_circumference(""),
    leg_opening(""),
    Chest(""),
    Sleeve_length(""),
    shoulder(""),
    Neck(""),
    head_circumference(""),
    Hat_Size(""),
    Age(""),

    Rider_height(""),
    Wheel_Size(""),
    Weight_capacity(""),
    Frame_Size("")

{
    num_for_constructor = 3;
}

size_guide_info::size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _head_circumference,
        Variant_Info _hat_size,
        Variant_Info _Age
)
:   brand_size(_brand_size),
    head_circumference(_head_circumference),
    Hat_Size(_hat_size),
    Age(_Age),

    standard_size(""),
    IN_size(""),
    india(""),
    UK(""),
    US(""),
    EU(""),
    USA_or_US(""),

    waist(""),
    Inseam(""),
    hip(""),
    Rise(""),
    thigh_circumference(""),
    leg_opening(""),
    Chest(""),
    Sleeve_length(""),
    shoulder(""),
    Neck(""),
    front_length_or_length(""),
    heel_to_toe_in_inch(""),

    Rider_height(""),
    Wheel_Size(""),
    Weight_capacity(""),
    Frame_Size("")
{
    num_for_constructor =4; 
}

size_guide_info::size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _india,
        Variant_Info _head_circumference)
:   brand_size(_brand_size), 
    india(_india), 
    head_circumference(_head_circumference),

    standard_size(""),
    IN_size(""),
    UK(""),
    US(""),
    EU(""),
    USA_or_US(""),

    waist(""),
    Inseam(""),
    hip(""),
    Rise(""),
    thigh_circumference(""),
    leg_opening(""),
    Chest(""),
    Sleeve_length(""),
    shoulder(""),
    Neck(""),
    front_length_or_length(""),
    heel_to_toe_in_inch(""),

    Hat_Size(""),
    Age(""),

    Rider_height(""),
    Wheel_Size(""),
    Weight_capacity(""),
    Frame_Size("")
{
    num_for_constructor = 5;
}

size_guide_info::size_guide_info(
        Variant_Info _brand_size,
        Variant_Info _rider_height,
        Variant_Info _wheel_size,
        Variant_Info _weight_capacity,
        Variant_Info _Frame_Size,
        Variant_Info _Age
)
:   brand_size(_brand_size),
    Rider_height(_rider_height),
    Wheel_Size(_wheel_size),
    Weight_capacity(_weight_capacity),
    Frame_Size(_Frame_Size),
    Age(_Age),

    standard_size(""),
    IN_size(""),
    india(""),
    UK(""),
    US(""),
    EU(""),
    USA_or_US(""),

    waist(""),
    Inseam(""),
    hip(""),
    Rise(""),
    thigh_circumference(""),
    leg_opening(""),
    Chest(""),
    Sleeve_length(""),
    shoulder(""),
    Neck(""),
    front_length_or_length(""),
    heel_to_toe_in_inch(""),

    head_circumference(""),
    Hat_Size("")
{
    num_for_constructor = 6;
}
