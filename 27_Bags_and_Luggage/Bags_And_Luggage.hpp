#pragma once 

#ifndef _BAGS_AND_LUGGAGE_HPP
#define _BAGS_AND_LUGGAGE_HPP

#include <iostream>
#include <vector>
#include "Additional_Info.hpp"
#include "variants.hpp"

class Bags_and_luggage{

    friend std::ostream& operator<<(std::ostream& os, const Bags_and_luggage& BL_Object);

    private :
    std::string BL_ProductName;
    std::string BL_BrandName;

    std::vector <Variants> BL_VariantsObject; 

    std::string BL_Department; 
    std::string BL_Age_Range_Description; 
    std::string BL_ResistantLevel; 
    std::string BL_LaptopSleeves; 
    std::string BL_ClosureType; 
    std::string BL_WheelType; 
    std::string BL_MaterialType; 
    std::string BL_LockType; 
    std::string BL_StrapType; 
    std::string BL_PocketDescription; 
    std::string BL_OuterMaterial; 
    Measurement_and_unit BL_Capacity; 

    unsigned int BL_Number_OF_Wheels; 
    unsigned int BL_Compartments; 
    unsigned int BL_Number_OF_Zippers; 
    unsigned int BL_Number_OF_Pockets; 

    std::vector <std::string> BL_Material; 

    std::vector <std::string> BL_Care_Instructions;
    std::vector <std::string> BL_About_This_Item;
    std::vector <std::string> BL_Features; 
    std::vector <std::string> BL_Product_Description; 
    std::vector <std::string> BL_Rom_Manufacturer; 

    std::string BL_Is_Discontinued_by_manufacturer; 
    Additional_Info BL_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const; 

    public :

    Bags_and_luggage(
    std::string _product_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object, 

    std::string _Department, 
    std::string _Age_range_description,  
    std::string _Resistant_level, 
    std::string _laptop_sleeves, 
    std::string _Closure_type, 
    std::string _Wheel_type, 
    std::string _Material_type, 
    std::string _Lock_type, 
    std::string _Strap_type, 
    std::string _Pocket_Description, 
    std::string _Outer_material, 

    double Capacity_value,
    std::initializer_list <std::string> Capacity_unit_and_string,  

    unsigned int _number_of_wheels, 
    unsigned int _Compartments,
    unsigned int _number_of_zippers, 
    unsigned int _number_of_pockets, 

    std::initializer_list <std::string> _Material,

    std::initializer_list <std::string> _care_instructions,
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Features, 
    std::initializer_list <std::string> _Product_description, 
    std::initializer_list <std::string> _From_manufacturer, 

    std::string _Is_Discontinued_by_manufacturer, 
    
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

#endif /* Bags_And_Luggage.hpp */