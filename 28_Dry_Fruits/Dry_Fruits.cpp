#include "Dry_Fruits.hpp"

Dry_Fruits::Dry_Fruits(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _variants_object,

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
)
:   General_Groceries_Details(
    _USE_by,
    
    _Speciality,
    _Variety,
    _Flavours,
    _Diet_type, 
    _Storage_Instructions, 
    _Cuisine,
    _Additives,
    _Ingredients_type,
    
    _Item_form,
    _Allergen_Info,
    _Package_info,
    _Region_Produced_in,
    _Produce_sold_as, 
    _Part_number,
        
    _Certification,
    
    Appropriate_Age_Range_description_value,
    Appropriate_Age_Range_description_unit_and_string, 
        
    Package_Weight_value,
    Package_Weight_unit_and_string,
        
    Serving_size_value,
    Serving_size_unit_and_string,
        
    Energy_value,
    Energy_unit_and_string,
        
    Protein_value,
    Protein_unit_and_string,
        
    Fat_value,
    Fat_unit_and_string,
        
    Carbohydrate_value,
    Carbohydrate_unit_and_string,
        
    Sugar_value,
    Sugar_unit_and_string,
        
    Item_volume_value,
    Item_volume_unit_and_string,
        
    _net_content_volume,
    
    _Ingredients,
    _About_this_item,
    _Product_description,
    _Recommended_uses_for_product,
    _From_manufacturer,
    _From_brand,
    _Saftey_info,
    _Directions, 
    _Legal_Disclaimer,
    
    _number_of_pieces, 
    _number_of_items,
    _Global_trade_identification_number, 
    _UPC
    ),
    
    Drf_Product_Name(_product_name),
    Drf_Brand_Name(_brand_name),

    Drf_Variants_Object(_variants_object),

    Drf_Taste(_Taste),
    Drf_Cultivation_Method_Claim(_Cultivation_method_claim),
    Drf_Temperature_Condition(_temperature_condition),

    Drf_Awards(_Awards),
    
    Drf_Additional_Info(
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

void Dry_Fruits::printing_vector_string(std::vector <std::string> string_vector_object) const{
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


std::ostream& operator<<(std::ostream& os, const Dry_Fruits& Drf_Object){
    os << "PRODUCT DETAILS : " << std::endl << std::endl

    << "Product Name : " << Drf_Object.Drf_Product_Name << std::endl
    << "Brand Name : " << Drf_Object.Drf_Brand_Name << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Drf_Object.Drf_Variants_Object.begin();

    while(Iter_1 != Drf_Object.Drf_Variants_Object.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os << std::endl;
    
    Drf_Object.General_Groceries_Details::Show_General_Groceries_Details();

    os
    << "Taste : " << Drf_Object.Drf_Taste << std::endl
    << "Cultivation Method Claim : " << Drf_Object.Drf_Cultivation_Method_Claim << std::endl << std::endl
    << "Temperature Condition : " << Drf_Object.Drf_Temperature_Condition << std::endl

    << "Awards : ";
    Drf_Object.printing_vector_string(Drf_Object.Drf_Awards);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl <<
    Drf_Object.Drf_Additional_Info;

    return os;
}