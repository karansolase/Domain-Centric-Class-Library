// Washing_machine_interface Side

#pragma once 

#ifndef _WM_HPP
#define _WM_HPP

#include <vector>
#include <iostream>
#include "variants.hpp"
#include "Measurement_and_unit.hpp"
#include "Common_Electronic_Commodities_Details.hpp"
#include "Additional_Info.hpp"

class WasHinG_MacHinE{

  friend std::ostream& operator<<(std::ostream& os, const WasHinG_MacHinE& wm_object);

    private :
      std::string WM_ProductName;
      std::string WM_BrandName;
      
      std::vector <Variants> WM_VariantsObject; 

      Common_Electronic_Commodities_Details WM_CECD_Object;

      Measurement_and_unit WM_Annual_Energy_Consumption_Per_Complete_Standard_Program; 
      Measurement_and_unit WM_WaterConsumptions; 
      unsigned int WM_Number_OF_WashPrograms;  
      std::string WM_BodyType; 
      std::string WM_AccessLocation; 
      std::string WM_OperationMode;
      Measurement_and_unit WM_Maximum_Rotational_Speed;
      Measurement_and_unit WM_ItemDepth;
      unsigned int WM_StandardCycles;
      // std::string WM_Human_Interface_Input;
      unsigned int WM_Number_OF_Programmes;
      std::string WM_DisplayType;
      std::string WM_Washer_Dispenser_Options;
      std::string WM_LaundryAppliance_DrumMaterial;
      Measurement_and_unit WM_Energy_Efficiency;
      std::string WM_PartNumber;
      unsigned int WM_Number_OF_OptionCycles;
      std::string WM_FuelType;
      unsigned int WM_Number_OF_Vents; 
      std::string WM_Door_Orientation; 
      std::string WM_Certification;

      std::vector <std::string> WM_Motor;
      std::vector <std::string> WM_WashPrograms; 
      std::vector <std::string> WM_DrumType; 
      std::vector <std::string> WM_Pulsator; 
      std::vector <std::string> WM_DrumMaterial; 
      std::vector <std::string> WM_CycleOptions;

      std::vector <std::string> WM_SpecialFeatures;
      std::vector <std::string> WM_KeyFeatures; 
      std::vector <std::string> WM_AdditionalFeatures; 
      std::vector <std::string> WM_recommended_Uses_FOR_Product;
      
    // Additional Information
      Additional_Info WM_Additional_Info;

   void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    // Default constructor
    WasHinG_MacHinE(
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
    
    );
};

#endif /* _WM_HPP */