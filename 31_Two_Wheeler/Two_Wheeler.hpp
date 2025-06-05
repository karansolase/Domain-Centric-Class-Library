#pragma once 

#ifndef _TWO_WHEELER_HPP
#define _TWO_WHEELER_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include <vector>
#include "variants.hpp"
#include "variants_info.hpp"

class Two_Wheeler{

    friend std::ostream& operator<<(std::ostream& os, const Two_Wheeler& TW_Object);

    private :
    std::string TW_Name;
    std::string TW_Company;

    std::vector <variants> TW_VariantsObject; 

    std::string TW_AssemblyRequired; 
    std::string  TW_Age_Description; 
    std::string TW_Department; 
    std::string TW_LiftType; 
    std::string TW_Theme; 
    std::string TW_Material; 
    std::string TW_WheelMaterial; 
    std::string TW_FrameMaterial; 
    std::string TW_HandlebarType; 
    std::string TW_WheelType; 
    std::string TW_TyreType; 
    std::string TW_Bicycle_Gear_Shifter_Type; 
    std::string TW_Is_Autographed; 
    std::string TW_SuspensionType;
    std::string TW_GripType; 
    std::string TW_Ignition_System_Type;
    std::string TW_Part_Number;
    std::string TW_PowerSource; 
    std::string TW_Manufacturer_Part_Number;
    std::string TW_WarrantyType; 

    Measurement_and_unit TW_Wheel_Size; 
    Measurement_and_unit TW_Wattage; 
    Measurement_and_unit TW_Voltage; 
    Measurement_and_unit TW_Weight_Limit; 
    Measurement_and_unit TW_Engine_Displacement; 
    Measurement_and_unit TW_Maximum_Distance_Range; 
    Measurement_and_unit TW_Charging_Time; 

    unsigned int TW_Number_of_Wheels; 
    unsigned int TW_Number_of_Speeds; 

    std::vector <std::string> TW_BrakeStyle;

    std::vector <std::string> TW_About_This_Item;
    std::vector <std::string> TW_Special_Features;
    std::vector <std::string> TW_Safety_Information;
    std::vector <std::string> TW_Legal_Disclaimer; 
    std::vector <std::string> TW_Recommended_Uses_For_Product; 
    std::vector <std::string> TW_Product_Description; 

    Additional_Info TW_Additional_Info;

    public :

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    Two_Wheeler(
    std::string _two_wheeler_name,
    std::string _company,

    std::initializer_list <variants> _variants_object, 

    std::string _Assembly_required, 
    std::string _Age_Description, 
    std::string _Department, 
    std::string _lift_type, 
    std::string _Theme,
    std::string _Material, 
    std::string _Wheel_Material,
    std::string _Frame_material, 
    std::string _Handlebar_type, 
    std::string _Wheel_type, 
    std::string _Tyre_type,
    std::string _Bicycle_gear_shifter_type, 
    std::string _Is_Autographed, 
    std::string _suspension_type, 
    std::string _Grip_type, 
    std::string _Ignition_system_type, 
    std::string _part_number,
    std::string _Power_source, 
    std::string _manufacturer_part_number,
    std::string _Warranty_type, 

    double Wheel_size_value,
    std::initializer_list <std::string> Wheel_size_unit_and_string, 
    
    double Wattage_value,
    std::initializer_list <std::string> Wattage_unit_and_string, 
    
    double Voltage_value,
    std::initializer_list <std::string> Voltage_unit_and_string, 
    
    double Weight_limit_value,
    std::initializer_list <std::string> Weight_limit_unit_and_string, 
    
    double Engine_Displacement_value,
    std::initializer_list <std::string> Engine_Displacement_unit_and_string,
    
    double Maximum_Distance_range_value,
    std::initializer_list <std::string> Maximum_Distance_range_unit_and_string,
    
    double Charging_time_value,
    std::initializer_list <std::string> Charging_time_unit_and_string, 

    unsigned int _Number_of_Wheels, 
    unsigned int _Number_of_Speeds, 

    std::initializer_list <std::string> _Brake_Style, 
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Special_features, 
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _Legal_Disclaimer, 
    std::initializer_list <std::string> _Recommended_uses_for_product, 
    std::initializer_list <std::string> _Product_description,

    Additional_Info _add_info
    );

};

#endif /* Two_Wheeler.hpp */