#pragma once 

#ifndef _DRY_FRUITS_HPP
#define _DRY_FRUITS_HPP

#include "General_groceries_details.hpp"
#include "Additional_Info.hpp"
#include "variants.hpp"

class Dry_Fruits : public General_Groceries_Details{

    friend std::ostream& operator<<(std::ostream& os, const Dry_Fruits& Drf_Object);

    private :
    std::string Drf_Product_Name;
    std::string Drf_Brand_Name;

    std::vector <Variants> Drf_Variants_Object;

    std::string Drf_Taste;
    std::string Drf_Cultivation_Method_Claim;
    std::string Drf_Temperature_Condition;

    std::vector <std::string> Drf_Awards;

    Additional_Info Drf_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Dry_Fruits(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _Variants_Object,

    Date _USE_by,
    
    std::initializer_list <std::string> _Speciality,
    std::initializer_list <std::string> _Variety,
    std::initializer_list <std::string> _Flavours,
    std::initializer_list <std::string> _Diet_type, 
    std::initializer_list <std::string> _Storage_Instructions, 
    std::initializer_list <std::string> _Cuisine,
    std::initializer_list <std::string> _Additives,
    std::initializer_list <std::string> _Ingredients_type,
    
    std::string _Item_form,
    std::string _Allergen_Info,
    std::string _Package_info,
    std::string _Region_Produced_in,
    std::string _Produce_sold_as, 
    std::string _Part_number,
        
    Measurement_and_unit _Certification,
    
    double Appropriate_Age_Range_description_value,
    std::initializer_list <std::string> Appropriate_Age_Range_description_unit_and_string, 
        
    double Package_Weight_value,
    std::initializer_list <std::string> Package_Weight_unit_and_string,
        
    double Serving_size_value,
    std::initializer_list <std::string> Serving_size_unit_and_string,
        
    double Energy_value,
    std::initializer_list <std::string> Energy_unit_and_string,
        
    double Protein_value,
    std::initializer_list <std::string> Protein_unit_and_string,
        
    double Fat_value,
    std::initializer_list <std::string> Fat_unit_and_string,
        
    double Carbohydrate_value,
    std::initializer_list <std::string> Carbohydrate_unit_and_string,
        
    double Sugar_value,
    std::initializer_list <std::string> Sugar_unit_and_string,
        
    double Item_volume_value,
    std::initializer_list <std::string> Item_volume_unit_and_string,
        
    std::initializer_list <Measurement_and_unit> _net_content_volume,
    
    std::initializer_list <Variant_Info> _Ingredients,
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Product_description,
    std::initializer_list <std::string> _Recommended_uses_for_product,
    std::initializer_list <std::string> _From_manufacturer,
    std::initializer_list <std::string> _From_brand,
    std::initializer_list <std::string> _Saftey_info,
    std::initializer_list <std::string> _Directions, 
    std::initializer_list <std::string> _Legal_Disclaimer,
    
    unsigned int _number_of_pieces, 
    unsigned int _number_of_items,
    long long unsigned int _Global_trade_identification_number, 
    long long unsigned int _UPC,

    std::string _Taste,
    std::string _Cultivation_method_claim, 
    std::string _temperature_condition,

    std::initializer_list <std::string> _Awards,

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

#endif /* Dry_Fruits.hpp */