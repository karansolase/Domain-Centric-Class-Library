#include "general_clothes_details.hpp"

General_Clothes_Details::General_Clothes_Details(
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
)
:   GDC_MaterialType_OR_Composition(_material_type_or_composition),
    GDC_StyleDesign_Name(_style_design_name),
    GDC_Pattern(_pattern),
    GDC_SleeveType(_sleeve_type),
    GDC_CollarStyle(_collar_style),
    GDC_NeckStyle(_neck_style),
    GDC_Length(_length),
    GDC_ClosureType(_closure_type),
    GDC_OccasionType(_occasion_type),
    GDC_FitType(_fit_type),
    GDC_Age_Range_Description(_age_range_description),

    GDC_CareInstructions(_care_instructions),
    GDC_About_This_Item(_About_this_item),
    GDC_Description(_description)
{

}

void General_Clothes_Details::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const General_Clothes_Details& GCD_Object){
    os

    << "Material Type or Composition : " << GCD_Object.GDC_MaterialType_OR_Composition << std::endl
    << "Style or Design name : " << GCD_Object.GDC_StyleDesign_Name << std::endl
    << "Pattern Name : " << GCD_Object.GDC_Pattern << std::endl
    << "Sleeve Type : " << GCD_Object.GDC_SleeveType << std::endl
    << "Collar Style : " << GCD_Object.GDC_CollarStyle << std::endl
    << "Neck Style : " << GCD_Object.GDC_NeckStyle << std::endl
    << "Length : " << GCD_Object.GDC_Length << std::endl
    << "Closure Type : " << GCD_Object.GDC_ClosureType << std::endl
    << "Ocassion Type : " << GCD_Object.GDC_OccasionType << std::endl
    << "Fit Type : " << GCD_Object.GDC_FitType << std::endl
    << "Age Range Descriptions : " << GCD_Object.GDC_Age_Range_Description << std::endl << std::endl

    << "Care Instructions : ";
    GCD_Object.printing_vector_string(GCD_Object.GDC_CareInstructions);
    os << std::endl

    << "About this Item : ";
    GCD_Object.printing_vector_string(GCD_Object.GDC_About_This_Item);
    os << std::endl 

    << "Description : ";
    GCD_Object.printing_vector_string(GCD_Object.GDC_Description);
    os << std::endl;
        
    return os;
}