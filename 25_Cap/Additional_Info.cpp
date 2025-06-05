#include "Additional_Info.hpp"

Additional_Info::Additional_Info(
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
:   Add_Info_ASIN(_ASIN),

    Add_Info_Manufacturing_Object(Manufacturing_Object),
    Add_Info_Manufacturing_Year(_Manufacturing_Year),

    Add_Info_Warranty(_Warranty),

    Add_Info_Country_Of_Origin(_Country_Of_Origin),
    Add_Info_Model_Number(_Model_Number),
    
    Add_Info_Reviews_Object(_Ratings, _Reviews),

    Add_Info_Best_Seller_Rank(_Best_Seller_Rank),

    Add_Info_Date_First_Available(_Date_First_Available),

    Add_Info_Packer_Object(Packer_Object),
    Add_Info_Importer_Object(Importer_Object),

    Add_Info_Included_Components(_Included_Components),

    Add_Info_Item_Dimensions(
        Item_dim_1,
        Item_dim_2,
        Item_dim_3,
        Item_Dimension_unit,
        Item_Dimension_format
    ),

    Add_Info_Product_Dimensions(
        Product_dim_1,
        Product_dim_2,
        Product_dim_3,
        Product_Dimension_unit,
        Product_Dimension_format
    ),

    Add_Info_Weight_Object(
        Weight_Size_value, 
        Weight_size_unit_string),
    
        Add_Info_Net_Quantity(
        Net_Quantity_Value, 
        Net_Quantit_unit_string),
    
        Add_Info_Generic_Name(_Generic_name)
{

};

void Additional_Info::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Additional_Info& Additional_Info_Object){
    
    int j = 0;

    os << "ASIN : "         << Additional_Info_Object.Add_Info_ASIN     << std::endl << std::endl
       << "Manufacturer : " << Additional_Info_Object.Add_Info_Manufacturing_Object  << std::endl << std::endl
       << "Manufacturer Year : " << Additional_Info_Object.Add_Info_Manufacturing_Year << std::endl << std::endl
       
       << "Warranty : ";
       for(const Measurement_and_unit i : Additional_Info_Object.Add_Info_Warranty){
        j = j + 1;
        os << j << ") " << i << std::endl;
       }
       j = 0;
       os << std::endl

       << "Country of Origin : " << Additional_Info_Object.Add_Info_Country_Of_Origin << std::endl
       << "Model Number : " << Additional_Info_Object.Add_Info_Model_Number << std::endl
       << "Reviews : " << Additional_Info_Object.Add_Info_Reviews_Object << std::endl << std::endl
       << "Best Seller Rank : ";
       Additional_Info_Object.printing_vector_string(Additional_Info_Object.Add_Info_Best_Seller_Rank);

       os << std::endl
       << "Date First Available : " << Additional_Info_Object.Add_Info_Date_First_Available << std::endl << std::endl
       
       << "Packer : "       << Additional_Info_Object.Add_Info_Packer_Object << std::endl << std::endl
       << "Importer : "     << Additional_Info_Object.Add_Info_Importer_Object << std::endl << std::endl
       << "Included Components : ";
       Additional_Info_Object.printing_vector_string(Additional_Info_Object.Add_Info_Included_Components);

       os << std::endl
       << "Item Dimensions : " << Additional_Info_Object.Add_Info_Item_Dimensions << std::endl
       << "Product Dimensions : " << Additional_Info_Object.Add_Info_Product_Dimensions << std::endl
       << "Weight : " << Additional_Info_Object.Add_Info_Weight_Object << std::endl
       << "Net Quantity : " << Additional_Info_Object.Add_Info_Net_Quantity << std::endl
       << "Generic Name : ";
       Additional_Info_Object.printing_vector_string(Additional_Info_Object.Add_Info_Generic_Name);

       return os;
}