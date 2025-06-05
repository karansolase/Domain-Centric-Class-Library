#pragma once 

#ifndef _HELMET_HPP
#define _HELMET_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Variants.hpp"
#include "size_guide.hpp"
#include "Measurement_and_unit.hpp"

class Helmet{

    friend std::ostream& operator<<(std::ostream& os, const Helmet& Hlmt_Object);

    private :
    std::string Hlmt_Product_Name; 
    std::string Hlmt_Brand_Name;  

    std::vector <Variants> Hlmt_Variants_Object;

    std::string Hlmt_Size_Chart_Name;
    std::vector <size_guide> Hlmt_Size_Guide_Object; 

    std::string Hlmt_Vehicle_Service_Type;  
    std::string Hlmt_Age_Range;  
    std::string Hlmt_Certificate_Type;  	
    std::string Hlmt_Finish_Type;  
    std::string Hlmt_League;  
    std::string Hlmt_Exterior;  
    std::string Hlmt_Safety_Ratings;  
    std::string Hlmt_Shell_Type;  
    Measurement_and_unit Hlmt_Specification_met;  
    std::string Hlmt_Closure_Type;  
    std::string Hlmt_Batteries_Included;  
    std::string Hlmt_Department;  
    std::string Hlmt_Sport;  
    std::string Hlmt_Model_Name;  	
    Measurement_and_unit Hlmt_Package_Dimensions;
    std::string Hlmt_Manufacturer_part_number;  
    std::string Hlmt_Stain_Resistant;  
    std::string Hlmt_Assembly_Required;  
    unsigned long long int Hlmt_UPC;  

    unsigned int Hlmt_Number_of_items; 

    std::vector <std::string> Hlmt_Material;  
    std::vector <std::string> Hlmt_Shape;  
    std::vector <std::string> Hlmt_Outer_Material;  
    std::vector <std::string> Hlmt_Inner_Material;  
    std::vector <std::string> Hlmt_Compatible_Vehicles;  

    std::vector <std::string> Hlmt_Special_Feature;	
    std::vector <std::string> Hlmt_Recommended_Uses_For_Product;  
    std::vector <std::string> Hlmt_About_this_item;  
    std::vector <std::string> Hlmt_From_the_manufacturer;  
    std::vector <std::string> Hlmt_Regulatory_Information;  
    std::vector <std::string> Hlmt_Product_description;  
    std::vector <std::string> Hlmt_Legal_Disclaimer;  

    Additional_Info Hlmt_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Helmet(
    std::string _product_name,
    std::string _brand_name, 

    std::vector <Variants> _variants_object,

    std::string _size_chart_name,
    std::initializer_list <size_guide> _size_guide_object,

    std::string _vehicle_service_type, 
    std::string _Age_Range, 
    std::string _certificate_type,
    std::string _finish_type, 
    std::string _league, 
    std::string _exterior, 
    std::string _Safety_ratings, 
    std::string _shell_type,
    Measurement_and_unit _Specification_met, 
    std::string _Closure_Type, 
    std::string _Batteries_Included, 
    std::string _Department, 
    std::string _sport, 
    std::string _model_name, 

    double Package_Dimensions_first_value, 
    double Package_Dimensions_second_value, 
    double Package_Dimensions_third_value, 
    std::string Package_Dimensions_unit, 
    std::string Package_Dimensions_format,
    
    std::string _manufacturer_part_number, 
    std::string _Stain_Resistant, 
    std::string _Assembly_Required, 
    unsigned long long int _UPC, 

    unsigned int _Number_of_items, 

    std::vector <std::string> _material, 
    std::vector <std::string> _Shape, 
    std::vector <std::string> _Outer_Material, 
    std::vector <std::string> _Inner_Material, 
    std::vector <std::string> _compatible_vehicles, 

    std::vector <std::string> _Special_Feature,
    std::vector <std::string> _Recommended_Uses_For_Product, 
    std::vector <std::string> _About_this_item, 
    std::vector <std::string> _From_the_manufacturer, 
    std::vector <std::string> _Regulatory_Information, 
    std::vector <std::string> _Product_description, 
    std::vector <std::string> _Legal_Disclaimer,

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

#endif  /* helmet.hpp */