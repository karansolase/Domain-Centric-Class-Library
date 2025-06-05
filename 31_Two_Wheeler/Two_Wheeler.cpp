#include "Two_Wheeler.hpp"

Two_Wheeler::Two_Wheeler(
    std::string _two_wheeler_name,
    std::string _company,

    std::initializer_list <variants> _variants_object, 

    std::string _Assembly_required, 
    std::string  _Age_Description, 
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
)
:   TW_Name(_two_wheeler_name),
    TW_Company(_company),

    TW_VariantsObject(_variants_object), 

    TW_AssemblyRequired(_Assembly_required), 
    TW_Age_Description(_Age_Description), 
    TW_Department(_Department), 
    TW_LiftType(_lift_type), 
    TW_Theme(_Theme),
    TW_Material(_Material), 
    TW_WheelMaterial(_Wheel_Material),
    TW_FrameMaterial(_Frame_material), 
    TW_HandlebarType(_Handlebar_type), 
    TW_WheelType(_Wheel_type), 
    TW_TyreType(_Tyre_type),
    TW_Bicycle_Gear_Shifter_Type(_Bicycle_gear_shifter_type), 
    TW_Is_Autographed(_Is_Autographed), 
    TW_SuspensionType(_suspension_type), 
    TW_GripType(_Grip_type), 
    TW_Ignition_System_Type(_Ignition_system_type), 
    TW_Part_Number(_part_number),
    TW_PowerSource(_Power_source), 
    TW_Manufacturer_Part_Number(_manufacturer_part_number),
    TW_WarrantyType(_Warranty_type), 

    TW_Wheel_Size(
        Wheel_size_value,
        Wheel_size_unit_and_string), 

    TW_Wattage(
        Wattage_value,
        Wattage_unit_and_string), 

    TW_Voltage(
        Voltage_value,
        Voltage_unit_and_string), 

    TW_Weight_Limit(
        Weight_limit_value,
        Weight_limit_unit_and_string), 

    TW_Engine_Displacement(
        Engine_Displacement_value,
        Engine_Displacement_unit_and_string),

    TW_Maximum_Distance_Range(
        Maximum_Distance_range_value,
        Maximum_Distance_range_unit_and_string),

    TW_Charging_Time(
        Charging_time_value,
        Charging_time_unit_and_string), 

    TW_Number_of_Wheels(_Number_of_Wheels), 
    TW_Number_of_Speeds(_Number_of_Speeds), 

    TW_BrakeStyle(_Brake_Style), 
    TW_About_This_Item(_About_this_item),
    TW_Special_Features(_Special_features), 
    TW_Safety_Information(_Safety_information),
    TW_Legal_Disclaimer(_Legal_Disclaimer), 
    TW_Recommended_Uses_For_Product(_Recommended_uses_for_product), 
    TW_Product_Description(_Product_description),

    TW_Additional_Info(_add_info)
{

}

void Two_Wheeler::printing_vector_string(std::vector <std::string> string_vector_object) const{
      int j = 0;
      for(const std::string i : string_vector_object){
            j = j + 1;
            if(i == "" && j == 1){
                  std::cout << std::endl;
                  break;
            }
      std::cout << j << ") " << i << std::endl;
      }
};

std::ostream& operator<<(std::ostream& os, const Two_Wheeler& TW_Object){
    os << "PRODUCT DETAILS  :  " << std::endl << std::endl

    << "Bike Name : " << TW_Object.TW_Name << std::endl
    << "Company : " << TW_Object.TW_Company << std::endl << std::endl;

    std::vector<variants>::const_iterator Iter = 
    TW_Object.TW_VariantsObject.begin();

    while(Iter != TW_Object.TW_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }
    os

    << "Assembly Required : " << TW_Object.TW_AssemblyRequired << std::endl
    << "Age Description : " << TW_Object.TW_Age_Description << std::endl
    << "Department : " << TW_Object.TW_Department << std::endl
    << "Lift Type : " << TW_Object.TW_LiftType << std::endl
    << "Theme : " << TW_Object.TW_Theme << std::endl
    << "Material : " << TW_Object.TW_Material << std::endl
    << "Wheel Material : " << TW_Object.TW_WheelMaterial << std::endl
    << "Frame Material : " << TW_Object.TW_FrameMaterial << std::endl
    << "HandleBar Type : " << TW_Object.TW_HandlebarType << std::endl
    << "Wheel Type : " << TW_Object.TW_WheelType << std::endl
    << "Tyre Type : " << TW_Object.TW_TyreType << std::endl
    << "Bicycle Gear Shifter Type : " << TW_Object.TW_Bicycle_Gear_Shifter_Type << std::endl
    << "Is Autographed : " << TW_Object.TW_Is_Autographed << std::endl
    << "Suspensions Type : " << TW_Object.TW_SuspensionType << std::endl
    << "Grip Type : " << TW_Object.TW_GripType << std::endl
    << "Ignition System Type : " << TW_Object.TW_Ignition_System_Type << std::endl
    << "Part Number : " << TW_Object.TW_Part_Number << std::endl
    << "Power Source : " << TW_Object.TW_PowerSource << std::endl
    << "Manufacturer Part Number : " << TW_Object.TW_Manufacturer_Part_Number << std::endl
    << "Warranty Type : " << TW_Object.TW_WarrantyType << std::endl << std::endl

    << "Wheel Size : " << TW_Object.TW_Wheel_Size << std::endl
    << "Wattage : " << TW_Object.TW_Wattage << std::endl
    << "Voltage : " << TW_Object.TW_Voltage << std::endl
    << "Weight Limit : " << TW_Object.TW_Weight_Limit << std::endl
    << "Engine Displacement : " << TW_Object.TW_Engine_Displacement << std::endl
    << "Maximum Distance Range : " << TW_Object.TW_Maximum_Distance_Range << std::endl
    << "Charging Time : " << TW_Object.TW_Charging_Time << std::endl << std::endl

    << "Number of Wheels : " << TW_Object.TW_Number_of_Wheels << std::endl
    << "Number of Speeds : " << TW_Object.TW_Number_of_Speeds << std::endl << std::endl

    << "Brake Style : ";
    TW_Object.printing_vector_string(TW_Object.TW_BrakeStyle);
    os << std::endl

    << "About this Item : ";
    TW_Object.printing_vector_string(TW_Object.TW_About_This_Item);
    os << std::endl

    << "Special Features : ";
    TW_Object.printing_vector_string(TW_Object.TW_Special_Features);
    os << std::endl

    << "Safety Information : ";
    TW_Object.printing_vector_string(TW_Object.TW_Safety_Information);
    os << std::endl

    << "Legal Disclaimer : ";
    TW_Object.printing_vector_string(TW_Object.TW_Legal_Disclaimer);
    os << std::endl

    << "Recommended Uses for Product : ";
    TW_Object.printing_vector_string(TW_Object.TW_Recommended_Uses_For_Product);
    os << std::endl

    << "Product Description : ";
    TW_Object.printing_vector_string(TW_Object.TW_Product_Description);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << TW_Object.TW_Additional_Info;

    return os;
}