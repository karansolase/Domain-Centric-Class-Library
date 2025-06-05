#pragma once

#ifndef _SHAVING_CREAM_HPP
#define _SHAVING_CREAM_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "General_Cosmetics_Details.hpp"
#include "variants.hpp"
#include <vector>

class ShavingCream : private General_Cosmetics_Details
    {

    friend std::ostream& operator<<(std::ostream& os, const ShavingCream& SC_Object);

    private :
    std::string SC_ProductName;
    std::string SC_BrandName;

    std::vector <Variants> SC_VariantsObject;
    
    unsigned int SC_Number_OF_Items; 
    unsigned int SC_UPC; 
    std::string SC_Global_Trade_Identification_Number; 

    std::vector <std::string> SC_Additional_Points; 
    std::vector <std::string> SC_How_TO_Use; 
    std::vector <std::string> SC_SafetyInformation;
    std::vector <std::string> SC_Directions;

    // Additional Information :
    Additional_Info SC_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_objet) const;
    
    public :
    ShavingCream(
        std::string _product_name,
        std::string _brand,

        std::initializer_list <Variants> _variants_object,

        unsigned int _number_of_items,
        unsigned int _UPC,
        std::string _Global_trade_Identification_number, 

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

        std::initializer_list <std::string> _Additional_points,
        std::initializer_list <std::string> _How_to_use, 
        std::initializer_list <std::string> _safety_information,
        std::initializer_list <std::string> _Directions,

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