#pragma once 

#ifndef _GENREL_GROCERIES_DETAILS
#define _GENREL_GROCERIES_DETAILS

#include <iostream>
#include <vector>
#include "Measurement_and_unit.hpp"
#include "Date.hpp"
#include "variants.hpp"
#include "word_number.hpp"
#include <vector>

class General_Groceries_Details{
    private :
    Date GGD_USE_by;

    std::vector <std::string> GGD_Speciality;
    std::vector <std::string> GGD_Variety;
    std::vector <std::string> GGD_Flavours;
    std::vector <std::string> GGD_Diet_type; 
    std::vector <std::string> GGD_Storage_Instructions; 
    std::vector <std::string> GGD_Cuisine;
    std::vector <std::string> GGD_Additives;
    std::vector <std::string> GGD_Ingredients_type;
    
    std::string GGD_Item_form;
    std::string GGD_Allergen_Info;
    std::string GGD_Package_info_or_type;
    std::string GGD_Region_Produced_in;
    std::string GGD_Produce_sold_as; 
    std::string GGD_Part_number;
    
    Measurement_and_unit GGD_Certification;

    Measurement_and_unit GGD_Appropriate_Age_Range_description; 
    Measurement_and_unit GGD_Package_Weight;

    Measurement_and_unit GGD_Serving_size;
    Measurement_and_unit GGD_Energy;
    Measurement_and_unit GGD_Protein;
    Measurement_and_unit GGD_Fat;
    Measurement_and_unit GGD_Carbohydrate;
    Measurement_and_unit GGD_Sugar;
    Measurement_and_unit GGD_Item_volume;
    std::vector <Measurement_and_unit> GGD_net_content_volume;

    std::vector <Variant_Info> GGD_Ingredients;
    std::vector <std::string> GGD_About_this_item;
    std::vector <std::string> GGD_Product_description;
    std::vector <std::string> GGD_Recommended_uses_for_product;
    std::vector <std::string> GGD_From_manufacturer;
    std::vector <std::string> GGD_From_brand;
    std::vector <std::string> GGD_Saftey_info;
    std::vector <std::string> GGD_Directions; 
    std::vector <std::string> GGD_Legal_Disclaimer;

    unsigned int GGD_number_of_pieces; 
    unsigned int GGD_number_of_items;
    unsigned long long int GGD_Global_trade_identification_number; 
    unsigned long long int GGD_UPC; 

    void printing_vector_string(std::vector <std::string> string_vector_object)const;
    
    public :
    
    General_Groceries_Details(
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
        unsigned long long int _Global_trade_identification_number, 
        unsigned long long int _UPC 
    );
    
    void Show_General_Groceries_Details() const;
};

#endif /* General_groceries_details.hpp */