#ifndef _JWELLERY_HPP
#define _JWELLERY_HPP

#include "Additional_Info.hpp"
#include "variants.hpp"
#include <vector>

class Jwellery{

    friend std::ostream& operator<<(std::ostream& os, const Jwellery& Jewels_Object);

    private :
    std::string Jewels_ProductName; 
    std::string Jewels_BrandName; 

    std::vector <Variants> Jewels_VariantsObject; 

    std::string Jewels_ClaspType; 
    std::string Jewels_Theme; 
    std::string Jewels_BackFindings; 
    std::string Jewels_CertificateType; 
    std::string Jewels_Clasp; 
    std::string Jewels_Settings; 
    std::string Jewels_MaterialType; 
    std::string Jewels_ChainType;
    std::string Jewels_GemType; 
    std::string Jewels_Item_Type_Name;
    std::string Jewels_Collection; 
    std::string Jewels_Stone;
    std::string Jewels_StoneShape; 
    std::string Jewels_StoneColour;
    std::string Jewels_StoneClarity; 
    std::string Jewels_Stone_Creation_Method; 
    std::string Jewels_Stone_Treatment_Method; 
    std::string Jewels_MinimumColor; 
    std::string Jewels_MinimumClarity; 
    std::string Jewels_Cut; 
    std::string Jewels_Resizable; 
    std::string Jewels_Metal; 
    std::string Jewels_RingSize;  
    std::string Jewels_Lustre; 
    std::string Jewels_PearlInfo;  
    std::string Jewels_PearlType; 
    std::string Jewels_Surface_Blemishes; 
    std::string Jewels_Departments; 
    std::string Jewels_WarrantyType; 
    std::string Jewels_BIS_Hallamarked; 

    unsigned int Jewels_Number_OF_Stones; 
    
    Measurement_and_unit Jewels_Size_Per_Pearl; 
    Measurement_and_unit Jewels_Purity; 
    Measurement_and_unit Jewels_ItemWidth; 
    Measurement_and_unit Jewels_ItemLength; 
    Measurement_and_unit Jewels_MetalStamp; 
    Measurement_and_unit Jewels_MetalWeight; 
    Measurement_and_unit Jewels_StoneWeight; 
    Measurement_and_unit Jewels_Minimum_Total_Diamond_Weight; 

    std::vector <std::string> Jewels_OcassionType; 
    std::vector <std::string> Jewels_ClosureType; 

    std::vector <std::string> Jewels_About_This_Item;
    std::vector <std::string> Jewels_Product_Description;
    std::vector <std::string> Jewels_From_Manufacturer; 
    std::vector <std::string> Jewels_From_Brand; 
    std::vector <std::string> Jewels_Safety_Information; 
    std::vector <std::string> Jewels_Legal_Disclaimer; 

    Additional_Info Jewels_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Jwellery(
    std::string _product_name, 
    std::string _brand_name, 

    std::initializer_list <Variants> _variants_object,

    std::string _clasp_type, 
    std::string _Theme, 
    std::string _Back_findings, 
    std::string _Certificate_type, 
    std::string _clasp, 
    std::string _settings, 
    std::string _Material_type, 
    std::string _Chain_type, 
    std::string _Gem_type, 
    std::string _item_type_name, 
    std::string _collection, 
    std::string _stone, 
    std::string _stone_shape, 
    std::string _stone_colour, 
    std::string _stone_clarity, 
    std::string _Stone_creation_method, 
    std::string _Stone_treatment_method, 
    std::string _minimum_color, 
    std::string _minimum_clarity, 
    std::string _Cut, 
    std::string _Resizable, 
    std::string _metal, 
    std::string _Ring_Size, 
    std::string _lustre, 
    std::string _Pearl_info, 
    std::string _Pearl_type,
    std::string _Surface_blemishes, 
    std::string _Departments, 
    std::string _Warranty_type, 
    std::string _BIS_Hallamarked, 

    unsigned int _Number_of_stones, 

    std::string Size_pearl_string_object,
    double Size_per_pearl_value,
    std::initializer_list <std::string> Size_per_pearl_unit_and_string, 
    
    double Purity_value,
    std::initializer_list <std::string> Purity_unit_and_string, 
    
    double Item_width_value,
    std::initializer_list <std::string> Item_width_unit_and_string, 
    
    double Item_length_value,
    std::initializer_list <std::string> Item_length_unit_and_string, 
    
    double Metal_stamp_value,
    std::initializer_list <std::string> Metal_stamp_unit_and_string,
    
    double Metal_weight_value,
    std::initializer_list <std::string> Metal_weight_unit_and_string, 
    
    double Stone_weight_value,
    std::initializer_list <std::string> Stone_weight_unit_and_string, 
    
    double minimum_total_diamond_weight_value,
    std::initializer_list <std::string> minimum_total_diamond_weight, 

    std::initializer_list <std::string> _Ocassion_type,
    std::initializer_list <std::string> _Closure_type, 

    std::initializer_list <std::string> _about_this_item,
    std::initializer_list <std::string> _Product_description,
    std::initializer_list <std::string> _From_manufacturer, 
    std::initializer_list <std::string> _From_Brand, 
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _Legal_Disclaimer, 

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
    );
};

#endif /* Jwellery.hpp */
