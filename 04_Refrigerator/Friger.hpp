//FRIGER INTERFACE SIDE

#pragma once 

#ifndef _FRIGER_HPP
#define _FRIGER_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Measurement_and_unit.hpp"
#include "variants.hpp"
#include "word_number.hpp"
#include "Common_Electronic_Commodities_Details.hpp"

class Friger{

   friend std::ostream& operator<<(std::ostream& os, const Friger& Friz_object);

    private :
      std::string Friz_ProductName;
      std::string Friz_BrandName;

      std::vector <Variants> Friz_VariantsObject; 

      Common_Electronic_Commodities_Details Friz_CECD_Object;

      Measurement_and_unit Friz_FreezerCapacity;
      Measurement_and_unit Friz_Fresh_Food_Capacity;
      unsigned int Friz_Number_OF_Shelves; 
      unsigned int Friz_Number_OF_Doors; 
      unsigned int Friz_Total_NO_Of_Compartments; 
      unsigned int Friz_VegetableDrawers; 
      unsigned int Friz_Number_OF_Drawers;
      unsigned int Friz_BottleCount;
      Measurement_and_unit Friz_Vegetable_Tray_Capacity;
      Measurement_and_unit Friz_BottleStorage; 
      Measurement_and_unit Friz_Stabilizer_Free_Operation; 
      std::string Friz_ShelfType;
      std::string Friz_LockType;
      std::vector <std::string> Friz_Interior_OR_StorageDescription;

      std::string Friz_Config;
      std::string Friz_CoolingType;
      std::string Friz_Inverter;

      std::vector <std::string> Friz_Special_features;
      std::vector <std::string> Friz_Brand_SpecificFeatures; 
      std::vector <std::string> Friz_ProductInfo; 

      Measurement_and_unit Friz_EnergyEfficiency;
      Measurement_and_unit Friz_EnergyStar;

      std::string Friz_Defrost_System;
      std::string Friz_Refrigent;
      std::string Friz_Door_Material_Type;
      unsigned int Friz_Number_OF_Users; 
      unsigned int Friz_Number_OF_Racks; 
      std::string Friz_Ice_Maker_Dispensed_Type; 
      std::string Friz_Specification_Met;
      std::string Friz_CoolingMethod;
      std::string Friz_Door_Orientation;
      std::string Friz_Certification;
      std::string Friz_Adjustable_Temperature_Control;
      std::string Friz_Power_Plug_Type;

    // Additional information
      Additional_Info Friz_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

      Friger(
      std::string _product_name,
      std::string _brand_name,

      std::vector <Variants> _variants_object,

      double capacity_value,
      std::initializer_list <std::string> capacity_unit_string,

      double freezer_capacity_value,
      std::initializer_list <std::string> freezer_capacity_unit_string,

      double fresh_food_capacity_value,
      std::initializer_list <std::string> fresh_food_capacity_unit_string,

      unsigned int _number_of_shelves,
      unsigned int _number_of_Doors,
      unsigned int _total_no_of_compartments,
      unsigned int _Vegetable_drawers,
      unsigned int _number_of_drawers,
      unsigned int _bottle_count,

      double Vegetable_tray_capacity_value,
      std::initializer_list <std::string> Vegetable_tray_capacity_unit_string,

      double bottle_storage_value,
      std::initializer_list <std::string> bottle_storage_unit_string,

      Measurement_and_unit _Stabilizer_free_operation,

      std::string _shelf_type,
      std::string _lock_type,
      std::initializer_list <std::string> _Interior_or_storage_description,

      std::string _config,
      std::string _cooling_type,
      std::string _finish,
      std::string _inverter,
      std::initializer_list <std::string> _material,

      std::initializer_list <std::string> _special_features,
      std::initializer_list <std::string> _brand_specific_features,
      std::initializer_list <std::string> _product_info,

      double energy_efficiency_value,
      std::initializer_list <std::string> energy_efficiency_unit_string, 

      double energy_star_value,
      std::initializer_list <std::string> energy_star_unit_string,

      double annual_energy_consumption_value,
      std::initializer_list <std::string> annual_energy_consumption_unit_string,

      std::string _defrost_system,

      double noise_level_value,
      std::initializer_list <std::string> noise_level_unit_string,

      std::string _installation_type,

      double voltage_value,
      std::initializer_list <std::string> voltage_unit_string,

      std::string _refrigent,
      std::string _door_material_type,
      unsigned int _number_of_users,
      unsigned int _number_of_racks,
      std::string _Form_factor,
      std::string _Ice_maker_dispensed_type,
      std::string _specification_met,
      std::string _cooling_method,
      std::string _door_orientation,
      std::string _certification,
      std::string _Adjustable_temperature_control,
      std::string _Power_plug_type,
      std::string _Batteries_included,
      std::string _Batterires_required,

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

#endif /* _FRIGER_HPP */
