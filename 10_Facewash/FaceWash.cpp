#include "FaceWash.hpp"

FaceWash::FaceWash(
    std::string _Product_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    std::string _package_type,
    std::string _container_type,

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

    // Measurements :
    unsigned int _number_of_items,
    unsigned int _item_package_quantity,

    double net_content_volume_value,
    std::initializer_list <std::string> net_content_volume_unit_string,
    
    double net_content_weight_value,
    std::initializer_list <std::string> net_content_weight_unit_string,
    
    double unit_count_value,
    std::initializer_list <std::string> unit_count_unit_string,

    std::initializer_list <std::string> _Additional_points,
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _Directions,
    std::initializer_list <std::string> _legal_disclaimer,

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
)
:   FW_ProductName(_Product_name),
    FW_BrandName(_brand),

    FW_VariantsObject(_variants_object),

    FW_PackageType(_package_type),
    FW_ContainerType(_container_type),
    
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
    
    FW_Number_OF_Items(_number_of_items),
    FW_Item_Package_Quantity(_item_package_quantity),

    FW_Net_Content_Volume(
        net_content_volume_value,
        net_content_volume_unit_string
    ),

    FW_Net_Content_Weight(
        net_content_weight_value,
        net_content_weight_unit_string
    ),

    FW_UnitCount(
        unit_count_value,
        unit_count_unit_string
    ),

    FW_AdditionalPoints(_Additional_points),
    
    FW_SafetyInformation(_Safety_information),
    FW_Directions(_Directions),
    FW_LegalDisclaimer(_legal_disclaimer),

    FW_is_discontinued_by_manufacturer(_is_discontinued_by_manufacturer),
    
    FW_add_info(
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
    
}

void FaceWash::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const FaceWash& FW_Object){
    os << "PRODUCT DETAILS      :" << std::endl << std::endl

    << "General Information    :" << std::endl << std::endl
    << "Product Name : " << FW_Object.FW_ProductName << std::endl
    << "Brand : " << FW_Object.FW_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    FW_Object.FW_VariantsObject.begin();

    while(Iter_1 != FW_Object.FW_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os
    << "Package Type : " << FW_Object.FW_PackageType << std::endl
    << "Container Type : " << FW_Object.FW_ContainerType << std::endl;

    FW_Object.Show_General_Cosmetics_Details();
    os << std::endl

    << "Measurements      :" << std::endl 
    << "Number of Items : " << FW_Object.FW_Number_OF_Items << std::endl
    << "Item Package Quantity : " << FW_Object.FW_Item_Package_Quantity << std::endl
    << "Net Content Volume : " << FW_Object.FW_Net_Content_Volume << std::endl
    << "Net Content Weight : " << FW_Object.FW_Net_Content_Weight << std::endl
    << "Unit Count : "  << FW_Object.FW_UnitCount << std::endl << std::endl

    << "Additional Points : ";
    FW_Object.printing_vector_string(FW_Object.FW_AdditionalPoints);
    os << std::endl

    << "Safety Information : ";
    FW_Object.printing_vector_string(FW_Object.FW_SafetyInformation);
    os << std::endl
    
    << "Directions : ";
    FW_Object.printing_vector_string(FW_Object.FW_Directions);
    os << std::endl
    
    << "Legal Disclaimer : ";
    FW_Object.printing_vector_string(FW_Object.FW_LegalDisclaimer);
    os << std::endl

    << "Additional Informtaion : " << std::endl << std::endl
    << "Is Discontinued By Manufacturer : " << FW_Object.FW_is_discontinued_by_manufacturer << std::endl
    << FW_Object.FW_add_info;

    return os;
}