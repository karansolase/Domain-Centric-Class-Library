#include "Razor.hpp"

ShavingRazor::ShavingRazor(
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
)
:   RZR_ProductName(_product_name),
    RZR_BrandName(_brand_name),
    RZR_Number_OF_Blades(_number_of_blades),
    RZR_Number_OF_Items(_number_of_items),

    RZR_VariantsObject(_variants_object),

    RZR_SkinType(_skin_type),
    RZR_HairType(_Hair_type),
    RZR_Age_Range_Description(_Age_range_description),
    RZR_HandleMaterial(_Handle_material),

    RZR_AdditionalPoints(_Additional_points),
    RZR_Recommended_Uses_OF_Product(_Recommended_uses_of_product),
    RZR_SpecialFeatures(_special_feature),
    RZR_SafetyInformation(_Safety_information),
    RZR_Ingredients(_Ingredients),

    RZR_Additional_Info(
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

void ShavingRazor::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const ShavingRazor& ShavingRazor_Object){
    os << "PRODUCT DETAILS : " << std::endl << std::endl

    << "Product Name : " << ShavingRazor_Object.RZR_ProductName << std::endl
    << "Brand Name : " << ShavingRazor_Object.RZR_BrandName << std::endl
    << "Number of Blades : " << ShavingRazor_Object.RZR_Number_OF_Blades << std::endl
    << "Number of Items : " << ShavingRazor_Object.RZR_Number_OF_Items << std::endl
    << "Age Range Description : " << ShavingRazor_Object.RZR_Age_Range_Description << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    ShavingRazor_Object.RZR_VariantsObject.begin();

    while(Iter_1 != ShavingRazor_Object.RZR_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os
    << "Skin Type : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_SkinType);
    os << std::endl

    << "Hair Type : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_HairType);
    os << std::endl

    << "Handle Material : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_HandleMaterial);
    os << std::endl

    << "Additional Points : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_AdditionalPoints);
    os << std::endl

    << "Recommended Uses for Product : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_Recommended_Uses_OF_Product);
    os << std::endl

    << "Special Features : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_SpecialFeatures);
    os << std::endl

    << "Safety Information : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_SafetyInformation);
    os << std::endl

    << "Ingredients : ";
    ShavingRazor_Object.printing_vector_string(ShavingRazor_Object.RZR_Ingredients);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << ShavingRazor_Object.RZR_Additional_Info;

    return os;
}