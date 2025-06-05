#include "jwellery.hpp"

Jwellery::Jwellery(
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
)
:   Jewels_ProductName(_product_name), 
    Jewels_BrandName(_brand_name),

    Jewels_VariantsObject(_variants_object), 

    Jewels_ClaspType(_clasp_type),
    Jewels_Theme(_Theme),
    Jewels_BackFindings(_Back_findings), 
    Jewels_CertificateType(_Certificate_type),
    Jewels_Clasp(_clasp), 
    Jewels_Settings(_settings), 
    Jewels_MaterialType(_Material_type), 
    Jewels_ChainType(_Chain_type), 
    Jewels_GemType(_Gem_type), 
    Jewels_Item_Type_Name(_item_type_name), 
    Jewels_Collection(_collection), 
    Jewels_Stone(_stone), 
    Jewels_StoneShape(_stone_shape), 
    Jewels_StoneColour(_stone_colour), 
    Jewels_StoneClarity(_stone_clarity), 
    Jewels_Stone_Creation_Method(_Stone_creation_method), 
    Jewels_Stone_Treatment_Method(_Stone_treatment_method), 
    Jewels_MinimumColor(_minimum_color),
    Jewels_MinimumClarity(_minimum_clarity),
    Jewels_Cut(_Cut), 
    Jewels_Resizable(_Resizable), 
    Jewels_Metal(_metal), 
    Jewels_RingSize(_Ring_Size),
    Jewels_Lustre(_lustre),
    Jewels_PearlInfo(_Pearl_info), 
    Jewels_PearlType(_Pearl_type), 
    Jewels_Surface_Blemishes(_Surface_blemishes), 
    Jewels_Departments(_Departments), 
    Jewels_WarrantyType(_Warranty_type), 
    Jewels_BIS_Hallamarked(_BIS_Hallamarked), 

    Jewels_Number_OF_Stones(_Number_of_stones), 

    Jewels_Size_Per_Pearl(
        Size_pearl_string_object,
        Size_per_pearl_value,
        Size_per_pearl_unit_and_string), 

    Jewels_Purity(
        Purity_value,
        Purity_unit_and_string), 

    Jewels_ItemWidth(
        Item_width_value,
        Item_width_unit_and_string), 

    Jewels_ItemLength(
        Item_length_value,
        Item_length_unit_and_string), 

    Jewels_MetalStamp(
        Metal_stamp_value,
        Metal_stamp_unit_and_string), 

    Jewels_MetalWeight(
        Metal_weight_value,
        Metal_weight_unit_and_string), 

     Jewels_StoneWeight(
        Stone_weight_value,
        Stone_weight_unit_and_string), 

    Jewels_Minimum_Total_Diamond_Weight(
        minimum_total_diamond_weight_value,
        minimum_total_diamond_weight), 

    Jewels_OcassionType(_Ocassion_type), 
    Jewels_ClosureType(_Closure_type), 

    Jewels_About_This_Item(_about_this_item), 
    Jewels_Product_Description(_Product_description),
    Jewels_From_Manufacturer(_From_manufacturer),
    Jewels_From_Brand(_From_Brand), 
    Jewels_Safety_Information(_Safety_information), 
    Jewels_Legal_Disclaimer(_Legal_Disclaimer), 

    Jewels_Additional_Info(
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

void Jwellery::printing_vector_string(std::vector <std::string> string_vector_object) const
{
    int j = 0;
    for(const std::string i : string_vector_object)
    {
        j = j + 1;
        if(i == "" && j == 1){
            std::cout << std::endl;
            break;
        }

        std::cout << j << ") " << i << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Jwellery& Jewels_Object)
{
    os << "PRODUCT DETAILS : " << std::endl << std::endl

    << "Product Name : " << Jewels_Object.Jewels_ProductName << std::endl
    << "Brand Name : " << Jewels_Object.Jewels_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Jewels_Object.Jewels_VariantsObject.begin();

    while(Iter_1 != Jewels_Object.Jewels_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os << std::endl

    << "Clasp Type : " << Jewels_Object.Jewels_ClaspType << std::endl
    << "Theme : " << Jewels_Object.Jewels_Theme << std::endl
    << "Back Findings : " << Jewels_Object.Jewels_BackFindings << std::endl
    << "Certificate Type : " << Jewels_Object.Jewels_CertificateType << std::endl
    << "Clasp : " << Jewels_Object.Jewels_Clasp << std::endl
    << "Settings : " << Jewels_Object.Jewels_Settings << std::endl
    << "Material Type : " << Jewels_Object.Jewels_MaterialType << std::endl
    << "Chain Type : " << Jewels_Object.Jewels_ChainType << std::endl
    << "Gem Type : " << Jewels_Object.Jewels_GemType << std::endl
    << "Item Type Name : " << Jewels_Object.Jewels_Item_Type_Name << std::endl
    << "Collection : " << Jewels_Object.Jewels_Collection <<  std::endl
    << "Stone : " << Jewels_Object.Jewels_Stone << std::endl
    << "Stone Shape : " << Jewels_Object.Jewels_StoneShape << std::endl
    << "Stone Colour : " << Jewels_Object.Jewels_StoneColour << std::endl
    << "Stone Clarity : " << Jewels_Object.Jewels_StoneClarity << std::endl
    << "Stone Creation Method : " << Jewels_Object.Jewels_Stone_Creation_Method << std::endl
    << "Stone Treatment Method : " << Jewels_Object.Jewels_Stone_Treatment_Method << std::endl
    << "Minimum Colour : " << Jewels_Object.Jewels_MinimumColor << std::endl
    << "Minimum Clarity : " << Jewels_Object.Jewels_MinimumClarity << std::endl
    << "Cut : " << Jewels_Object.Jewels_Cut << std::endl
    << "Resizable : " << Jewels_Object.Jewels_Resizable << std::endl
    << "Metal : " << Jewels_Object.Jewels_Metal << std::endl
    << "Ring Size : " << Jewels_Object.Jewels_RingSize << std::endl
    << "Lustre : " << Jewels_Object.Jewels_Lustre << std::endl
    << "Pearl Information : " << Jewels_Object.Jewels_PearlInfo << std::endl
    << "Pearl Type : " << Jewels_Object.Jewels_PearlType << std::endl
    << "Surface Blemishes : " << Jewels_Object.Jewels_Surface_Blemishes << std::endl
    << "Departments : " << Jewels_Object.Jewels_Departments << std::endl
    << "Warranty Type : " << Jewels_Object.Jewels_WarrantyType << std::endl
    << "BIS Hallamarked : " << Jewels_Object.Jewels_BIS_Hallamarked << std::endl << std::endl

    << "Number of Stones : " << Jewels_Object.Jewels_Number_OF_Stones << std::endl << std::endl

    << "Size per Pearl : " << Jewels_Object.Jewels_Size_Per_Pearl << std::endl
    << "Purity : " << Jewels_Object.Jewels_Purity << std::endl
    << "Item Width : " << Jewels_Object.Jewels_ItemWidth << std::endl
    << "Item length : " << Jewels_Object.Jewels_ItemLength << std::endl
    << "Metal Stamp : " << Jewels_Object.Jewels_MetalStamp << std::endl
    << "Metal Weight : " << Jewels_Object.Jewels_MetalWeight << std::endl
    << "Stone Weight : " << Jewels_Object.Jewels_StoneWeight << std::endl
    << "Minimum Total Diamond Weight : " << Jewels_Object.Jewels_Minimum_Total_Diamond_Weight << std::endl << std::endl

    << "Ocassion Type : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_OcassionType);
    os << std::endl

    << "Closure Type : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_ClosureType);
    os << std::endl

    << "About this Item : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_About_This_Item);
    os << std::endl

    << "Product Description : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_Product_Description);
    os << std::endl

    << "From Manfacturer : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_From_Manufacturer);
    os << std::endl

    << "From Brand : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_From_Brand);
    os << std::endl

    << "Safety Information : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_Safety_Information);
    os << std::endl

    << "Legal Disclaimer : ";
    Jewels_Object.printing_vector_string(Jewels_Object.Jewels_Legal_Disclaimer);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << Jewels_Object.Jewels_Additional_Info;

    return os;
}