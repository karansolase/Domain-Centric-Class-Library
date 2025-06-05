#include "oven.hpp"

OVen::OVen(
    std::string _product_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    std::string _fuel_type,
    std::string _Installation_type,
    std::string _Defrost_system,

    double frequency_value,
    std::initializer_list <std::string> frequency_unit_string,
    
    std::string _controller_type,
    std::string _human_interface_input,
    std::string _Timer_function_Available,
    
    double capacity_value,
    std::initializer_list <std::string> capacity_unit_string,

    std::string _ventillation_type,

    double Outer_body_Item_Dimensions_first_value,
    double Outer_body_Item_Dimensions_Second_value,
    double Outer_body_Item_Dimensions_third_value,
    std::string Outer_body_Item_Dimensions_unit,
    std::string Outer_body_Item_Dimensions_format,

    double Inner_Cavity_Item_Dimensions_first_value,
    double Inner_Cavity_Item_Dimensions_Second_value,
    double Inner_Cavity_Item_Dimensions_third_value,
    std::string Inner_Cavity_Item_Dimensions_unit,
    std::string Inner_Cavity_Item_Dimensions_string,

    std::string _inner_cavity,
    std::string _inner_cavity_material, 
    
    double turntable_diameter_value,
    std::initializer_list <std::string> turntable_diameter_unit_string,

    std::initializer_list <std::string> _material,
    
    double energy_consumptions_value,
    std::initializer_list <std::string> energy_consumptions_unit_string,

    double Annual_energy_consumptions_value,
    std::initializer_list <std::string> Annual_energy_consumptions_unit_string,

    double Grill_power_consumptions_value,
    std::initializer_list <std::string> Grill_power_consumptions_unit_string,

    double power_output_value,
    std::initializer_list <std::string> power_output_unit_string,

    double Microwave_power_consumptions_value,
    std::initializer_list <std::string> Microwave_power_consumptions_unit_string,

    double Voltage_value,
    std::initializer_list <std::string> Voltage_unit_string,

    double Volume_capacity_name_value,
    std::initializer_list <std::string> Volume_capacity_name_unit_string,

    double wattage_value,
    std::initializer_list <std::string> wattage_unit_string,

    std::string _Door_orientation,
    unsigned int _number_of_power_levels,
    std::string _finish_type,
    std::string _door_material_type,
    std::string _power_source,

    std::string temp_range_string_1,
    double temp_first_value,
    double temp_second_value,
    std::string temp_range_symbol,
    std::string temp_range_string_2,

    std::string _burner_type,
    std::string _Batteries_included,
    std::string _Batteries_required,

    std::initializer_list <std::string> _heating_method,
    std::initializer_list <std::string > _cooking_method,
    std::initializer_list <std::string> _lock_type,
    std::initializer_list <std::string> _door_style,
    std::initializer_list <std::string> _Name_of_programmes,
    
    std::initializer_list <std::string> _special_features,
    std::initializer_list <std::string> _Additional_features,
    std::initializer_list <std::string> _Recommended_uses_for_product,

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
)
:   OVen_ProductName(_product_name),
    OVen_BrandName(_brand),

    OVen_VariantsObject(_variants_object),

    OVen_CECD_Object(
        _controller_type,
        _Batteries_included,
        _Batteries_required,
        "",
        "",
        _power_source,
        "",
        _Installation_type,
        "",
        "",
        "",
        _human_interface_input,
        {""},
        {""},
        {""},

        0,{""},
        0,{""},
        capacity_value,capacity_unit_string,
        0,{""},
        0,{""},
        0,{""},
        {""},

        Microwave_power_consumptions_value,
        Microwave_power_consumptions_unit_string,

        0,{""},

        Annual_energy_consumptions_value,
        Annual_energy_consumptions_unit_string,
        Voltage_value, Voltage_unit_string,
        wattage_value, wattage_unit_string,

        {""},
        {""},
        {""},
        {""},
        {""},
        _material
    ),
       
    OVen_FuelType(_fuel_type),
    OVen_DefrostSystem(_Defrost_system),

    OVen_Frequency(
        frequency_value,
        frequency_unit_string),
    
    OVen_Timer_Function_Available(_Timer_function_Available),

    OVen_VentillationType(_ventillation_type),

    OVen_OuterBody_ItemDimensions(
        Outer_body_Item_Dimensions_first_value,
        Outer_body_Item_Dimensions_Second_value,
        Outer_body_Item_Dimensions_third_value,
        Outer_body_Item_Dimensions_unit,
        Outer_body_Item_Dimensions_format),

    OVen_InnerCavity_ItemDimensions(
        Inner_Cavity_Item_Dimensions_first_value,
        Inner_Cavity_Item_Dimensions_Second_value,
        Inner_Cavity_Item_Dimensions_third_value,
        Inner_Cavity_Item_Dimensions_unit,
        Inner_Cavity_Item_Dimensions_string),

    OVen_InnerCavity(_inner_cavity),
    OVen_Inner_Cavity_Material(_inner_cavity_material),

    OVen_TurntableDiameter(
        turntable_diameter_value,
        turntable_diameter_unit_string),

    OVen_EnergyConsumptions(
        energy_consumptions_value,
        energy_consumptions_unit_string),

    OVen_Grill_Power_Consumptions(
        Grill_power_consumptions_value,
        Grill_power_consumptions_unit_string),

    OVen_PowerOutput(
        power_output_value,
        power_output_unit_string),

    OVen_VolumeCapacity_Name(
        Volume_capacity_name_value,
        Volume_capacity_name_unit_string),

    OVen_DoorOrientation(_Door_orientation),
    OVen_Number_OF_PowerLevels(_number_of_power_levels),

    OVen_Door_MaterialType(_door_material_type),

    OVen_TemperatureRange(
        temp_range_string_1,
        temp_first_value,
        temp_range_symbol,
        temp_second_value,
        temp_range_string_2
    ),

    OVen_BurnerType(_burner_type),
    OVen_HeatingMethod(_heating_method),
    OVen_CookingMethod(_cooking_method),
    OVen_LockType(_lock_type),
    OVen_DoorStyle(_door_style),
    OVen_Name_OF_Programmes(_Name_of_programmes),
    
    OVen_SpecialFeatures(_special_features),
    OVen_AdditionalFeatures(_Additional_features),
    OVen_Recommended_Uses_FOR_Product(_Recommended_uses_for_product),

    OVen_Additional_Info(
        _ASIN,

        Manufacturing_Object,
        _Manufacturing_Year,
        
        _Warranty,
        
        _Country_Of_Origin,
        _Model_Number,

        _Ratings, _Reviews,

        _Best_Seller_Rank,
        
        _Date_First_Available, 
        
        Packer_Object,
        Importer_Object,
        
        _Included_Components,

        Item_dim_1,
        Item_dim_2,
        Item_dim_3,
        Item_Dimension_unit,
        Item_Dimension_format,

        Product_dim_1,
        Product_dim_2,
        Product_dim_3,
        Product_Dimension_unit,
        Product_Dimension_format,

        Weight_Size_value,
        Weight_size_unit_string,

        Net_Quantity_Value,
        Net_Quantit_unit_string,

        _Generic_name
    )
{    

}

void OVen::printing_vector_string(std::vector <std::string> string_vector_object) const
{
    int j = 0;
      for(const std::string i : string_vector_object){
            j = j + 1;
            if(i == "" && j == 1){
                  std::cout << std::endl;
                  break;
            }
      std::cout << j << ") " << i << std::endl;
      }
}

std::ostream& operator<<(std::ostream& os, const OVen& OVen_Object){
    os << "PRODUCT DETAILS     :" << std::endl << std::endl
    
    << "Product Name : " << OVen_Object.OVen_ProductName << std::endl
    << "Brand : " << OVen_Object.OVen_BrandName << std::endl << std::endl;
    
    std::vector<Variants>::const_iterator Iter = 
    OVen_Object.OVen_VariantsObject.begin();

    while(Iter != OVen_Object.OVen_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }

    os
    << "Fuel Type : " << OVen_Object.OVen_FuelType << std::endl
    << "Installation Type : " << OVen_Object.OVen_CECD_Object.CECD_InstallationType << std::endl
    << "Defrost System : " << OVen_Object.OVen_DefrostSystem << std::endl
    << "Frequency :  " << OVen_Object.OVen_Frequency << std::endl
    
    
    << "Controller Type : " << OVen_Object.OVen_CECD_Object.CECD_Control_Type_OR_Console << std::endl
    << "Human Interface Input : " << OVen_Object.OVen_CECD_Object.CECD_Human_Interface_Input << std::endl
    << "Timer Function Available : " << OVen_Object.OVen_Timer_Function_Available << std::endl
    << "Capacity : " << OVen_Object.OVen_CECD_Object.CECD_Capacity << std::endl
    << "Ventillation Type : " << OVen_Object.OVen_VentillationType << std::endl
    << "Inner Cavity : " << OVen_Object.OVen_InnerCavity << std::endl
    << "Turntable Dinner : " << OVen_Object.OVen_TurntableDiameter << std::endl
    
    << "Material : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_CECD_Object.CECD_Material);
    os << std::endl

    << "Energy Consumptions : " << OVen_Object.OVen_EnergyConsumptions << std::endl
    << "Annual Energy Consumptions : " << OVen_Object.OVen_CECD_Object.CECD_Annual_Energy_Consumption << std::endl
    << "Grill Power Consumptions : " << OVen_Object.OVen_Grill_Power_Consumptions << std::endl
    << "Power Output : " << OVen_Object.OVen_PowerOutput << std::endl
    << "Microwave Power Level : " << OVen_Object.OVen_CECD_Object.CECD_PowerConumptions << std::endl
    << "Voltage : " << OVen_Object.OVen_CECD_Object.CECD_Voltage << std::endl
    << "Volume Capacity Name : "  << OVen_Object.OVen_VolumeCapacity_Name << std::endl
    << "Wattage : " << OVen_Object.OVen_CECD_Object.CECD_Wattage << std::endl << std::endl
    << "Door Orientation : " << OVen_Object.OVen_DoorOrientation << std::endl
    << "Number of Power Levels : " << OVen_Object.OVen_Number_OF_PowerLevels << std::endl
    
    
    << "Finish Type : " << OVen_Object.OVen_CECD_Object.CECD_FinishType << std::endl
    << "Door Material Type : " << OVen_Object.OVen_Door_MaterialType << std::endl
    << "Power Source : " << OVen_Object.OVen_CECD_Object.CECD_PowerSource << std::endl
    << "Temperature Range : " << OVen_Object.OVen_TemperatureRange << std::endl
    << "Burner Type : " << OVen_Object.OVen_BurnerType << std::endl
    << "Batteries Included : " << OVen_Object.OVen_CECD_Object.CECD_BatteriesIncluded << std::endl
    << "Batteries Required : " << OVen_Object.OVen_CECD_Object.CECD_BatteriesRequired << std::endl << std::endl 
    
    << "Heating Method : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_HeatingMethod);
    os << std::endl

    << "Cooking Method : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_CookingMethod);
    os << std::endl

    << "Lock Type : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_LockType);
    os << std::endl

    << "Number of Programmes : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_Name_OF_Programmes);
    os << std::endl

    << "Door Style : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_DoorStyle);
    os << std::endl

    << "Special Features : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_SpecialFeatures);
    os << std::endl

    << "Additional Features : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_AdditionalFeatures);
    os << std::endl

    << "Recommended Uses For Product : ";
    OVen_Object.printing_vector_string(OVen_Object.OVen_Recommended_Uses_FOR_Product);
    os << std::endl

    << "Additional Information  : " << std::endl << std::endl
    << OVen_Object.OVen_Additional_Info << std::endl; 

    return os;
}