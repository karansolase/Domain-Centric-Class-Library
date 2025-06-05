#pragma once 

#ifndef _PANTS_HPP
#define _PANTS_HPP

#include <iostream>
#include "General_Clothes_Details.hpp"
#include "Additional_Info.hpp"
#include "Variants.hpp"
#include "size_guide.hpp"

class BoTTom{
    friend std::ostream& operator<<(std::ostream& os, const BoTTom& BoTTom_Object);

    private :
    std::string BoTTomName;

    std::vector <Variants> BoTTom_VariantsObject;

    std::string BoTTom_BrandName;
    General_Clothes_Details BottomDetails;

    std::string BoTTom_SIZEChart_Name;
    std::vector <size_guide> BoTTom_SIZEGuide_Object;

    std::vector <std::string> BoTTom_SafetyInformation;
    std::vector <std::string> BoTTom_LegalDisclaimer;

    // Additional Information :
    Additional_Info BoTTom_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    
    BoTTom(
    std::string _Bottom_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    std::string _material_type_or_composition,
    std::string _style_design_name,
    std::string _pattern,
    std::string _sleeve_type,
    std::string _collar_style,
    std::string _neck_style,
    std::string _length,
    std::string _closure_type, 
    std::string _occasion_type, 
    std::string _fit_type,
    std::string _age_range_description,

    std::initializer_list <std::string> _care_instructions, 
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _description,

    std::string _size_chart_name,
    std::initializer_list <size_guide> _size_guide_object,
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _Legal_Disclaimer,

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