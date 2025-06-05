#include "General_groceries_details.hpp"
#include <typeinfo>

General_Groceries_Details::General_Groceries_Details(
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
    unsigned long long int   _UPC 
)
:   GGD_USE_by(_USE_by),

    GGD_Speciality(_Speciality),
    GGD_Variety(_Variety),
    GGD_Flavours(_Flavours),
    GGD_Item_form(_Item_form),
    GGD_Diet_type(_Diet_type),
    GGD_Storage_Instructions(_Storage_Instructions),
    GGD_Cuisine(_Cuisine),
    GGD_Additives(_Additives),
    GGD_Ingredients_type(_Ingredients_type),

    GGD_Allergen_Info(_Allergen_Info),
    GGD_Package_info_or_type(_Package_info),
    GGD_Region_Produced_in(_Region_Produced_in),
    GGD_Produce_sold_as(_Produce_sold_as),
    GGD_Part_number(_Part_number),

    GGD_Certification(_Certification),

    GGD_Appropriate_Age_Range_description(
        Appropriate_Age_Range_description_value,
        Appropriate_Age_Range_description_unit_and_string),

    GGD_Package_Weight(
        Package_Weight_value,
        Package_Weight_unit_and_string),

    GGD_Serving_size(
        Serving_size_value,
        Serving_size_unit_and_string),

    GGD_Energy(
        Energy_value,
        Energy_unit_and_string),

    GGD_Protein(
        Protein_value,
        Protein_unit_and_string),

    GGD_Fat(
        Fat_value,
        Fat_unit_and_string),

    GGD_Carbohydrate(
        Carbohydrate_value,
        Carbohydrate_unit_and_string),

    GGD_Sugar(
        Sugar_value,
        Sugar_unit_and_string),

    GGD_Item_volume(
        Item_volume_value,
        Item_volume_unit_and_string),

    GGD_net_content_volume(_net_content_volume),

    GGD_Ingredients(_Ingredients),
    GGD_About_this_item(_About_this_item),
    GGD_Product_description(_Product_description),
    GGD_Recommended_uses_for_product(_Recommended_uses_for_product),
    GGD_From_manufacturer(_From_manufacturer),
    GGD_From_brand(_From_brand),
    GGD_Saftey_info(_Saftey_info),
    GGD_Directions(_Directions), 
    GGD_Legal_Disclaimer(_Legal_Disclaimer),

    GGD_number_of_pieces(_number_of_pieces), 
    GGD_number_of_items(_number_of_items),
    GGD_Global_trade_identification_number(_Global_trade_identification_number), 
    GGD_UPC(_UPC)
{

}

void General_Groceries_Details::printing_vector_string(std::vector <std::string> string_vector_object)const{
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

void General_Groceries_Details::Show_General_Groceries_Details() const{
    std::cout 
    << "USE By : " << GGD_USE_by << std::endl << std::endl

    << "Speciality : ";
    printing_vector_string(GGD_Speciality);
    std::cout << std::endl

    << "Variety : ";
    printing_vector_string(GGD_Variety);
    std::cout << std::endl

    << "Flavours : ";
    printing_vector_string(GGD_Flavours);
    std::cout << std::endl

    << "Diet Type : ";
    printing_vector_string(GGD_Diet_type);
    std::cout << std::endl

    << "Storage Instructions : ";
    printing_vector_string(GGD_Storage_Instructions);
    std::cout << std::endl

    << "Cusine : ";
    printing_vector_string(GGD_Cuisine);
    std::cout << std::endl

    << "Additives : ";
    printing_vector_string(GGD_Additives);
    std::cout << std::endl

    << "Ingredients Type : ";
    printing_vector_string(GGD_Ingredients_type);
    std::cout << std::endl

    << "Item Form : " << GGD_Item_form << std::endl
    << "Allergen Information : " << GGD_Allergen_Info << std::endl
    << "Package Information (type) : " << GGD_Package_info_or_type << std::endl
    << "Region Produced in : " << GGD_Region_Produced_in << std::endl
    << "Produce Sold As : " << GGD_Produce_sold_as << std::endl
    << "Part Number : " << GGD_Part_number << std::endl

    << "Certification : " << GGD_Certification << std::endl << std::endl

    << "Appropriate Age Range Description : " << GGD_Appropriate_Age_Range_description << std::endl
    << "Package Weight : " << GGD_Package_Weight << std::endl

    << "Serving Size : " << GGD_Serving_size << std::endl
    << "Energy : " << GGD_Energy << std::endl
    << "Protein : " << GGD_Protein << std::endl
    << "Fat : " << GGD_Fat << std::endl
    << "Carbhohydrate : " << GGD_Carbohydrate << std::endl
    << "Sugar : " << GGD_Sugar << std::endl
    << "Item Volume : " << GGD_Item_volume << std::endl << std::endl;

    int j = 0;
    std::cout << "Net Content Volume : ";
    for(const Measurement_and_unit i : GGD_net_content_volume){
        j = j + 1;
        std::cout << j << ") " << i << std::endl;
    }
    std::cout << std::endl;

    j = 0;
    std::cout << "Ingredients : ";
    for(const Variant_Info i : GGD_Ingredients){
        j = j + 1;
        std::cout << j << ") " << i << std::endl;
    }
    std::cout << std::endl

    << "About this Item : ";
    printing_vector_string(GGD_About_this_item);
    std::cout << std::endl

    << "Product Description : ";
    printing_vector_string(GGD_Product_description);
    std::cout << std::endl

    << "Recommended Uses for Product : ";
    printing_vector_string(GGD_Recommended_uses_for_product);
    std::cout << std::endl

    << "From Manufacturer : ";
    printing_vector_string(GGD_From_manufacturer);
    std::cout << std::endl

    << "From Brand : ";
    printing_vector_string(GGD_From_brand);
    std::cout << std::endl

    << "Safety Information : ";
    printing_vector_string(GGD_Saftey_info);
    std::cout << std::endl

    << "Directions : ";
    printing_vector_string(GGD_Directions);
    std::cout << std::endl

    << "Legal Disclaimer : ";
    printing_vector_string(GGD_Legal_Disclaimer);
    std::cout << std::endl

    << "Number of Pieces : " << GGD_number_of_pieces << std::endl
    << "Number of Items : " << GGD_number_of_items << std::endl
    << "Global Trade Identification Number : " << GGD_Global_trade_identification_number << std::endl
    << "UPC : " << GGD_UPC << std::endl;
}