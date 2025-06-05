#include <iostream>
#include "WasHinG_MacHinE.hpp"

WasHinG_MacHinE::WasHinG_MacHinE(
    std::string _product_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    double capacity_value,
    std::initializer_list <std::string> capacity_unit_string,

    double Annual_energy_consumption_value,
    std::initializer_list <std::string> Annual_energy_consumption_unit_string,

    double Annual_energy_consumption_per_complete_standard_program_value,
    std::initializer_list <std::string>
    Annual_energy_consumption_per_complete_standard_program_unit_string,

    double Water_consumptions_value,
    std::initializer_list <std::string> Water_consumptions_unit_string,

    unsigned int _number_of_wash_programs,
    std::string _body_type,  
    std::string _access_location,
    std::string _finish_type,
    std::initializer_list <std::string> _material,
    std::string _controls_type_or_console,
    std::string _controls_type,
    std::string _operation_mode,

    double maximum_rotational_speed_value,
    std::initializer_list <std::string> speed_unit_string,

    double Noise_level_value,
    std::initializer_list <std::string> Noise_level_unit_string, 

    Measurement_and_unit _item_depth,

    double voltage_value,
    std::initializer_list  <std::string> voltage_unit_string,

    unsigned int _standard_cycles,
    std::string _human_interface_input,
    unsigned int _number_of_programmes,
    std::string _display_type,
    std::string _installation_type,
    std::string _Washer_dispenser_options,
    std::string _laundry_appliance_drum_material,

    double energy_efficiency_value,
    std::initializer_list <std::string> energy_efficiency_unit_string,

    std::string _part_number,
    std::string _form_factor,
    unsigned int _number_of_option_cycles,

    double wattage_value,
    std::initializer_list <std::string> wattage_unit_string,
    
    std::string _connector_type,
    std::string _fuel_type,
    unsigned int _number_of_vents,
    std::string _Door_orientation,
    std::string _certification,
    std::string _batteries_included,
    std::string _batteries_required,

    std::initializer_list <std::string> _Motor,
    std::initializer_list <std::string> _wash_programs, 
    std::initializer_list <std::string> _drum_type,  
    std::initializer_list <std::string> _pulsator,  
    std::initializer_list <std::string> _drum_material,  
    std::initializer_list <std::string> _cycle_options,
    
    std::initializer_list <std::string> _special_features,
    std::initializer_list <std::string> _key_features,
    std::initializer_list <std::string> _Additional_features,
    std::initializer_list <std::string> _recommended_uses_for_product,

    // Additional Information
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
:   
    WM_ProductName(_product_name),
    WM_BrandName(_brand),

    WM_VariantsObject(_variants_object),

    WM_Annual_Energy_Consumption_Per_Complete_Standard_Program
    (
        Annual_energy_consumption_per_complete_standard_program_value,
        Annual_energy_consumption_per_complete_standard_program_unit_string
    ),

    WM_WaterConsumptions(
        Water_consumptions_value,
        Water_consumptions_unit_string),

    WM_Number_OF_WashPrograms(_number_of_wash_programs),
    WM_BodyType(_body_type),
    WM_AccessLocation(_access_location),
    WM_OperationMode(_operation_mode),
    
    WM_Maximum_Rotational_Speed(
        maximum_rotational_speed_value,
        speed_unit_string
    ),
    
    WM_ItemDepth(_item_depth),
    WM_StandardCycles(_standard_cycles),
    WM_Number_OF_Programmes(_number_of_programmes),
    WM_DisplayType(_display_type),
    WM_Washer_Dispenser_Options(_Washer_dispenser_options),
    WM_LaundryAppliance_DrumMaterial(_laundry_appliance_drum_material),
    
    WM_Energy_Efficiency(
        energy_efficiency_value,
        energy_efficiency_unit_string
    ),
    
    WM_PartNumber(_part_number),
    WM_Number_OF_OptionCycles(_number_of_option_cycles),
    WM_FuelType(_fuel_type),
    WM_Number_OF_Vents(_number_of_vents),
    WM_Door_Orientation(_Door_orientation),
    WM_Certification(_certification),

    WM_CECD_Object(
        _controls_type_or_console,
        _batteries_included,
        _batteries_required,
        _finish_type,
        _connector_type,
        "",
        "",
        _installation_type,
        _form_factor,
        "",
        "",
        _human_interface_input,
        {""},
        {""},
        {""},

        0,{""},

        Noise_level_value,
        Noise_level_unit_string,

        capacity_value,
        capacity_unit_string,

        0,{""},
        0,{""},
        0,{""},
        {""},
        0,{""},
        0,{""},

        Annual_energy_consumption_value,
        Annual_energy_consumption_unit_string,

        voltage_value, voltage_unit_string,
        wattage_value, wattage_unit_string,

        {""},
        {""},
        {""},
        {""},
        {""},
        _material
    ),

    WM_Motor(_Motor),
    WM_WashPrograms(_wash_programs),
    WM_DrumType(_drum_type),
    WM_Pulsator(_pulsator),
    WM_DrumMaterial(_drum_material),
    WM_CycleOptions(_cycle_options),

    WM_SpecialFeatures(_special_features),
    WM_KeyFeatures(_key_features),
    WM_AdditionalFeatures(_Additional_features),
    WM_recommended_Uses_FOR_Product(_recommended_uses_for_product),

    // Additional Information
    WM_Additional_Info(
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

void WasHinG_MacHinE::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const WasHinG_MacHinE& wm_object){
    os << "WASHING MACHINE DETAILS  :" << std::endl << std::endl

    << "Product Name : " << wm_object.WM_ProductName << std::endl
    << "Brand : " << wm_object.WM_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter = 
    wm_object.WM_VariantsObject.begin();

    while(Iter != wm_object.WM_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }

    os
    << "Capacity : " << wm_object.WM_CECD_Object.CECD_Capacity << std::endl
    << "Annual Energy Consumption : " << wm_object.WM_CECD_Object.CECD_Annual_Energy_Consumption << std::endl
    << "Annual Energy Comsumption per Complete Standard Program : "
    << wm_object.WM_Annual_Energy_Consumption_Per_Complete_Standard_Program << std::endl
    << "Water Consumptions : " << wm_object.WM_WaterConsumptions << std::endl
    

    << "Number of Wash Programs : " << wm_object.WM_Number_OF_WashPrograms << std::endl

    << "Body Type : " << wm_object.WM_BodyType << std::endl

 
    << "Access Location : " << wm_object.WM_AccessLocation << std::endl
    << "Finish Type : " << wm_object.WM_CECD_Object.CECD_FinishType << std::endl << std::endl

    << "Material : ";
    wm_object.printing_vector_string(wm_object.WM_CECD_Object.CECD_Material);
    os  << std::endl

    << "Control Type : " << wm_object.WM_CECD_Object.CECD_Control_Type_OR_Console << std::endl
    << "Operation Mode : " << wm_object.WM_OperationMode << std::endl
    << "Maximum Rotational Speed : " << wm_object.WM_Maximum_Rotational_Speed << std::endl
    << "Noise Level : " << wm_object.WM_CECD_Object.CECD_NoiseLevel << std::endl
    << "Item Depth : " << wm_object.WM_ItemDepth << std::endl
    << "Voltage : " << wm_object.WM_CECD_Object.CECD_Voltage << std::endl
    << "Satndard Cycle : " << wm_object.WM_StandardCycles << std::endl
    << "Human Interface Input : " << wm_object.WM_CECD_Object.CECD_Human_Interface_Input << std::endl
    << "Number of Programmes : " << wm_object.WM_Number_OF_Programmes << std::endl
    << "Display Type   : " << wm_object.WM_DisplayType << std::endl
    << "Installation Type : " << wm_object.WM_CECD_Object.CECD_InstallationType << std::endl
    << "Washer Dispenser options : " << wm_object.WM_Washer_Dispenser_Options << std::endl
    << "Laundry Appliance Drum Materials : " << wm_object.WM_LaundryAppliance_DrumMaterial << std::endl
    << "Energy Efficiency : " << wm_object.WM_Energy_Efficiency  << std::endl
    << "Part Number : " << wm_object.WM_PartNumber << std::endl
    << "Form Factor : " << wm_object.WM_CECD_Object.CECD_Form_Factor << std::endl
    << "Number of Option Cycles : " << wm_object.WM_Number_OF_OptionCycles << std::endl
    << "Wattage : " << wm_object.WM_CECD_Object.CECD_Wattage << std::endl
    << "Connector Type : " << wm_object.WM_CECD_Object.CECD_ConnectorType << std::endl
    << "Fuel Type : " << wm_object.WM_FuelType << std::endl
    << "Number of Vents : " << wm_object.WM_Number_OF_Vents << std::endl
    << "Door Orientation : " << wm_object.WM_Door_Orientation << std::endl
    << "Certification : " << wm_object.WM_Certification << std::endl
    << "Batteries Included : " << wm_object.WM_CECD_Object.CECD_BatteriesIncluded << std::endl
    << "Batteries Required : " << wm_object.WM_CECD_Object.CECD_BatteriesRequired << std::endl << std::endl 

    << "Motor : ";
    wm_object.printing_vector_string(wm_object.WM_Motor);
    os << std::endl

    << "Wash Programs : ";
    wm_object.printing_vector_string(wm_object.WM_WashPrograms);
    os << std::endl

    << "Drum Type : ";
    wm_object.printing_vector_string(wm_object.WM_DrumType);
    os << std::endl

    << "Pulsator : ";
    wm_object.printing_vector_string(wm_object.WM_Pulsator);
    os << std::endl
    
    << "Drum Material : ";
    wm_object.printing_vector_string(wm_object.WM_DrumMaterial);
    os << std::endl

    << "Cycle Options : ";
    wm_object.printing_vector_string(wm_object.WM_CycleOptions);
    os << std::endl

    << "Special Features : ";
    wm_object.printing_vector_string(wm_object.WM_SpecialFeatures);
    os << std::endl

    << "Key Features : ";
    wm_object.printing_vector_string(wm_object.WM_KeyFeatures);
    os << std::endl

    << "Additional Features : ";
    wm_object.printing_vector_string(wm_object.WM_AdditionalFeatures);
    os << std::endl
    
    << "Recommended Uses for product : ";
    wm_object.printing_vector_string(wm_object.WM_recommended_Uses_FOR_Product);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << wm_object.WM_Additional_Info << std::endl;

    return os;
}
