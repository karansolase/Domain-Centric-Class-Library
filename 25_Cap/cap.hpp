#ifndef _CAP_HPP
#define _CAP_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Variants.hpp"
#include "size_guide.hpp"
#include <vector>

class Cap{

    friend std::ostream& operator<<(std::ostream& os, const Cap& Cap_Object);

    private :
    std::string Cap_Name;
    std::string Cap_Brand_Name;

    std::vector <Variants> Cap_Variants_Object; 

    std::string Cap_size_chart_name;
    size_guide Cap_size_guide_object; 

    std::string Cap_Material_Type; 
    std::string Cap_Outer_Material; 
    std::string Cap_Department; 
    std::string Cap_Age_Range_Description; 
    std::string Cap_Fit_Type; 
    Measurement_and_unit Cap_Circumference; 
    Measurement_and_unit Cap_Diameter; 

    std::vector <std::string> Cap_Ocassion_type;  
    std::vector <std::string> Cap_Season; 
    std::vector <std::string> Cap_Sports; 
    std::vector <std::string> Cap_Closure_type; 

    std::vector <std::string> Cap_Product_Description; 
    std::vector <std::string> Cap_Material;  
    std::vector <std::string> Cap_Features; 
    std::vector <std::string> Cap_Suitable_for_or_recommended_uses; 
    std::vector <std::string> Cap_Care_instructions; 
    std::vector <std::string> Cap_About_this_item; 

    std::string Cap_Is_Discontinued_by_manufacturer; 
    Additional_Info Cap_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Cap(
    std::string _cap_name,
    std::string _brand_name,

    std::initializer_list <Variants> _variants_object, 

    std::string _size_chart_name,
    size_guide _size_guide_object,  

    std::string _material_type, 
    std::string _outer_material, 
    std::string _Department, 
    std::string _Age_range_description, 
    std::string _Fit_type, 
    Measurement_and_unit _cap_circumference, 
    Measurement_and_unit _Diameter, 
 
    std::initializer_list <std::string> _Ocassion_type, 
    std::initializer_list <std::string> _Season,
    std::initializer_list <std::string> _Sports, 
    std::initializer_list <std::string> _Closure_type, 

    std::initializer_list <std::string> _product_description, 
    std::initializer_list <std::string> _Material,
    std::initializer_list <std::string> _features, 
    std::initializer_list <std::string> _Suitable_for_or_recommended_uses, 
    std::initializer_list <std::string> _Care_instructions, 
    std::initializer_list <std::string> _About_this_item, 

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

#endif /* Cap.hpp */