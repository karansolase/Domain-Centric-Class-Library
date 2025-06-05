#include "helmet.hpp"

Helmet::Helmet(
    std::string _product_name,
    std::string _brand_name, 

    std::vector <Variants> _variants_object,

    std::string _size_chart_name,
    std::initializer_list <size_guide> _size_guide_object,

    std::string _vehicle_service_type, 
    std::string _Age_Range, 
    std::string _certificate_type,
    std::string _finish_type, 
    std::string _league, 
    std::string _exterior, 
    std::string _Safety_ratings, 
    std::string _shell_type, 
    Measurement_and_unit _Specification_met, 
    std::string _Closure_Type, 
    std::string _Batteries_Included, 
    std::string _Department, 
    std::string _sport, 
    std::string _model_name, 

    double Package_Dimensions_first_value, 
    double Package_Dimensions_second_value, 
    double Package_Dimensions_third_value, 
    std::string Package_Dimensions_unit, 
    std::string Package_Dimensions_format,

    std::string _manufacturer_part_number, 
    std::string _Stain_Resistant, 
    std::string _Assembly_Required, 
    unsigned long long int _UPC, 

    unsigned int _Number_of_items, 

    std::vector <std::string> _material, 
    std::vector <std::string> _Shape, 
    std::vector <std::string> _Outer_Material, 
    std::vector <std::string> _Inner_Material, 
    std::vector <std::string> _compatible_vehicles, 

    std::vector <std::string> _Special_Feature,
    std::vector <std::string> _Recommended_Uses_For_Product, 
    std::vector <std::string> _About_this_item, 
    std::vector <std::string> _From_the_manufacturer, 
    std::vector <std::string> _Regulatory_Information, 
    std::vector <std::string> _Product_description, 
    std::vector <std::string> _Legal_Disclaimer,

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
:   Hlmt_Product_Name(_product_name),
    Hlmt_Brand_Name(_brand_name), 

    Hlmt_Variants_Object(_variants_object),

    Hlmt_Size_Chart_Name(_size_chart_name),
    Hlmt_Size_Guide_Object(_size_guide_object), 

    Hlmt_Vehicle_Service_Type(_vehicle_service_type), 
    Hlmt_Age_Range(_Age_Range), 
    Hlmt_Certificate_Type(_certificate_type),
    Hlmt_Finish_Type(_finish_type), 
    Hlmt_League(_league), 
    Hlmt_Exterior(_exterior), 
    Hlmt_Safety_Ratings(_Safety_ratings), 
    Hlmt_Shell_Type(_shell_type), 
    Hlmt_Specification_met(_Specification_met), 
    Hlmt_Closure_Type(_Closure_Type), 
    Hlmt_Batteries_Included(_Batteries_Included), 
    Hlmt_Department(_Department), 
    Hlmt_Sport(_sport), 
    Hlmt_Model_Name(_model_name), 
    
    Hlmt_Package_Dimensions(
        Package_Dimensions_first_value,
        Package_Dimensions_second_value,
        Package_Dimensions_third_value,
        Package_Dimensions_unit,
        Package_Dimensions_format), 
    
    Hlmt_Manufacturer_part_number(_manufacturer_part_number), 
    Hlmt_Stain_Resistant(_Stain_Resistant), 
    Hlmt_Assembly_Required(_Assembly_Required), 
    Hlmt_UPC(_UPC), 

    Hlmt_Number_of_items(_Number_of_items), 

    Hlmt_Material(_material), 
    Hlmt_Shape(_Shape),
    Hlmt_Outer_Material(_Outer_Material), 
    Hlmt_Inner_Material(_Inner_Material), 
    Hlmt_Compatible_Vehicles(_compatible_vehicles), 

    Hlmt_Special_Feature(_Special_Feature),
    Hlmt_Recommended_Uses_For_Product(_Recommended_Uses_For_Product), 
    Hlmt_About_this_item(_About_this_item), 
    Hlmt_From_the_manufacturer(_From_the_manufacturer), 
    Hlmt_Regulatory_Information(_Regulatory_Information), 
    Hlmt_Product_description(_Product_description), 
    Hlmt_Legal_Disclaimer(_Legal_Disclaimer),

    Hlmt_Additional_Info_Object(
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

void Helmet::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Helmet& Hlmt_Object)
{
    os << "PRODUCT DETAILS   : " << std::endl << std::endl

    << "Product Name : " << Hlmt_Object.Hlmt_Product_Name << std::endl
    << "Brand Name : " << Hlmt_Object.Hlmt_Brand_Name << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Hlmt_Object.Hlmt_Variants_Object.begin();

    while(Iter_1 != Hlmt_Object.Hlmt_Variants_Object.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os

    << std::endl
    << "Size Chart Name : " << Hlmt_Object.Hlmt_Size_Chart_Name << std::endl
    << "Format : Brand Size  |  Head Circumference  |  Hat Size  |  Age  |" << std::endl << std::endl;

    std::vector<size_guide>::const_iterator Iter_2 = 
    Hlmt_Object.Hlmt_Size_Guide_Object.begin();

    while(Iter_2 != Hlmt_Object.Hlmt_Size_Guide_Object.end())
    {
        std::cout << *Iter_2 << std::endl;
        ++Iter_2;
    }

    os
    << "Vehicle Service Type : " << Hlmt_Object.Hlmt_Vehicle_Service_Type << std::endl
    << "Age Range : " << Hlmt_Object.Hlmt_Age_Range << std::endl
    << "Ceritficate Type : " << Hlmt_Object.Hlmt_Certificate_Type << std::endl
    << "Finish Type : " << Hlmt_Object.Hlmt_Finish_Type << std::endl
    << "League : " << Hlmt_Object.Hlmt_League << std::endl
    << "Exterior : " << Hlmt_Object.Hlmt_Exterior << std::endl
    << "Safety Ratings : " << Hlmt_Object.Hlmt_Safety_Ratings << std::endl
    << "Shell Type : " << Hlmt_Object.Hlmt_Shell_Type << std::endl
    << "Specification Met : " << Hlmt_Object.Hlmt_Specification_met << std::endl
    << "Closure Type : " << Hlmt_Object.Hlmt_Closure_Type << std::endl
    << "Batteries Included : " << Hlmt_Object.Hlmt_Batteries_Included << std::endl
    << "Department : " << Hlmt_Object.Hlmt_Department << std::endl
    << "Sport : " << Hlmt_Object.Hlmt_Sport << std::endl
    << "Model Name : " << Hlmt_Object.Hlmt_Model_Name << std::endl
    << "Package Dimensions : " << Hlmt_Object.Hlmt_Package_Dimensions << std::endl
    << "Manufacturer Part Number : " << Hlmt_Object.Hlmt_Manufacturer_part_number << std::endl
    << "Stain Resistant : " << Hlmt_Object.Hlmt_Stain_Resistant << std::endl
    << "Assembly Required : " << Hlmt_Object.Hlmt_Assembly_Required << std::endl
    << "UPC : " << Hlmt_Object.Hlmt_UPC << std::endl
    << "Number of Items : " << Hlmt_Object.Hlmt_Number_of_items << std::endl << std::endl

    << "Material : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Material);
    os << std::endl

    << "Shape : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Shape);
    os << std::endl

    << "Outer Material : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Outer_Material);
    os << std::endl

    << "Inner Material : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Inner_Material);
    os << std::endl

    << "Compatible Devices : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Compatible_Vehicles);
    os << std::endl

    << "Special Features : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Special_Feature);
    os << std::endl

    << "Recommended USes for Product : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Recommended_Uses_For_Product);
    os << std::endl

    << "About this Item : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_About_this_item);
    os << std::endl

    << "From the Manufacturer : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_From_the_manufacturer);
    os << std::endl

    << "Regulatory Information : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Regulatory_Information);
    os << std::endl

    << "Product Description : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Product_description);
    os << std::endl

    << "Legal Disclaimer : ";
    Hlmt_Object.printing_vector_string(Hlmt_Object.Hlmt_Legal_Disclaimer);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << Hlmt_Object.Hlmt_Additional_Info_Object << std::endl;

    return os;
}


