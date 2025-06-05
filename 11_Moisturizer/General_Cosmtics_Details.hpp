#pragma once 

#ifndef _GENERAL_COSMETICS_DETAILS_HPP
#define _GENERAL_COSMETICS_DETAILS_HPP

#include <iostream>
#include <vector>
#include "Measurement_and_unit.hpp"

class General_Cosmetics_Details{

    public :
    std::vector <std::string> GCD_ScentNames;
    std::vector <std::string> GCD_HairType;
    std::vector <std::string> GCD_SkinType;
    std::vector <std::string> GCD_TargetGender;
    std::vector <std::string> GCD_Age_Range_Description;
    std::vector <std::string> GCD_MaterialTypeFree;
    std::vector <std::string> GCD_MaterialFeature;
    std::string GCD_ItemForm;
    Measurement_and_unit GCD_ItemVolume;
    std::string GCD_Colour;
    std::string GCD_FinishType;
    std::string GCD_Coverage;
    
    std::vector <std::string> GCD_ProductDescription;
    std::vector <std::string> GCD_Recommended_OR_SpecificUses_FOR_Product;
    std::vector <std::string> GCD_ProductBenefits;
    std::vector <std::string> GCD_ProductFeatures;
    std::vector <std::string> GCD_SpecialIngredients;
    std::vector <std::string> GCD_ActiveIngredients;
    std::vector <std::string> GCD_Composition_OR_Ingredients;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;
    void Show_General_Cosmetics_Details() const;

    public :
    General_Cosmetics_Details(
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
    );
};
#endif