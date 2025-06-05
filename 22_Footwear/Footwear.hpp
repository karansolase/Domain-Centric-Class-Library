#pragma once 

#ifndef _FOOTWEAR_HPP
#define _FOOTWEAR_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Variants.hpp"
#include "size_guide.hpp"
#include <vector>

class Footwear{

    friend std::ostream& operator<<(std::ostream& os, const Footwear& fOOtwr_object);

    private :
    std::string fOOtwr_ProductName;
    std::string fOOtwr_BrandName;

    std::vector <Variants> fOOtwr_VariantsObject;

    std::string fOOtwr_ClosureType; 
    std::string fOOtwr_HeelType; 
    std::string fOOtwr_ShaftHeight;
    std::string fOOtwr_ToeStyle; 
    std::string fOOtwr_WaterResistanceLevel;
    std::string fOOtwr_Department; 
    std::string fOOtwr_MaterialType; 
    std::string fOOtwr_Language; 
    std::string fOOtwr_AgeRange; 
    std::string fOOtwr_Sport; 
    unsigned int fOOtwr_NumberOFItems; 
    std::string fOOtwr_StrapType; 
    std::string fOOtwr_Seasons; 

    std::vector <std::string> fOOtwr_SoleMaterial; 
    std::vector <std::string> fOOtwr_OuterMaterial; 

    std::string fOOtwr_SizeChartName; 
    std::vector <size_guide> fOOtwr_size_guide_object; 

    std::vector <std::string> fOOtwr_Usage; 
    std::vector <std::string> fOOtwr_About_This_Item;
    std::vector <std::string> fOOtwr_Features; 
    std::vector <std::string> fOOtwr_ProductDescription; 
    std::vector <std::string> fOOtwr_CareInstructions;  
    std::vector <std::string> fOOtwr_FromManufacturer; 

    std::string fOOtwr_Is_Discontinued_By_Manufacturer; 
    Measurement_and_unit fOOtwr_PackageDimensions; 
    Additional_Info fOOtwr_Additional_Info; 

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Footwear(
    std::string _Product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _Variants_object,

    std::string _closure_type,
    std::string _Heel_type, 
    std::string _shaft_height, 
    std::string _Toe_Style, 
    std::string _water_resistance_level, 
    std::string _Department, 
    std::string _Material_type, 
    std::string _language, 
    std::string _Age_range, 
    std::string _sport, 
    unsigned int _number_of_items, 
    std::string _strap_type, 
    std::string _Seasons, 

    std::initializer_list <std::string> _sole_material, 
    std::initializer_list <std::string> _Outer_material, 
    std::initializer_list <std::string> _Usage, 
    
    std::string _size_chart_name, 
    std::initializer_list <size_guide> _size_guide_object,

    std::initializer_list <std::string> _about_this_item,
    std::initializer_list <std::string> _features, 
    std::initializer_list <std::string> _product_description,  
    std::initializer_list <std::string> _Care_instructions, 
    std::initializer_list <std::string> _From_manufacturer,  

    std::string _Is_Discontinued_By_Manufacturer, 

    double Package_Dimensions_1, 
    double Package_Dimensions_2, 
    double Package_Dimensions_3, 
    std::string Package_Dimensions_unit, 
    std::string Package_Dimensions_format, 

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

#endif /* Footwear.hpp */




