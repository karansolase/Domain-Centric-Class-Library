#include "General_Cosmtics_Details.hpp"

General_Cosmetics_Details::General_Cosmetics_Details(
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
    std::initializer_list <std::string> _composition_or_ingredients
)
:   GCD_ScentNames(_scent_names),
    GCD_HairType(_hair_type),
    GCD_SkinType(_skin_type),
    GCD_TargetGender(_target_gender),
    GCD_Age_Range_Description(_age_range_description),
    GCD_MaterialTypeFree(_material_type_free),
    GCD_MaterialFeature(_material_feature),
    GCD_ItemForm(_item_form),

    GCD_ItemVolume(
        item_volume_value,
        item_volume_unit_string),
    
    GCD_Colour(_colour),
    GCD_FinishType(_finish_type),
    GCD_Coverage(_coverage),

    GCD_ProductDescription(_product_description),
    GCD_Recommended_OR_SpecificUses_FOR_Product(_recommended_or_specific_uses_for_product),
    GCD_ProductBenefits(_product_benefits),
    GCD_ProductFeatures(_product_features),
    GCD_SpecialIngredients(_special_ingredients),
    GCD_ActiveIngredients(_active_ingredients),
    GCD_Composition_OR_Ingredients(_composition_or_ingredients)
{

};

void General_Cosmetics_Details::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

void General_Cosmetics_Details::Show_General_Cosmetics_Details() const
{
    std::cout 
    << "Scent Names : ";
    printing_vector_string(GCD_ScentNames);
    std::cout << std::endl

    << "Hair Type : ";
    printing_vector_string(GCD_HairType);
    std::cout << std::endl

    << "Skin Type : ";
    printing_vector_string(GCD_SkinType);
    std::cout << std::endl

    << "Target Gender : ";
    printing_vector_string(GCD_TargetGender);
    std::cout << std::endl

    << "Age Range Description : ";
    printing_vector_string(GCD_Age_Range_Description);
    std::cout << std::endl

    << "Material Type Free : ";
    printing_vector_string(GCD_MaterialTypeFree);
    std::cout << std::endl 

    << "Material Feature : ";
    printing_vector_string(GCD_MaterialFeature);
    std::cout << std::endl 

    << "Item Form : " << GCD_ItemForm << std::endl
    << "Item Volume : " << GCD_ItemVolume << std::endl
    << "Colour : " << GCD_Colour << std::endl
    << "Finish Type : " << GCD_FinishType << std::endl
    << "Coverage : " << GCD_Coverage << std::endl << std::endl

    << "Product Description : ";
    printing_vector_string(GCD_ProductDescription);
    std::cout << std::endl 

    << "Recommended or Specific Uses for Product : ";
    printing_vector_string(GCD_Recommended_OR_SpecificUses_FOR_Product);
    std::cout << std::endl 

    << "Product Benefits : ";
    printing_vector_string(GCD_ProductBenefits);
    std::cout << std::endl 

    << "Product Features : ";
    printing_vector_string(GCD_ProductFeatures);
    std::cout << std::endl  

    << "Special Ingredients : ";
    printing_vector_string(GCD_SpecialIngredients);
    std::cout << std::endl 

    << "Active Ingredients : ";
    printing_vector_string(GCD_ActiveIngredients);
    std::cout << std::endl 

    << "Composition : ";
    printing_vector_string(GCD_Composition_OR_Ingredients);
    std::cout << std::endl; 
}