// Facewash Interface Side

#pragma once 

#ifndef _FCWSH_HPP
#define _FCWSH_HPP

#include <iostream>
#include <vector>
#include "Additional_Info.hpp"
#include "variants.hpp"
#include "General_Cosmetics_Details.hpp"

class FaceWash : private General_Cosmetics_Details{

  friend std::ostream& operator<<(std::ostream& os, const FaceWash& FW_Object);

    private :
    // General Information :
    std::string FW_ProductName;
    std::string FW_BrandName;

    std::vector <Variants> FW_VariantsObject;
    
    std::string FW_PackageType;
    std::string FW_ContainerType;

    // Measurements :
    unsigned int FW_Number_OF_Items;
    unsigned int FW_Item_Package_Quantity;
    Measurement_and_unit FW_Net_Content_Volume;
    Measurement_and_unit FW_Net_Content_Weight;
    Measurement_and_unit FW_UnitCount;

    std::vector <std::string> FW_AdditionalPoints; 
    std::vector <std::string> FW_SafetyInformation;
    std::vector <std::string> FW_Directions;
    std::vector <std::string> FW_LegalDisclaimer;

    // Additional Information :
    std::string FW_is_discontinued_by_manufacturer;
    Additional_Info FW_add_info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    FaceWash(
    std::string _Product_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    std::string _package_type,
    std::string _container_type,

    std::initializer_list <std::string> _scent_names,
    std::initializer_list <std::string> _hair_type,
    std::initializer_list <std::string> _skin_type,
    std::initializer_list <std::string> _target_gender,
    std::initializer_list <std::string> _age_range_description,
    std::initializer_list <std::string> _material_type_free,
    std::initializer_list <std::string> _material_feature,
    std::string _item_form,

    double item_volume_value,
    std::initializer_list <std::string> item_volume_unit_string,
    
    std::string _colour,
    std::string _finish_type,
    std::string _coverage,
    
    std::initializer_list <std::string> _product_description,
    std::initializer_list <std::string> _recommended_or_specific_uses_for_product,
    std::initializer_list <std::string> _product_benefits,
    std::initializer_list <std::string> _product_features,
    std::initializer_list <std::string> _special_ingredients,
    std::initializer_list <std::string> _active_ingredients,
    std::initializer_list <std::string> _composition_or_ingredients,

    // Measurements :
    unsigned int _number_of_items,
    unsigned int _item_package_quantity,

    double net_content_volume_value,
    std::initializer_list <std::string> net_content_volume_unit_string,
    
    double net_content_weight_value,
    std::initializer_list <std::string> net_content_weight_unit_string,
    
    double unit_count_value,
    std::initializer_list <std::string> unit_count_unit_string,

    std::initializer_list <std::string> _Additional_points,
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _Directions,
    std::initializer_list <std::string> _legal_disclaimer,

    std::string _is_discontinued_by_manufacturer,
    
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