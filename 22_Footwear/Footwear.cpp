#include "Footwear.hpp"

Footwear::Footwear(
    std::string _Product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _Variants_object,

    std::string _closure_type,
    std::string _Heel_type, 
    std::string _shaft_height, 
    std::string _Toe_Style, 
    std::string _water_resistance_level, 
    std::string _Department, 
    std::string _Material_type, 
    std::string _language, 
    std::string _Age_range, 
    std::string _sport, 
    unsigned int _number_of_items, 
    std::string _strap_type, 
    std::string _Seasons, 

    std::initializer_list <std::string> _sole_material, 
    std::initializer_list <std::string> _Outer_material, 
    std::initializer_list <std::string> _Usage, 
    
    std::string _size_chart_name, 
    std::initializer_list <size_guide> _size_guide_object,

    std::initializer_list <std::string> _about_this_item,
    std::initializer_list <std::string> _features, 
    std::initializer_list <std::string> _product_description,  
    std::initializer_list <std::string> _Care_instructions, 
    std::initializer_list <std::string> _From_manufacturer,  

    std::string _Is_Discontinued_By_Manufacturer, 

    double Package_Dimensions_1, 
    double Package_Dimensions_2, 
    double Package_Dimensions_3, 
    std::string Package_Dimensions_unit, 
    std::string Package_Dimensions_format, 

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
:   fOOtwr_ProductName(_Product_name),   
    fOOtwr_BrandName(_brand_name),

    fOOtwr_VariantsObject(_Variants_object),

    fOOtwr_ClosureType(_closure_type),
    fOOtwr_HeelType(_Heel_type),
    fOOtwr_ShaftHeight(_shaft_height),
    fOOtwr_ToeStyle(_Toe_Style),
    fOOtwr_WaterResistanceLevel(_water_resistance_level),
    fOOtwr_Department(_Department),
    fOOtwr_MaterialType(_Material_type),
    fOOtwr_Language(_language),
    fOOtwr_AgeRange(_Age_range),
    fOOtwr_Sport(_sport),
    fOOtwr_NumberOFItems(_number_of_items),
    fOOtwr_StrapType(_strap_type),
    fOOtwr_Seasons(_Seasons),

    fOOtwr_SoleMaterial(_sole_material),
    fOOtwr_OuterMaterial(_Outer_material),

    fOOtwr_SizeChartName(_size_chart_name),
    fOOtwr_size_guide_object(_size_guide_object),
    
    fOOtwr_Usage(_Usage),
    fOOtwr_About_This_Item(_about_this_item),
    fOOtwr_Features(_features),
    fOOtwr_ProductDescription(_product_description),
    fOOtwr_CareInstructions(_Care_instructions),
    fOOtwr_FromManufacturer(_From_manufacturer),

    fOOtwr_Is_Discontinued_By_Manufacturer(_Is_Discontinued_By_Manufacturer),
    
    fOOtwr_PackageDimensions(
    Package_Dimensions_1, 
    Package_Dimensions_2, 
    Package_Dimensions_3, 
    Package_Dimensions_unit, 
    Package_Dimensions_format 
    ),
    
    fOOtwr_Additional_Info(
      _ASIN,
       
      Manufacturing_Object,
      _Manufacturing_Year,

      _Warranty, 

      _Country_Of_Origin,
      _Model_Number,

      _Ratings,
      _Reviews,

      _Best_Seller_Rank,

      _Date_First_Available,
       // Format : 15 Nov, 2016 OR 15/11/2016

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

void Footwear::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Footwear& fOOtwr_object){
    os << "PRODUCT DETAILS   : " << std::endl << std::endl

    << "Shoes Name : " << fOOtwr_object.fOOtwr_ProductName << std::endl
    << "Brand Name : " << fOOtwr_object.fOOtwr_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    fOOtwr_object.fOOtwr_VariantsObject.begin();
    
    while(Iter_1 != fOOtwr_object.fOOtwr_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os
    << "Closure Type : " << fOOtwr_object.fOOtwr_ClosureType << std::endl
    << "Heel Type : " << fOOtwr_object.fOOtwr_HeelType << std::endl
    << "Shaft Height : " << fOOtwr_object.fOOtwr_ShaftHeight << std::endl
    << "Toe Style : " << fOOtwr_object.fOOtwr_ToeStyle << std::endl
    << "Water Resistance Level : " << fOOtwr_object.fOOtwr_WaterResistanceLevel << std::endl
    << "Department : " << fOOtwr_object.fOOtwr_Department << std::endl
    << "Material Type : " << fOOtwr_object.fOOtwr_MaterialType << std::endl
    << "Language : " << fOOtwr_object.fOOtwr_Language << std::endl
    << "Age Range : " << fOOtwr_object.fOOtwr_AgeRange << std::endl
    << "Sport : " << fOOtwr_object.fOOtwr_Sport << std::endl
    << "Number of Items : " << fOOtwr_object.fOOtwr_NumberOFItems << std::endl
    << "Strap Type : " << fOOtwr_object.fOOtwr_StrapType << std::endl
    << "Seasons : " << fOOtwr_object.fOOtwr_Seasons << std::endl << std::endl

    << "Sole Material : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_SoleMaterial);
    os << std::endl

    << "Outer Material : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_OuterMaterial);
    os << std::endl

    << "Size Chart Name : " << fOOtwr_object.fOOtwr_SizeChartName << std::endl
    << "Format : Brand Size | India | UK | USA or US | EU | Heel To Toe in Inch | Front Length or Length |" << std::endl << std::endl;

    std::vector<size_guide>::const_iterator Iter_2 =
    fOOtwr_object.fOOtwr_size_guide_object.begin();

    while(Iter_2 != fOOtwr_object.fOOtwr_size_guide_object.end())
    {
        std::cout << *Iter_2 << std::endl;
        ++Iter_2;
    }

    os
    << "Usage : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_Usage);
    os << std::endl

    << "About this item : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_About_This_Item);
    os << std::endl

    << "Features : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_Features);
    os << std::endl

    << "Product Description : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_ProductDescription);
    os << std::endl

    << "Care Instructions : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_CareInstructions);
    os  << std::endl

    << "From Manufacturer : ";
    fOOtwr_object.printing_vector_string(fOOtwr_object.fOOtwr_FromManufacturer);
    os << std::endl

    << "Additional Information   : " << std::endl << std::endl
    << "Is Discontinued By Manufacturer : " << fOOtwr_object.fOOtwr_Is_Discontinued_By_Manufacturer << std::endl
    << "Package Dimensions : " << fOOtwr_object.fOOtwr_PackageDimensions << std::endl
    << fOOtwr_object.fOOtwr_Additional_Info;

    return os;
}