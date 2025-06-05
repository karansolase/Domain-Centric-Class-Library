#include "Tops.hpp"

std::ostream& operator<<(std::ostream& os, const Tops& TOPS_Object){
    os << "PRODUCT DETAILS : " << std::endl << std::endl

    << "Shirt Name : " << TOPS_Object.TOPS_ShirtName << std::endl
    << "Brand Name : " << TOPS_Object.TOPS_BrandName      << std::endl << std::endl << std::endl;

    for(const Variants i : TOPS_Object.TOPS_VariantsObject){
        os << i << std::endl;
    }

    std::vector<Variants>::const_iterator Iter_1 = 
    TOPS_Object.TOPS_VariantsObject.begin();

    while(Iter_1 != TOPS_Object.TOPS_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os << TOPS_Object.TOPS_ShirtDetails << std::endl;

    os
    << "Size Chart Name : " << std::endl 
    << TOPS_Object.TOPS_SIZE_ChartName << std::endl
    << "Format : Brand Size | Standard Size | IN Size | India | UK | Chest | Waist | Shoulder | Sleeve Length | Front Length or Length | Neck |" << std::endl << std::endl
    << "Size Guide Chart : ";

    std::vector<size_guide>::const_iterator Iter_2 = 
    TOPS_Object.TOPS_SIZE_GuideObject.begin();

    while(Iter_2 != TOPS_Object.TOPS_SIZE_GuideObject.end())
    {
        std::cout << *Iter_2 << std::endl;
        ++Iter_2;
    }
    os
    << "Additional Information : " << std::endl << std::endl
    << TOPS_Object.TOPS_Additional_Info_Object;

    return os;
}

void Tops::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

Tops::Tops(
    std::string _shirt_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

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
    std::initializer_list <std::string> _description,

    std::string _size_chart_name,
    std::initializer_list <size_guide> _size_guide_object,

    //Additional Information :
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
:   TOPS_ShirtName(_shirt_name),
    TOPS_BrandName(_brand),

    TOPS_VariantsObject(_variants_object),

    TOPS_ShirtDetails(
    _material_type_or_composition,
    _style_design_name,
    _pattern,
    _sleeve_type,
    _collar_style,
    _neck_style,
    _length,
    _closure_type, 
    _occasion_type, 
    _fit_type,
    _age_range_description,

    _care_instructions, 
    _About_this_item,
    _description
    ),

    TOPS_SIZE_ChartName(_size_chart_name),
    TOPS_SIZE_GuideObject(_size_guide_object),

    TOPS_Additional_Info_Object(
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