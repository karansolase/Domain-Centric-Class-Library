#pragma once 

#ifndef _STORAGE_FURNITURE_HPP
#define _STORAGE_FURNITURE_HPP

#include <iostream>
#include <vector>
#include "Additional_Info.hpp"
#include "variants.hpp"

class storage_furniture{

    friend std::ostream& operator<<(std::ostream& os, const storage_furniture& object);

    private :
    std::string product_name; 
    std::string brand_name; 

    std::vector <variants> variants_object;

    std::string Material;
    std::string Mounting_Type; 
    std::string Door_Style; 
    std::string Back_Style;
    std::string Finish_Type;
    std::string Shape; 
    std::string publisher_code; 
    std::string Furniture_finish; 
    std::string Base_Type; 
    std::string Installation_Type; 
    std::string Is_cutomisable; 
    std::string Top_Material_Type; 
    std::string Type_of_Wood;
    std::string Handle_Material; 
    std::string Back_Material_Type; 
    std::string Assembly_Required; 
    std::string Frame_Material; 
    std::string Lock_Type;
    std::string Assembly_Type; 
    std::string Primary_material; 
    std::string Top_Material; 
    std::string Upholstery_material; 
    std::string shelf_type; 
    std::string Drawer_type; 
    variants Capacity; 
    std::string Storage_Availability; 
    std::string Shelf_Material;  
    std::string Footboard_upholstery;  
    std::string mattress_comfort; 

    Measurement_and_unit Minimum_required_door_width; 
    Measurement_and_unit Shelf_Thickness; 
    Measurement_and_unit load_capacity; 
    Measurement_and_unit Number_of_Shelves; 
    Measurement_and_unit Shipping_weight; 
    Measurement_and_unit Ground_To_Item_Distance; 

    unsigned int Number_of_Pieces; 
    unsigned int Number_of_Compartments;
    unsigned int Number_of_Levels;
    unsigned int Number_of_Items; 
    unsigned int Number_of_doors; 
    unsigned int Number_of_drawers;

    std::vector <std::string> Room_type; 

    std::vector <std::string> Special_features; 
    std::vector <std::string> Recommended_Uses_For_Product; 
    std::vector <std::string> Care_Instructions; 
    std::vector <std::string> Legal_Disclaimer; 
    std::vector <std::string> Safety_information; 
    std::vector <std::string> About_this_item; 
    std::vector <std::string> Product_description; 
    std::vector <std::string> Key_features; 

    Additional_Info add_info;

    void printing_string_vector(std::vector <std::string> string_vector_object) const;

    public :

    storage_furniture(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <variants> _variants_object,

    std::string _Material,
    std::string _Mounting_Type,
    std::string _Door_Style,
    std::string _Back_Style,
    std::string _Finish_Type,
    std::string _Shape,
    std::string _publisher_code,
    std::string _Furniture_finish,
    
    double Minimum_required_door_width_value,
    std::initializer_list <std::string> Minimum_required_door_width_unit_string,
    
    double Shelf_Thickness_value,
    std::initializer_list <std::string> Shelf_Thickness_unit_string,
    
    std::string _Base_Type,
    std::string _Installation_Type,
    std::string _Is_cutomisable,
    std::string _Top_Material_Type,
    std::string _Type_of_Wood,
    std::string _Handle_Material,
    std::string _Back_Material_Type,
    std::string _Assembly_Required,
    std::string _Frame_Material,
    std::string _Lock_Type,
    std::string _Assembly_Type,
    std::string _Primary_material,
    std::string _Top_Material,
    std::string _Upholstery_material,
    std::string _shelf_type,
    std::string _Drawer_type,
    
    variants _capacity,
    
    double load_capacity_value,
    std::initializer_list <std::string> load_capacity_unit_string,
    
    std::string _Storage_Availability,
    std::string _Shelf_Material,
    std::string _Footboard_upholstery,
    
    double Number_of_Shelves_value,
    std::initializer_list <std::string> Number_of_Shelves_unit_string,
    
    double Shipping_weight_value,
    std::initializer_list <std::string> Shipping_weight_unit_string,
    
    double Ground_To_Item_Distance_value,
    std::initializer_list <std::string> Ground_To_Item_Distance_unit_string,
    
    std::string _mattress_comfort,

    unsigned int _Number_of_Pieces,
    unsigned int _Number_of_Compartments,
    unsigned int _Number_of_Levels,
    unsigned int _Number_of_Items,
    unsigned int _Number_of_doors,
    unsigned int _Number_of_drawers,

    std::initializer_list <std::string> _Room_type,
    
    std::initializer_list <std::string> _Special_features,
    std::initializer_list <std::string> _Recommended_Uses_For_Product,
    std::initializer_list <std::string> _Care_Instructions,
    std::initializer_list <std::string> _Legal_Disclaimer,
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Product_description,
    std::initializer_list <std::string> _Key_features,

    Additional_Info _add_info
    );

};

#endif


