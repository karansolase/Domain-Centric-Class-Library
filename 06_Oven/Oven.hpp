// Oven Interface Side :

#pragma once 

#ifndef _OVEN_HPP
#define _OVEN_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "variants.hpp"
#include "Common_Electronic_Commodities_Details.hpp"

class OVen{

   friend std::ostream& operator<<(std::ostream& os, const OVen& OVen_Object);

    private :
      std::string OVen_ProductName;
      std::string OVen_BrandName;
    
      std::vector <Variants> OVen_VariantsObject;

      Common_Electronic_Commodities_Details OVen_CECD_Object;
 
      std::string OVen_FuelType; 
      std::string OVen_DefrostSystem;
      Measurement_and_unit OVen_Frequency;
      std::string OVen_Timer_Function_Available; 

      std::string OVen_VentillationType; 

      Measurement_and_unit OVen_OuterBody_ItemDimensions; 
      Measurement_and_unit OVen_InnerCavity_ItemDimensions; 
      std::string OVen_InnerCavity; 
      std::string OVen_Inner_Cavity_Material; 
      Measurement_and_unit OVen_TurntableDiameter; 

      Measurement_and_unit OVen_EnergyConsumptions; 
      Measurement_and_unit OVen_Grill_Power_Consumptions; 
      Measurement_and_unit OVen_PowerOutput; 
      Measurement_and_unit OVen_VolumeCapacity_Name; 
      std::string OVen_DoorOrientation; 
      unsigned int OVen_Number_OF_PowerLevels; 
      std::string OVen_Door_MaterialType;
      Measurement_and_unit OVen_TemperatureRange;
      std::string OVen_BurnerType; 

      std::vector <std::string> OVen_HeatingMethod; 
      std::vector <std::string> OVen_CookingMethod; 
      std::vector <std::string> OVen_LockType; 
      std::vector <std::string> OVen_DoorStyle;
      std::vector <std::string> OVen_Name_OF_Programmes;

      std::vector <std::string> OVen_SpecialFeatures;
      std::vector <std::string> OVen_AdditionalFeatures; 
      std::vector <std::string> OVen_Recommended_Uses_FOR_Product; 

    // Additional Information :
      Additional_Info OVen_Additional_Info;

      void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    OVen(
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
   );

};

#endif