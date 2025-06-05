#pragma once 

#ifndef _CYCLE_HPP
#define _CYCLE_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Variants.hpp"
#include "Size_guide.hpp"

class Bicycle{

    friend std::ostream& operator<<(std::ostream& os, const Bicycle& Bycle_object);

    private :
    std::string Bycle_Cycle_Name;
    std::string Bycle_Brand_Name;

    std::vector <Variants> Bycle_variants_object;

    std::string Bycle_Size_Chart_Name; 
    std::vector <size_guide> Bycle_Size_Guide_Object;

    Variants Bycle_Age_Range_Description; 
    std::string Bycle_Bike_Type; 
    std::string Bycle_Frame_Material; 
    std::string Bycle_Wheel_Material; 
    std::string Bycle_Handle_Type; 
    std::string Bycle_Material_type; 
    std::string Bycle_Suspension_Type;
    std::string Bycle_Brake_style; 
    std::string Bycle_Season;
    std::string Bycle_Outer_Material;
    std::string Bycle_Theme; 
    std::string Bycle_Seat_material_type;
    std::string Bycle_Assembly_required; 
    std::string Bycle_Is_Autographed;
    std::string Bycle_Warranty_type; 
    std::string Bycle_Skill_level; 
    std::string Bycle_Fender_Material; 
    std::string Bycle_Department;
    std::string Bycle_Power_Source; 
    std::string Bycle_Bicycle_Gear_Shifter_Type;
    std::string Bycle_Item_Part_Number; 

    long long unsigned int Bycle_UPC;	

    Measurement_and_unit Bycle_Wattage;
    Measurement_and_unit Bycle_Lithium_Battery_Energy_Content; 
    Measurement_and_unit Bycle_Wheel_width; 
    Measurement_and_unit Bycle_Frame_size; 
    Measurement_and_unit Bycle_Length; 
    Measurement_and_unit Bycle_Width; 
    Measurement_and_unit Bycle_Height; 
    Measurement_and_unit Bycle_Speed_Rating;
    Measurement_and_unit Bycle_Tire_size; 
    Measurement_and_unit Bycle_Maximum_weight_recommendations; 
    Measurement_and_unit Bycle_Minimum_user_height; 

    unsigned int Bycle_Number_of_speeds; 
    unsigned int Bycle_Number_of_items; 

    std::vector <std::string> Bycle_Product_description;
    std::vector <std::string> Bycle_Special_features; 
    std::vector <std::string> Bycle_Special_Uses_for_Product; 
    std::vector <std::string> Bycle_About_this_items; 

    Additional_Info Bycle_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Bicycle(
    std::string _Cycle_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    std::string _size_chart_name, 
    std::initializer_list <size_guide> _size_guide_object,

    Variants _Age_range_description, 
    std::string _Bike_type,
    std::string _Frame_Material, 
    std::string _Wheel_Material, 
    std::string _Handle_Type, 
    std::string _Material_type, 
    std::string _Suspension_type, 
    std::string _brake_style, 
    std::string _Season, 
    std::string _Outer_Material, 
    std::string _theme, 
    std::string _Seat_material_type, 
    std::string _Assembly_required, 
    std::string _Is_Autographed,
    std::string _Warranty_type, 
    std::string _Skill_level, 
    std::string _Fender_Material, 
    std::string _Department, 
    std::string _Power_Source, 
    std::string _Bicycle_Gear_Shifter_Type, 
    std::string _Item_Part_Number, 

    long long unsigned int _UPC, 

    double Wattage_value,
    std::initializer_list <std::string> Wattage_unit_and_string, 

    double Lithium_Battery_Energy_Content_value,
    std::initializer_list <std::string> Lithium_Battery_Energy_Content_unit_and_string,

    double Wheel_width_value,
    std::initializer_list <std::string> Wheel_width_unit_and_string, 

    double Frame_size_value,
    std::initializer_list <std::string> Frame_size_unit_and_string, 

    double Length_value,
    std::initializer_list <std::string> Length_unit_and_string, 

    double width_value,
    std::initializer_list <std::string> width_unit_and_string, 

    double Height_value,
    std::initializer_list <std::string> Height_unit_and_string, 

    double Speed_rating_value,
    std::initializer_list <std::string> Speed_rating_unit_and_string, 

    double Tire_size_value,
    std::initializer_list <std::string> Tire_size_unit_and_string, 

    double Maximum_weight_recommendations_value,
    std::initializer_list <std::string> Maximum_weight_recommendations_unit_and_string, 

    double Minimum_user_height_value,
    std::initializer_list <std::string> Minimum_user_height_unit_and_string, 

    unsigned int _number_of_speeds, 
    unsigned int _number_of_items,

    std::initializer_list <std::string> _Product_description, 
    std::initializer_list <std::string> _Special_features, 
    std::initializer_list <std::string> _Special_Uses_for_Product, 
    std::initializer_list <std::string> _About_this_items,

    std::string _ASIN,
       
      Name_Address_Email_No Manufacturing_Object,
      Date _Manufacturing_Year,

      std::initializer_list <Measurement_and_unit> _Warranty, 

      std::string _Country_Of_Origin,
      std::string _Model_Number,

      float _Ratings,
      unsigned int _Reviews,

      std::initializer_list <std::string> _Best_Seller_Rank,

      Date _Date_First_Available,
       // Format : 15 Nov, 2016 OR 15/11/2016

      Name_Address_Email_No Packer_Object,
      Name_Address_Email_No Importer_Object,

      std::initializer_list <std::string> _Included_Components,
       
      double Item_dim_1,
      double Item_dim_2,
      double Item_dim_3,
      std::string Item_Dimension_unit,
      std::string Item_Dimension_format,

      double Product_dim_1,
      double Product_dim_2,
      double Product_dim_3,
      std::string Product_Dimension_unit,
      std::string Product_Dimension_format,

      double Weight_Size_value,
      std::initializer_list<std::string> Weight_size_unit_string,

      double Net_Quantity_Value,
      std::initializer_list<std::string> Net_Quantit_unit_string,

      std::initializer_list <std::string> _Generic_name
    );
};

#endif /* Bicycle.hpp */