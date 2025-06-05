#include "CHair.hpp"

Chair::Chair(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _variants_object, 

    std::string _type,
    std::string _back_style, 
    std::string _seat_material_type, 
    std::string _top_material, 
    std::string _frame_material,
    std::string _finish_type, 
    std::string _age_range_description,
    std::string _arm_style, 
    std::string _cartoon_character, 
    std::string _installation, 
    std::string _indoor_or_outdoor_usage, 
    std::string _fill_material, 
    std::string _furniture_finish,
    std::string _internal_frame, 
    std::string _neck_or_head_pillow, 
    std::string _Seat,
    std::string _Design, 
    std::string _lumber_support, 
    std::string _Extendable_footrest, 
    std::string _foam, 
    std::string _mechanism, 
    std::string _wheel_base, 
    std::string _lumbar_pillow, 

    double Recliner_degree_value,
    std::initializer_list <std::string> Recliner_degree_unit_string, 

    double Armrest_value,
    std::initializer_list <std::string> Armrest_unit_string, 
    
    double maximum_weight_recommendations_or_limit_value,
    std::initializer_list <std::string> maximum_weight_recommendations_or_limit_unit_string, 
    
    double seat_length_value, 
    std::initializer_list <std::string> seat_length_unit_string, 
    
    double seat_height_value,
    std::initializer_list <std::string> seat_height_unit_string, 
    
    double seat_width_value,
    std::initializer_list <std::string> seat_width_unit_string, 
    
    double seat_depth_value,
    std::initializer_list <std::string> seat_depth_unit_string, 
    
    double seat_back_interior_height_value,
    std::initializer_list <std::string> seat_back_interior_height_unit_string, 
    
    double chair_backrest_width_value,
    std::initializer_list <std::string> chair_backrest_width_unit_string, 
    
    double shipping_weight_value,
    std::initializer_list <std::string> shipping_weight_unit_string, 
    
    double floor_to_seat_height_value,
    std::initializer_list <std::string> floor_to_seat_height_unit_string, 

    std::string _furniture_base_movement,
    std::string _theme, 
    std::string _feet_material, 
    std::string _furniture_leg_material, 
    std::string _footboard_upholstery, 
    std::string _upholstery_material, 
    std::string _cushion_style, 
    std::string _shape,
    std::string _leg_style, 
    std::string _form_factor, 
    std::string _is_customisable, 
    std::string _is_foldable,
    std::string _warranty_type, 
    std::string _is_assemblly_required, 
    std::string _assembly_type, 
    std::string _type_of_wood,
    std::string _Tilting, 
    std::string _storage_Availability, 
    std::string _locking_mechanism, 
    std::string _pillow_type, 
    std::string _cover_material, 
    std::string _item_firmness_description, 
    std::string _fabric_type, 
    Variants _Capacity,
    std::string _publisher_code, 
    unsigned long long int _global_identification_number, 
    unsigned long long int _UPC, 
    
    unsigned int _Reclining_Position_Count, 
    unsigned int _Number_of_Height_Positions, 
    unsigned int _seating_capacity, 
    unsigned int _Number_of_pieces, 
    unsigned int _Included_throw_quantity, 
    unsigned int _Number_of_shelves, 
    unsigned int _Maximum_number_of_compatible_seats, 

    std::initializer_list <std::string> _room_type, 
    std::initializer_list <std::string> _material, 
    std::initializer_list <std::string> _Surface_recommendation, 
    std::initializer_list <std::string> _mattress_comfort, 
    std::initializer_list <std::string> _primary_material, 

    std::initializer_list <std::string> _Special_features, 
    std::initializer_list <std::string> _Additional_features, 
    std::initializer_list <std::string> _About_this_item, 
    std::initializer_list <std::string> _product_description, 
    std::initializer_list <std::string> _Recommended_uses_for_product, 
    std::initializer_list <std::string> _product_care_instructions, 
    std::initializer_list <std::string> _safety_information, 
    std::initializer_list <std::string> _legal_disclaimer, 
    std::initializer_list <std::string> _Directions, 

    std::string _Is_Discontined_By_Manufacturer, 
    
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
:   CHAIR_ProductName(_product_name),
    CHAIR_BrandName(_brand_name),

    CHAIR_VariantsObject(_variants_object),

    CHAIR_Type(_type),
    CHAIR_SeatMaterialType(_seat_material_type), 
    CHAIR_ArmStyle(_arm_style), 
    CHAIR_CartoonCharacter(_cartoon_character), 
    CHAIR_Indoor_OR_OutdoorUsage(_indoor_or_outdoor_usage), 
    CHAIR_FillMaterial(_fill_material), 
    CHAIR_InternalFrame(_internal_frame),
    CHAIR_Neck_OR_HeadPillow(_neck_or_head_pillow),
    CHAIR_Seat(_Seat),
    CHAIR_Design(_Design),
    CHAIR_LumberSupport(_lumber_support),
    CHAIR_Extendable_Footrest(_Extendable_footrest),
    CHAIR_Foam(_foam),
    CHAIR_Mechanism(_mechanism),
    CHAIR_WheelBase(_wheel_base),
    CHAIR_LumbarPillow(_lumbar_pillow),

    CHAIR_Recliner_Degree(
        Recliner_degree_value,
        Recliner_degree_unit_string),
        
        CHAIR_Armrest(
            Armrest_value,
            Armrest_unit_string),
            
            CHAIR_Maximum_weight_Recommendations_OR_Limit(
                maximum_weight_recommendations_or_limit_value,
                maximum_weight_recommendations_or_limit_unit_string), 
    
        CHAIR_SeatLength(
        seat_length_value, 
        seat_length_unit_string), 
    
        CHAIR_SeatWidth(
        seat_width_value,
        seat_width_unit_string), 
    
        CHAIR_BackrestWidth(
        chair_backrest_width_value,
        chair_backrest_width_unit_string), 
    
        CHAIR_Floor_TO_SeatHeight(
        floor_to_seat_height_value,
        floor_to_seat_height_unit_string), 

    CHAIR_Furniture_BaseMovement(_furniture_base_movement),
    CHAIR_FeetMaterial(_feet_material), 
    CHAIR_FurnitureLegMaterial(_furniture_leg_material), 
    CHAIR_CushionStyle(_cushion_style), 
    CHAIR_LegStyle(_leg_style), 
    CHAIR_FormFactor(_form_factor), 
    CHAIR_Is_Foldable(_is_foldable),
    CHAIR_WarrantyType(_warranty_type), 
    CHAIR_Tilting(_Tilting), 
    CHAIR_Locking_Mechanism(_locking_mechanism), 
    CHAIR_PillowType(_pillow_type), 
    CHAIR_CoverMaterial(_cover_material), 
    CHAIR_FabricType(_fabric_type),
    CHAIR_Capacity(_Capacity),
    CHAIR_PublisherCode(_publisher_code), 
    CHAIR_Global_IdentificationNumber(_global_identification_number), 
    CHAIR_UPC(_UPC), 
    
    CHAIR_Reclining_Position_Count(_Reclining_Position_Count), 
    CHAIR_Number_of_Height_Positions(_Number_of_Height_Positions), 
    CHAIR_Seating_Capacity(_seating_capacity), 
    CHAIR_Included_ThrowQuantity(_Included_throw_quantity), 
    CHAIR_Maximum_Number_OF_CompatibleSeats(_Maximum_number_of_compatible_seats), 
    
    CHAIR_Surface_Recommendation(_Surface_recommendation), 
    
    CHAIR_Special_Features(_Special_features), 
    CHAIR_Additional_Features(_Additional_features), 
    CHAIR_About_This_Item(_About_this_item), 
    CHAIR_Product_Description(_product_description), 
    CHAIR_Recommended_Uses_For_Product(_Recommended_uses_for_product), 
    CHAIR_Product_Care_Instructions(_product_care_instructions), 
    CHAIR_Safety_Information(_safety_information), 
    CHAIR_Legal_Disclaimer(_legal_disclaimer), 
    CHAIR_Directions(_Directions), 
    
    CHAIR_Is_Discontined_By_Manufacturer(_Is_Discontined_By_Manufacturer), 
    
    General_Furniture_Details(
        _back_style, 
        _finish_type, 
        _shape,
        _publisher_code, 
        _furniture_finish,
        _installation, 
        _is_customisable, 
        _top_material, 
        _type_of_wood,
        _is_assemblly_required, 
        _frame_material,
        _assembly_type, 
        _storage_Availability, 
        _footboard_upholstery, 
        _age_range_description,
        _theme, 
        _upholstery_material, 
        _item_firmness_description, 
        
        _Number_of_shelves, 
        _Number_of_pieces, 
    
        seat_height_value,
        seat_height_unit_string, 

        seat_depth_value,
        seat_depth_unit_string, 
    
        seat_back_interior_height_value,
        seat_back_interior_height_unit_string, 
    
        shipping_weight_value,
        shipping_weight_unit_string,

        _room_type, 
        _material, 
        _mattress_comfort, 
        _primary_material
    ),
    
    CHAIR_Additional_Info_Object(
        _ASIN,

        Manufacturing_Object,
        _Manufacturing_Year,

        _Warranty,

        _Country_Of_Origin,
        _Model_Number,

        _Ratings, _Reviews,

        _Best_Seller_Rank,

        _Date_First_Available,

        Packer_Object, Importer_Object,

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

void Chair::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Chair& Chair_Object){
    os << "PRODUCT DETAILS : " << std::endl << std::endl

    << "Product Name : " << Chair_Object.CHAIR_ProductName << std::endl
    << "Brand Name : " << Chair_Object.CHAIR_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Chair_Object.CHAIR_VariantsObject.begin();

    while(Iter_1 != Chair_Object.CHAIR_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os 

    << "Type : " << Chair_Object.CHAIR_Type << std::endl
    << "Back Style : " << Chair_Object.GFD_BackStyle << std::endl
    << "Seat Material Type : " << Chair_Object.CHAIR_SeatMaterialType << std::endl
    << "Top Material : " << Chair_Object.GFD_TopMaterial << std::endl
    << "Frame Material : " << Chair_Object.GFD_FrameMaterial << std::endl
    << "Finish Type : " << Chair_Object.GFD_FinishType << std::endl
    << "Age Range Description : " << Chair_Object.GFD_AgRangeDescription << std::endl
    << "Arm Style : " << Chair_Object.CHAIR_ArmStyle << std::endl
    << "Cartoon Character : " << Chair_Object.CHAIR_CartoonCharacter << std::endl
    << "Installation : " << Chair_Object.GFD_InstallationType << std::endl
    << "Indoor / Outdoor Usage : " << Chair_Object.CHAIR_Indoor_OR_OutdoorUsage << std::endl
    << "Fill Material : " << Chair_Object.CHAIR_FillMaterial << std::endl
    << "Furniture Finish : " << Chair_Object.GFD_FurnitureFinish << std::endl 
    << "Internal Frame : " << Chair_Object.CHAIR_InternalFrame << std::endl
    << "Neck or Head Pillow : " << Chair_Object.CHAIR_Neck_OR_HeadPillow << std::endl
    << "Seat : " << Chair_Object.CHAIR_Seat << std::endl
    << "Design : " << Chair_Object.CHAIR_Design << std::endl
    << "Lumber Support : " << Chair_Object.CHAIR_LumberSupport << std::endl
    << "Extendable Forest : " << Chair_Object.CHAIR_Extendable_Footrest << std::endl
    << "Foam : " << Chair_Object.CHAIR_Foam << std::endl
    << "Mechanism : " << Chair_Object.CHAIR_Mechanism << std::endl
    << "Wheel Base : " << Chair_Object.CHAIR_WheelBase << std::endl
    << "Lumber Pillow : " << Chair_Object.CHAIR_LumbarPillow << std::endl << std::endl

    << "Recliner Degree : " << Chair_Object.CHAIR_Recliner_Degree << std::endl
    << "Armrest : " << Chair_Object.CHAIR_Armrest << std::endl
    << "Maximum Weight Recommendations or Limit : " << Chair_Object.CHAIR_Maximum_weight_Recommendations_OR_Limit << std::endl
    << "Seat Length : " << Chair_Object.CHAIR_SeatLength << std::endl
    << "Seat Height : " << Chair_Object.GFD_SeatHeight << std::endl
    << "Seat Width : " << Chair_Object.CHAIR_SeatWidth << std::endl
    << "Seat Depth : " << Chair_Object.GFD_SeatDepth << std::endl
    << "Seat Back Interior Height : " << Chair_Object.GFD_SeatBack_InteriorHeight << std::endl
    << "Chair Backrest Width : " << Chair_Object.CHAIR_BackrestWidth << std::endl
    << "Shipping Weight : " << Chair_Object.GFD_ShippingWeight << std::endl
    << "Floor To seat height : " << Chair_Object.CHAIR_Floor_TO_SeatHeight << std::endl << std::endl

    << "Furniture Base Movement : " << Chair_Object.CHAIR_Furniture_BaseMovement << std::endl
    << "Theme : " << Chair_Object.GFD_Theme << std::endl
    << "Feet Material : " << Chair_Object.CHAIR_FeetMaterial << std::endl
    << "Furniture Leg Material : " << Chair_Object.CHAIR_FurnitureLegMaterial << std::endl
    << "FootBoard Upholstery : " << Chair_Object.GFD_FootBoard_Upholstery << std::endl
    << "Cushion Style : " << Chair_Object.CHAIR_CushionStyle << std::endl
    << "Shape : " << Chair_Object.GFD_Shape << std::endl
    << "Leg Style : " << Chair_Object.CHAIR_LegStyle << std::endl
    << "Form Factor : " << Chair_Object.CHAIR_FormFactor << std::endl
    << "Is Customisable : " << Chair_Object.GFD_Is_Customizable << std::endl
    << "Is Foldable : " << Chair_Object.CHAIR_Is_Foldable << std::endl
    << "Warranty Type : " << Chair_Object.CHAIR_WarrantyType << std::endl
    << "Is Assembly Required : " << Chair_Object.GFD_Assembly_Required << std::endl
    << "Assembly Type : " << Chair_Object.GFD_AssemblyType << std::endl
    << "Type of Wood : " << Chair_Object.GFD_TYpeOFWood << std::endl
    << "Tilting : " << Chair_Object.CHAIR_Tilting << std::endl
    << "Storage Availability : " << Chair_Object.GFD_StorageAvailability << std::endl
    << "Locking Mechanism : " << Chair_Object.CHAIR_Locking_Mechanism << std::endl
    << "Pillow Type : " << Chair_Object.CHAIR_PillowType << std::endl
    << "Cover Material : " << Chair_Object.CHAIR_CoverMaterial << std::endl
    << "Item Firmness Description : " << Chair_Object.GFD_ItemFirmnessDescription << std::endl
    << "Fabric Type : " << Chair_Object.CHAIR_FabricType << std::endl
    << Chair_Object.CHAIR_Capacity << std::endl
    << "Global Identification Number : " << Chair_Object.CHAIR_Global_IdentificationNumber << std::endl
    << "UPC : " << Chair_Object.CHAIR_UPC << std::endl << std::endl

    << "Reclining Position Count : " << Chair_Object.CHAIR_Reclining_Position_Count << std::endl
    << "Number of Height Position : " << Chair_Object.CHAIR_Number_of_Height_Positions << std::endl
    << "Seating Capacity : " << Chair_Object.CHAIR_Seating_Capacity << std::endl
    << "Number of Pieces : " << Chair_Object.GFD_NumberOfPieces << std::endl
    << "Included Throw Quantity : " << Chair_Object.CHAIR_Included_ThrowQuantity << std::endl
    << "Number of Shelves : " << Chair_Object.GFD_NumberOfShelves << std::endl
    << "Maximum Number Compatible Seats : " << Chair_Object.CHAIR_Maximum_Number_OF_CompatibleSeats << std::endl << std::endl

    << "Room Type : ";
    Chair_Object.printing_vector_string(Chair_Object.GFD_RoomType);
    os << std::endl

    << "Material : ";
    Chair_Object.printing_vector_string(Chair_Object.GFD_Material);
    os << std::endl

    << "Surface Recommendations : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Surface_Recommendation);
    os << std::endl

    << "Mattress Comfort : ";
    Chair_Object.printing_vector_string(Chair_Object.GFD_MattressComfort);
    os << std::endl

    << "Primary Material : ";
    Chair_Object.printing_vector_string(Chair_Object.GFD_PrimaryMaterial);
    os << std::endl

    << "Special Features : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Special_Features);
    os << std::endl

    << "Additional Features : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Additional_Features);
    os << std::endl

    << "About this item : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_About_This_Item);
    os << std::endl

    << "Product Description : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Product_Description);
    os << std::endl

    << "Recommended Uses for product : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Recommended_Uses_For_Product);
    os << std::endl

    << "Safety Information : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Safety_Information);
    os << std::endl

    << "Legal Disclaimer : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Legal_Disclaimer);
    os << std::endl

    << "Directions : ";
    Chair_Object.printing_vector_string(Chair_Object.CHAIR_Directions);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << "Is Discontinued by Manufacturer : " << Chair_Object.CHAIR_Is_Discontined_By_Manufacturer << std::endl
    << Chair_Object.CHAIR_Additional_Info_Object;

    return os;
}