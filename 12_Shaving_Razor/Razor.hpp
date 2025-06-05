#pragma once 

#ifndef _RAZOR_HPP
#define _RAZOR_HPP

#include <iostream>
#include <vector>
#include "Variants.hpp"
#include "Additional_Info.hpp"

class ShavingRazor{
    friend std::ostream& operator<<(std::ostream& os, const ShavingRazor& ShavingRazor_Object);

    private :
    std::string RZR_ProductName;
    std::string RZR_BrandName;
    unsigned int RZR_Number_OF_Blades;
    unsigned int RZR_Number_OF_Items; 

    std::vector <Variants> RZR_VariantsObject;
    
    std::vector <std::string> RZR_SkinType;
    std::vector <std::string> RZR_HairType; 
    std::string RZR_Age_Range_Description; 
    std::vector <std::string> RZR_HandleMaterial; 

    std::vector <std::string> RZR_AdditionalPoints; 
    std::vector <std::string> RZR_Recommended_Uses_OF_Product; 
    std::vector <std::string> RZR_SpecialFeatures;
    std::vector <std::string> RZR_SafetyInformation;
    std::vector <std::string> RZR_Ingredients;

    // Additional Information :
    Additional_Info RZR_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    ShavingRazor(
        std::string _product_name,
        std::string  _brand_name,
        unsigned int _number_of_blades,
        unsigned int _number_of_items,

        std::initializer_list <Variants> _variants_object,
        
        std::initializer_list <std::string> _skin_type,
        std::initializer_list <std::string> _Hair_type,
        std::string _Age_range_description,
        std::initializer_list <std::string> _Handle_material,

        std::initializer_list <std::string> _Additional_points,
        std::initializer_list <std::string> _Recommended_uses_of_product, 
        std::initializer_list <std::string> _special_feature,
        std::initializer_list <std::string> _Safety_information,
        std::initializer_list <std::string> _Ingredients,

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