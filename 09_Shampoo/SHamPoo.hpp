// Shampoo interface Side :

#pragma once 

#ifndef _SHAMPOO_HPP
#define _SHAMPOO_HPP

#include <iostream>
#include <vector>
#include "variants.hpp"
#include "Additional_Info.hpp"
#include "general_cosmetics_details.hpp"

class SHamPoo : private General_Cosmetics_Details{

    friend std::ostream& operator<<(std::ostream& os, const SHamPoo& SHamPoo_Object);

    private :
    // product Details : 
    std::string SHamPoo_BrandName;
    std::string SHamPoo_ProductName;

    std::vector <Variants> SHamPoo_VariantObject;

    std::vector <std::string> SHamPoo_How_TO_Use;
    std::vector <std::string> SHamPoo_SafetyInformation;
    std::vector <std::string> SHamPoo_AdditionalPoints; 

    std::string SHamPoo_is_discontinued_by_manufacturer;
    Additional_Info SHamPoo_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    SHamPoo(
    std::string _brand_name,
    std::string _product_name,

    std::initializer_list <Variants> _variant_object,

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

    std::initializer_list <std::string> _how_to_use,
    std::initializer_list <std::string> _safety_information,
    std::initializer_list <std::string> _Additional_points,
    
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