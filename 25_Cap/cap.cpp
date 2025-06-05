#include "cap.hpp"

Cap::Cap(
    std::string _cap_name,
    std::string _brand_name,

    std::initializer_list <Variants> _variants_object, 

    std::string _size_chart_name,
    size_guide _size_guide_object,  

    std::string _material_type, 
    std::string _outer_material, 
    std::string _Department, 
    std::string _Age_range_description, 
    std::string _Fit_type, 
    Measurement_and_unit _cap_circumference, 
    Measurement_and_unit _Diameter, 
 
    std::initializer_list <std::string> _Ocassion_type, 
    std::initializer_list <std::string> _Season,
    std::initializer_list <std::string> _Sports, 
    std::initializer_list <std::string> _Closure_type, 

    std::initializer_list <std::string> _product_description, 
    std::initializer_list <std::string> _Material,
    std::initializer_list <std::string> _features, 
    std::initializer_list <std::string> _Suitable_for_or_recommended_uses, 
    std::initializer_list <std::string> _Care_instructions, 
    std::initializer_list <std::string> _About_this_item, 

    std::string _Is_Discontinued_by_manufacturer, 
    
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
:   Cap_Name(_cap_name),
    Cap_Brand_Name(_brand_name),

    Cap_Variants_Object(_variants_object), 

    Cap_size_chart_name(_size_chart_name),
    Cap_size_guide_object(_size_guide_object),  

    Cap_Material_Type(_material_type), 
    Cap_Outer_Material(_outer_material), 
    Cap_Department(_Department), 
    Cap_Age_Range_Description(_Age_range_description), 
    Cap_Fit_Type(_Fit_type), 
    Cap_Circumference(_cap_circumference), 
    Cap_Diameter(_Diameter), 
 
    Cap_Ocassion_type(_Ocassion_type), 
    Cap_Season(_Season),
    Cap_Sports(_Sports), 
    Cap_Closure_type(_Closure_type), 

    Cap_Product_Description(_product_description), 
    Cap_Material(_Material),
    Cap_Features(_features), 
    Cap_Suitable_for_or_recommended_uses(_Suitable_for_or_recommended_uses), 
    Cap_Care_instructions(_Care_instructions), 
    Cap_About_this_item(_About_this_item), 

    Cap_Is_Discontinued_by_manufacturer(_Is_Discontinued_by_manufacturer), 

    Cap_Additional_Info_Object(
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

void Cap::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Cap& Cap_Object){
    os << "PRODUCT DAETAILS : " << std::endl << std::endl

    << "Cap Name : " << Cap_Object.Cap_Name << std::endl
    << "Brand Name : " << Cap_Object.Cap_Brand_Name << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Cap_Object.Cap_Variants_Object.end();

    while(Iter_1 != Cap_Object.Cap_Variants_Object.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os
    << std::endl
     
    << "Size Chart Name : " << Cap_Object.Cap_size_chart_name << std::endl
    << "Format : Brand Size | India | Head Circumference |" << std::endl << std::endl
    << Cap_Object.Cap_size_guide_object << std::endl

    << "Material Type : " << Cap_Object.Cap_Material_Type << std::endl
    << "Outer Material : " << Cap_Object.Cap_Outer_Material << std::endl
    << "Department : " << Cap_Object.Cap_Department << std::endl
    << "Age Range Description : " << Cap_Object.Cap_Age_Range_Description << std::endl
    << "Fit Type : " << Cap_Object.Cap_Fit_Type << std::endl
    << "Cap Circumference : " << Cap_Object.Cap_Circumference << std::endl
    << "Diameter : " << Cap_Object.Cap_Diameter << std::endl << std::endl

    << "Ocassion Type : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Ocassion_type);
    os << std::endl

    << "Season : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Season);
    os << std::endl

    << "Sports : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Sports);
    os << std::endl

    << "Closure Type : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Closure_type);
    os << std::endl

    << "Product Description : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Product_Description);
    os << std::endl

    << "Material : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Material);
    os << std::endl

    << "Features : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Features);
    os << std::endl

    << "Suitable For OR Recommended Uses : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Suitable_for_or_recommended_uses);
    os << std::endl

    << "Care Instructions : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_Care_instructions);
    os << std::endl

    << "About this Item : ";
    Cap_Object.printing_vector_string(Cap_Object.Cap_About_this_item);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << "Is Discontinued By Manufacturer : " << Cap_Object.Cap_Is_Discontinued_by_manufacturer << std::endl
    << Cap_Object.Cap_Additional_Info_Object;

    return os;
}