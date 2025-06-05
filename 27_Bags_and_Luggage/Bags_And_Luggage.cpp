#include "Bags_And_Luggage.hpp"

Bags_and_luggage::Bags_and_luggage(
    std::string _product_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object, 

    std::string _Department, 
    std::string _Age_range_description,  
    std::string _Resistant_level, 
    std::string _laptop_sleeves, 
    std::string _Closure_type, 
    std::string _Wheel_type, 
    std::string _Material_type, 
    std::string _Lock_type, 
    std::string _Strap_type, 
    std::string _Pocket_Description, 
    std::string _Outer_material, 

    double Capacity_value,
    std::initializer_list <std::string> Capacity_unit_and_string,  

    unsigned int _number_of_wheels, 
    unsigned int _Compartments,
    unsigned int _number_of_zippers, 
    unsigned int _number_of_pockets, 

    std::initializer_list <std::string> _Material,

    std::initializer_list <std::string> _care_instructions,
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Features, 
    std::initializer_list <std::string> _Product_description, 
    std::initializer_list <std::string> _From_manufacturer, 

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
:   BL_ProductName(_product_name),
BL_BrandName(_brand),

BL_VariantsObject(_variants_object), 

BL_Department(_Department), 
BL_Age_Range_Description(_Age_range_description),  
BL_ResistantLevel(_Resistant_level), 
BL_LaptopSleeves(_laptop_sleeves), 
BL_ClosureType(_Closure_type), 
BL_WheelType(_Wheel_type), 
BL_MaterialType(_Material_type), 
BL_LockType(_Lock_type), 
BL_StrapType(_Strap_type), 
BL_PocketDescription(_Pocket_Description), 
BL_OuterMaterial(_Outer_material), 

BL_Capacity(
    Capacity_value,
    Capacity_unit_and_string),  

    BL_Number_OF_Wheels(_number_of_wheels), 
    BL_Compartments(_Compartments),
    BL_Number_OF_Zippers(_number_of_zippers), 
    BL_Number_OF_Pockets(_number_of_pockets), 

    BL_Material(_Material),

    BL_Care_Instructions(_care_instructions),
    BL_About_This_Item(_About_this_item),
    BL_Features(_Features), 
    BL_Product_Description(_Product_description), 
    BL_Rom_Manufacturer(_From_manufacturer), 

    BL_Is_Discontinued_by_manufacturer(_Is_Discontinued_by_manufacturer), 
    
    BL_Additional_Info(
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

void Bags_and_luggage::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Bags_and_luggage& BL_Object){
    os << "PRODUCT DETAILS   :  " << std::endl << std::endl

    << "Product Name : " << BL_Object.BL_ProductName << std::endl
    << "Brand Name : " << BL_Object.BL_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter = 
    BL_Object.BL_VariantsObject.begin();

    while(Iter != BL_Object.BL_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }
    os
    << std::endl

    << "Department : " << BL_Object.BL_Department << std::endl
    << "Age Range Description : " << BL_Object.BL_Age_Range_Description << std::endl
    << "Resistant Level : " << BL_Object.BL_ResistantLevel << std::endl
    << "Laotop Sleeves : " << BL_Object.BL_LaptopSleeves << std::endl
    << "Closure Type : " << BL_Object.BL_ClosureType << std::endl
    << "Wheel Type : " << BL_Object.BL_WheelType << std::endl
    << "Materual Type : " << BL_Object.BL_MaterialType << std::endl
    << "Lock Type : " << BL_Object.BL_LockType << std::endl
    << "Strap Type : " << BL_Object.BL_StrapType << std::endl
    << "Pocker Description : " << BL_Object.BL_PocketDescription << std::endl
    << "Outer Material : " << BL_Object.BL_OuterMaterial << std::endl
    << "Capacity : " << BL_Object.BL_Capacity << std::endl << std::endl

    << "Number of Wheels : " << BL_Object.BL_Number_OF_Wheels << std::endl
    << "Number of Compartments : " << BL_Object.BL_Compartments << std::endl
    << "Number of Zippers : " << BL_Object.BL_Number_OF_Zippers << std::endl
    << "Number of Pockets : " << BL_Object.BL_Number_OF_Pockets << std::endl << std::endl

    << "Material : ";
    BL_Object.printing_vector_string(BL_Object.BL_Material);
    os << std::endl

    << "Care Instructions : ";
    BL_Object.printing_vector_string(BL_Object.BL_Care_Instructions);
    os << std::endl

    << "About this Item : ";
    BL_Object.printing_vector_string(BL_Object.BL_About_This_Item);
    os << std::endl

    << "Features : ";
    BL_Object.printing_vector_string(BL_Object.BL_Features);
    os << std::endl

    << "Product Description : ";
    BL_Object.printing_vector_string(BL_Object.BL_Product_Description);
    os << std::endl

    << "From Manufacturer : ";
    BL_Object.printing_vector_string(BL_Object.BL_Rom_Manufacturer);
    os << std::endl

    << "Additional Information  :  " << std::endl << std::endl
    << "Is Discontinued By manufacturer : " << BL_Object.BL_Is_Discontinued_by_manufacturer << std::endl
    << BL_Object.BL_Additional_Info;


    return os;
}