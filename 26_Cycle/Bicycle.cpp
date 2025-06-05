#include "Bicycle.hpp"

Bicycle::Bicycle(
    std::string _Cycle_name,
    std::string _brand,

    std::initializer_list <Variants> _variants_object,

    std::string _size_chart_name, 
    std::initializer_list <size_guide> _size_guide_object,

    Variants _Age_range_description, 
    std::string _Bike_type,
    std::string _Frame_Material, 
    std::string _Wheel_Material, 
    std::string _Handle_Type, 
    std::string _Material_type, 
    std::string _Suspension_type, 
    std::string _brake_style, 
    std::string _Season, 
    std::string _Outer_Material, 
    std::string _theme, 
    std::string _Seat_material_type, 
    std::string _Assembly_required, 
    std::string _Is_Autographed,
    std::string _Warranty_type, 
    std::string _Skill_level, 
    std::string _Fender_Material, 
    std::string _Department, 
    std::string _Power_Source, 
    std::string _Bicycle_Gear_Shifter_Type, 
    std::string _Item_Part_Number, 

    long long unsigned int _UPC, 

    double Wattage_value,
    std::initializer_list <std::string> Wattage_unit_and_string, 

    double Lithium_Battery_Energy_Content_value,
    std::initializer_list <std::string> Lithium_Battery_Energy_Content_unit_and_string,

    double Wheel_width_value,
    std::initializer_list <std::string> Wheel_width_unit_and_string, 

    double Frame_size_value,
    std::initializer_list <std::string> Frame_size_unit_and_string, 

    double Length_value,
    std::initializer_list <std::string> Length_unit_and_string, 

    double width_value,
    std::initializer_list <std::string> width_unit_and_string, 

    double Height_value,
    std::initializer_list <std::string> Height_unit_and_string, 

    double Speed_rating_value,
    std::initializer_list <std::string> Speed_rating_unit_and_string, 

    double Tire_size_value,
    std::initializer_list <std::string> Tire_size_unit_and_string, 

    double Maximum_weight_recommendations_value,
    std::initializer_list <std::string> Maximum_weight_recommendations_unit_and_string, 
    
    double Minimum_user_height_value,
    std::initializer_list <std::string> Minimum_user_height_unit_and_string, 

    unsigned int _number_of_speeds, 
    unsigned int _number_of_items,

    std::initializer_list <std::string> _Product_description, 
    std::initializer_list <std::string> _Special_features, 
    std::initializer_list <std::string> _Special_Uses_for_Product, 
    std::initializer_list <std::string> _About_this_items,

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
:   Bycle_Cycle_Name(_Cycle_name),
    Bycle_Brand_Name(_brand),

    Bycle_variants_object(_variants_object),

    Bycle_Size_Chart_Name(_size_chart_name),
    Bycle_Size_Guide_Object(_size_guide_object),

    Bycle_Age_Range_Description(_Age_range_description), 
    Bycle_Bike_Type(_Bike_type),
    Bycle_Frame_Material(_Frame_Material), 
    Bycle_Wheel_Material(_Wheel_Material), 
    Bycle_Handle_Type(_Handle_Type), 
    Bycle_Material_type(_Material_type), 
    Bycle_Suspension_Type(_Suspension_type), 
    Bycle_Brake_style(_brake_style), 
    Bycle_Season(_Season), 
    Bycle_Outer_Material(_Outer_Material), 
    Bycle_Theme(_theme), 
    Bycle_Seat_material_type(_Seat_material_type), 
    Bycle_Assembly_required(_Assembly_required), 
    Bycle_Is_Autographed(_Is_Autographed),
    Bycle_Warranty_type(_Warranty_type), 
    Bycle_Skill_level(_Skill_level), 
    Bycle_Fender_Material(_Fender_Material), 
    Bycle_Department(_Department), 
    Bycle_Power_Source(_Power_Source), 
    Bycle_Bicycle_Gear_Shifter_Type(_Bicycle_Gear_Shifter_Type), 
    Bycle_Item_Part_Number(_Item_Part_Number), 

    Bycle_UPC(_UPC), 

    Bycle_Wattage(
        Wattage_value,
        Wattage_unit_and_string), 

    Bycle_Lithium_Battery_Energy_Content(
        Lithium_Battery_Energy_Content_value,
        Lithium_Battery_Energy_Content_unit_and_string),

    Bycle_Wheel_width(
        Wheel_width_value,
        Wheel_width_unit_and_string), 

    Bycle_Frame_size(
        Frame_size_value,
        Frame_size_unit_and_string), 

    Bycle_Length(
        Length_value,
        Length_unit_and_string), 

    Bycle_Width(
        width_value,
        width_unit_and_string), 

        Bycle_Height(
        Height_value,
        Height_unit_and_string), 

        Bycle_Speed_Rating(
        Speed_rating_value,
        Speed_rating_unit_and_string), 

        Bycle_Tire_size(
        Tire_size_value,
        Tire_size_unit_and_string), 

        Bycle_Maximum_weight_recommendations(
        Maximum_weight_recommendations_value,
        Maximum_weight_recommendations_unit_and_string), 

        Bycle_Minimum_user_height(
        Minimum_user_height_value,
        Minimum_user_height_unit_and_string), 

        Bycle_Number_of_speeds(_number_of_speeds), 
        Bycle_Number_of_items(_number_of_items),

        Bycle_Special_features(_Special_features), 
        Bycle_Special_Uses_for_Product(_Special_Uses_for_Product), 
        Bycle_About_this_items(_About_this_items),

        Bycle_Additional_Info_Object(
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

void Bicycle::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Bicycle& Bycle_object){
    os << "PRODUCT DETAILS  :  " << std::endl << std::endl

    << "Cycle Name : " << Bycle_object.Bycle_Cycle_Name << std::endl
    << "Brand Name : " << Bycle_object.Bycle_Brand_Name << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Bycle_object.Bycle_variants_object.begin();

    while(Iter_1 != Bycle_object.Bycle_variants_object.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os 
    << "Size Chart Name : " << Bycle_object.Bycle_Size_Chart_Name << std::endl
    << "Format : Brand Size  |  Rider Height  |  Wheel Size  |  Weight Capacity  |  Frame Size  |  Age  |" << std::endl << std::endl;
    for(const size_guide i : Bycle_object.Bycle_Size_Guide_Object){
        os << i << std::endl;
    }

    std::vector<size_guide>::const_iterator Iter_2 = 
    Bycle_object.Bycle_Size_Guide_Object.begin();

    while(Iter_2 != Bycle_object.Bycle_Size_Guide_Object.end())
    {
        std::cout  << *Iter_2 << std::endl;
        ++Iter_2;
    }
    os
    << std::endl
    
    << Bycle_object.Bycle_Age_Range_Description << std::endl
    << "Bike Type : " << Bycle_object.Bycle_Bike_Type << std::endl
    << "Frame Matrerial : " << Bycle_object.Bycle_Frame_Material << std::endl
    << "Wheel Material : " << Bycle_object.Bycle_Wheel_Material << std::endl
    << "Handle Type : " << Bycle_object.Bycle_Handle_Type << std::endl
    << "Material Type : " << Bycle_object.Bycle_Material_type << std::endl
    << "Suspension Type : " << Bycle_object.Bycle_Suspension_Type << std::endl
    << "Brake Style : " << Bycle_object.Bycle_Brake_style << std::endl
    << "Season : " << Bycle_object.Bycle_Season << std::endl
    << "Outer Material : " << Bycle_object.Bycle_Outer_Material << std::endl
    << "Theme : " << Bycle_object.Bycle_Theme << std::endl
    << "Seat Material Type : " << Bycle_object.Bycle_Seat_material_type << std::endl
    << "Assembly Required : " << Bycle_object.Bycle_Assembly_required << std::endl
    << "Is Autographed : " << Bycle_object.Bycle_Is_Autographed << std::endl
    << "Warranty Type : " << Bycle_object.Bycle_Warranty_type << std::endl
    << "Skill Level : " << Bycle_object.Bycle_Skill_level << std::endl
    << "Fender Material : " << Bycle_object.Bycle_Fender_Material << std::endl
    << "Department : " << Bycle_object.Bycle_Department << std::endl
    << "Power Source : " << Bycle_object.Bycle_Power_Source << std::endl
    << "Bicycle Gear Shifter Type : " << Bycle_object.Bycle_Bicycle_Gear_Shifter_Type << std::endl
    << "Item Part Number : " << Bycle_object.Bycle_Item_Part_Number << std::endl
    << "UPC : " << Bycle_object.Bycle_UPC << std::endl << std::endl

    << "Wattage : " << Bycle_object.Bycle_Wattage << std::endl
    << "Lithium Battery Energy Content : " << Bycle_object.Bycle_Lithium_Battery_Energy_Content << std::endl
    << "Wheel Wdith : " << Bycle_object.Bycle_Wheel_width << std::endl
    << "Frame Size : " << Bycle_object.Bycle_Frame_size << std::endl
    << "Length : " << Bycle_object.Bycle_Length << std::endl
    << "Width : " << Bycle_object.Bycle_Width << std::endl
    << "Height : " << Bycle_object.Bycle_Height << std::endl
    << "Speed Ratings : " << Bycle_object.Bycle_Speed_Rating << std::endl
    << "Tire : " << Bycle_object.Bycle_Tire_size << std::endl
    << "Maximum Weight Recommendations : " << Bycle_object.Bycle_Maximum_weight_recommendations << std::endl
    << "Minimum User Height : " << Bycle_object.Bycle_Minimum_user_height << std::endl
    << "Number of Speeds : " << Bycle_object.Bycle_Number_of_speeds << std::endl
    << "Number of Items : " << Bycle_object.Bycle_Number_of_items << std::endl << std::endl

    << "Product Description : ";
    Bycle_object.printing_vector_string(Bycle_object.Bycle_Product_description);
    os << std::endl << std::endl

    << "Special Features : ";
    Bycle_object.printing_vector_string(Bycle_object.Bycle_Special_features);
    os << std::endl

    << "Special Uses for Product :  ";
    Bycle_object.printing_vector_string(Bycle_object.Bycle_Special_Uses_for_Product);
    os << std::endl

    << "About this Items : ";
    Bycle_object.printing_vector_string(Bycle_object.Bycle_About_this_items);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << Bycle_object.Bycle_Additional_Info_Object;

    return os;
}
