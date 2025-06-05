#pragma once 

#ifndef _GENERAL_CLOTHES_HPP
#define _GENERAL_CLOTHES_HPP

#include <iostream>
#include <vector>

class General_Clothes_Details{
    friend std::ostream& operator<<(std::ostream& os, const General_Clothes_Details& GCD_Object);

    private :
    std::string GDC_MaterialType_OR_Composition;
    std::string GDC_StyleDesign_Name;
    std::string GDC_Pattern;
    std::string GDC_SleeveType;
    std::string GDC_CollarStyle;
    std::string GDC_NeckStyle;
    std::string GDC_Length;
    std::string GDC_ClosureType;
    std::string GDC_OccasionType;
    std::string GDC_FitType;
    std::string GDC_Age_Range_Description;

    std::vector <std::string> GDC_CareInstructions;
    std::vector <std::string> GDC_About_This_Item;
    std::vector <std::string> GDC_Description;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    
    General_Clothes_Details(
    std::string _material_type_or_composition,
    std::string _style_design_name,
    std::string _pattern,
    std::string _sleeve_type,
    std::string _collar_style,
    std::string _neck_style,
    std::string _length,
    std::string _closure_type, 
    std::string _occasion_type, 
    std::string _fit_type,
    std::string _age_range_description,

    std::initializer_list <std::string> _care_instructions, 
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _description
    );
};

#endif