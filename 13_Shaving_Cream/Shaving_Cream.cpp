#include "shaving_cream.hpp"

ShavingCream::ShavingCream(
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
)
:   SC_ProductName(_product_name),
    SC_BrandName(_brand),

    SC_VariantsObject(_variants_object),
    
    SC_Number_OF_Items(_number_of_items),
    SC_UPC(_UPC),
    SC_Global_Trade_Identification_Number(_Global_trade_Identification_number),
    
    General_Cosmetics_Details(
        _scent_names,
        _hair_type,
        _skin_type,
        _target_gender,
        _age_range_description,
        _material_type_free,
        _material_feature,
        _item_form,

        item_volume_value,
        item_volume_unit_string,
    
        _colour,
        _finish_type,
        _coverage,
    
        _product_description,
        _recommended_or_specific_uses_for_product,
        _product_benefits,
        _product_features,
        _special_ingredients,
        _active_ingredients,
        _composition_or_ingredients
    ),

    SC_Additional_Points(_Additional_points),
    SC_How_TO_Use(_How_to_use),
    SC_SafetyInformation(_safety_information),
    SC_Directions(_Directions),

    SC_Additional_Info(
            _ASIN,

            Manufacturing_Object,
            _Manufacturing_Year,
            
            _Warranty,
            
            _Country_Of_Origin,
            _Model_Number,

            _Ratings, _Reviews,

            _Best_Seller_Rank,
            
            _Date_First_Available, 
            
            Packer_Object,
            Importer_Object,
            
            _Included_Components,

            Item_dim_1,
            Item_dim_2,
            Item_dim_3,
            Item_Dimension_unit,
            Item_Dimension_format,

            Product_dim_1,
            Product_dim_2,
            Product_dim_3,
            Product_Dimension_unit,
            Product_Dimension_format,

            Weight_Size_value,
            Weight_size_unit_string,

            Net_Quantity_Value,
            Net_Quantit_unit_string,

            _Generic_name
    )
{

};

void ShavingCream::printing_vector_string(std::vector <std::string> string_vector_object) const{
      int j = 0;
      for(const std::string i : string_vector_object){
            j = j + 1;
            if(i == "" && j == 1){
                  std::cout << std::endl;
                  break;
            }
      std::cout << j << ") " << i << std::endl;
      }
} 

std::ostream& operator<<(std::ostream& os, const ShavingCream& SC_Object){
    os << "PRODUCT DETAILS : " << std::endl << std::endl

    << "Product Name : " << SC_Object.SC_ProductName << std::endl
    << "Brand Name : " << SC_Object.SC_BrandName << std::endl << std::endl;

    for(const Variants i : SC_Object.SC_VariantsObject){
        os << i << std::endl;
    }

    os
    << "Number of Items : " << SC_Object.SC_Number_OF_Items << std::endl
    << "UPC : " << SC_Object.SC_UPC << std::endl
    << "GLobal Trade Identification Number : " << SC_Object.SC_Global_Trade_Identification_Number << std::endl << std::endl;

    SC_Object.Show_General_Cosmetics_Details();
    
    os << std::endl
    << "Additional Points : ";
    SC_Object.printing_vector_string(SC_Object.SC_Additional_Points);
    os << std::endl

    << "How To Use : ";
    SC_Object.printing_vector_string(SC_Object.SC_How_TO_Use);
    os << std::endl  

    << "Safety Information : ";
    SC_Object.printing_vector_string(SC_Object.SC_SafetyInformation);
    os << std::endl

    << "Directions : ";
    SC_Object.printing_vector_string(SC_Object.SC_Directions);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << SC_Object.SC_Additional_Info;
    return os;
}