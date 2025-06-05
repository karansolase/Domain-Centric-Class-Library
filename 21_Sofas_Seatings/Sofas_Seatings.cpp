#include "Sofas_Seatings.hpp"

SoFaS_SeaTinGs::SoFaS_SeaTinGs(
    std::string _product_name,
        std::string _brand_name,
    
        std::initializer_list <Variants> _Variants_object,
        
        std::string _Assembly_required,
    
        double seat_depth_value,
        std::initializer_list <std::string> seat_depth_unit_string, 
        
        double seat_height_value,
        std::initializer_list <std::string> seat_height_unit_string, 
        
        double weight_limit_value,
        std::initializer_list <std::string> weight_limit_unit_string, 
        
        unsigned int _seating_capacity, 
        std::string _item_shape, 
        std::string _frame_material,
        std::string _type, 
        std::string _upholstery_fabric_type,
        std::string _arm_style, 
        std::string _Furniture_Finish, 
        std::string _Pattern, 
        std::string _Back_style, 
        std::string _cushion_has_removable_cover, 
        
        double Capacity_or_size_dimension_1, 
        double Capacity_or_size_dimension_2, 
        double Capacity_or_size_dimension_3, 
        std::string Capacity_or_size_dimension_unit, 
        std::string Capacity_or_size_dimension_format, 
        
        std::string _cushion_style, 
        std::string _cover_material, 
        std::string _top_material,
        std::string _Sofa_style, 
        std::string _Item_firmness_Description, 
        std::string _Age_range_description, 
        
        unsigned int _number_of_pieces, 
        std::string _Orientation,
        unsigned int _Thread_Count, 
        
        double seat_back_interior_height_value,
        std::initializer_list <std::string> seat_back_interior_height_unit_string, 
        
        double Arm_height_value,
        std::initializer_list <std::string> Arm_height_unit_string,
        
        double Interior_seat_width_value,
        std::initializer_list <std::string> Interior_seat_width_unit_string,
        
        std::string _Collection_name, 
        std::string _Seat_fill_material, 
        std::string _Seat_back_fill_material,
        std::string _Furniture_leg_material, 
        std::string _leg_style, 
        
        double leg_length_value,
        std::initializer_list <std::string> leg_length_unit_string, 
        
        std::string _Theme, 
        std::string _installation_type, 
        std::string _Cartoon_Character, 
        std::string _type_of_wood, 
        std::string _upholstery_material, 
        std::string _Storage_Availablility,
        std::string _frame_finish, 
        std::string _Footboard_upholstery,
        unsigned int _Number_of_Shelves, 
        std::string _finish_type, 
        std::string _warranty_type, 
        std::string _assembly_type, 
        
        std::initializer_list <std::string> _room_type, 
        std::initializer_list <std::string> _Material, 
        std::initializer_list <std::string> _mattress_comfort, 
        std::initializer_list <std::string> _primary_material, 
        
        std::initializer_list <std::string> _product_description, 
        std::initializer_list <std::string> _special_feature, 
        std::initializer_list <std::string> _Legal_Disclaimer, 
        std::initializer_list <std::string> _product_care_instructions, 
        std::initializer_list <std::string> _Safety_information, 
        std::initializer_list <std::string> _About_this_item, 
        std::initializer_list <std::string> _Embellishment,
    
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
:   SS_ProductName(_product_name),
    SS_BrandName(_brand_name),

    SS_VariantsObject(_Variants_object),

    SS_Type(_type), 
    SS_Upholstery_FabricType(_upholstery_fabric_type),
    SS_ArmStyle(_arm_style), 
    SS_Pattern(_Pattern), 
    SS_Cushion_Has_RemovableCover(_cushion_has_removable_cover), 
    SS_CushionStyle(_cushion_style), 
    SS_CoverMaterial(_cover_material), 
    SS_SofaStyle(_Sofa_style), 
    SS_Orientation(_Orientation),
    SS_CollectionName(_Collection_name), 
    SS_SeatFillMaterial(_Seat_fill_material), 
    SS_SeatBackFillMaterial(_Seat_back_fill_material),
    SS_Furniture_LegMaterial(_Furniture_leg_material), 
    SS_LegStyle(_leg_style), 
    SS_CartoonCharacter(_Cartoon_Character), 
    SS_FrameFinish(_frame_finish), 
    SS_WarrantyType(_warranty_type),

    SS_SeatingCapacity(_seating_capacity), 
    SS_ThreadCount(_Thread_Count), 

    SS_ProductDescription(_product_description), 
    SS_SpecialFeature(_special_feature), 
    SS_LegalDisclaimer(_Legal_Disclaimer), 
    SS_ProductCare_Instructions(_product_care_instructions), 
    SS_SafetyInformation(_Safety_information), 
    SS_About_This_Item(_About_this_item), 
    SS_Embellishment(_Embellishment),

    SS_Capacity_OR_Size(
        Capacity_or_size_dimension_1, 
        Capacity_or_size_dimension_2, 
        Capacity_or_size_dimension_3, 
        Capacity_or_size_dimension_unit, 
        Capacity_or_size_dimension_format), 
    
    SS_ArmHeight(
        Arm_height_value,
        Arm_height_unit_string),
    
    SS_InteriorSeatWidth(
        Interior_seat_width_value,
        Interior_seat_width_unit_string),

    SS_LegLength(
        leg_length_value,
        leg_length_unit_string),
    
    General_Furniture_Details(

        _Back_style, 
        _finish_type, 
        _item_shape, 
        "",
        _Furniture_Finish, 
        _installation_type,
        "",
        _top_material,
        _type_of_wood, 
        _Assembly_required,
        _frame_material,
        _assembly_type, 
        _Storage_Availablility,
        _Footboard_upholstery,
        _Age_range_description, 
        _Theme, 
        _upholstery_material, 
        _Item_firmness_Description, 
        
        _Number_of_Shelves, 
        _number_of_pieces, 
  
        weight_limit_value,
        weight_limit_unit_string,   

        seat_depth_value,
        seat_depth_unit_string,
    
        seat_height_value,
        seat_height_unit_string, 
    
        seat_back_interior_height_value,
        seat_back_interior_height_unit_string,
 
        _Material, 
        _room_type, 
        _mattress_comfort, 
        _primary_material
    ),
        
    SS_Additional_Info(
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

void SoFaS_SeaTinGs::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const SoFaS_SeaTinGs& SoFaS_SeaTinGs_Object){
    os << "PRODUCT DETAILS     : " << std::endl << std::endl

    << "Product Name : " << SoFaS_SeaTinGs_Object.SS_ProductName << std::endl
    << "Brand Name : " << SoFaS_SeaTinGs_Object.SS_BrandName << std::endl << std::endl;

    for(
        std::vector<Variants>::const_iterator Iter = 
        SoFaS_SeaTinGs_Object.SS_VariantsObject.begin();
        Iter != SoFaS_SeaTinGs_Object.SS_VariantsObject.end();
        ++Iter)
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }

    os
    << "Type : " << SoFaS_SeaTinGs_Object.SS_Type << std::endl
    << "Upholstery_fabric_type : " << SoFaS_SeaTinGs_Object.SS_Upholstery_FabricType << std::endl
    << "Arm_style : " << SoFaS_SeaTinGs_Object.SS_ArmStyle << std::endl
    << "Pattern : " << SoFaS_SeaTinGs_Object.SS_Pattern << std::endl
    << "Cushion Has Removable Cover : " << SoFaS_SeaTinGs_Object.SS_Cushion_Has_RemovableCover << std::endl
    << "Cushion Style : " << SoFaS_SeaTinGs_Object.SS_CushionStyle << std::endl
    << "Cover_material : " << SoFaS_SeaTinGs_Object.SS_CoverMaterial << std::endl
    << "Sofa_style : " << SoFaS_SeaTinGs_Object.SS_SofaStyle << std::endl
    << "Orientation : " << SoFaS_SeaTinGs_Object.SS_Orientation << std::endl
    << "Collection_name : " << SoFaS_SeaTinGs_Object.SS_CollectionName << std::endl
    << "Seat_fill_material : " << SoFaS_SeaTinGs_Object.SS_SeatFillMaterial << std::endl
    << "Seat_back_fill_material : " << SoFaS_SeaTinGs_Object.SS_SeatBackFillMaterial << std::endl
    << "Furniture_leg_material : " << SoFaS_SeaTinGs_Object.SS_Furniture_LegMaterial << std::endl
    << "Leg_style : " << SoFaS_SeaTinGs_Object.SS_LegStyle << std::endl
    << "Cartoon_Character : " << SoFaS_SeaTinGs_Object.SS_CartoonCharacter << std::endl
    << "Frame_finish : " << SoFaS_SeaTinGs_Object.SS_FrameFinish << std::endl
    << "Back_style : " << SoFaS_SeaTinGs_Object.GFD_BackStyle << std::endl
    << "Finish_type : " << SoFaS_SeaTinGs_Object.GFD_FinishType << std::endl
    << "Item Shape : " << SoFaS_SeaTinGs_Object.GFD_Shape << std::endl
    << "Furniture_Finish : " << SoFaS_SeaTinGs_Object.GFD_FurnitureFinish << std::endl
    << "Installation_type : " << SoFaS_SeaTinGs_Object.GFD_InstallationType << std::endl
    << "Top_material : " << SoFaS_SeaTinGs_Object.GFD_TopMaterial << std::endl
    << "Type_of_wood : " << SoFaS_SeaTinGs_Object.GFD_TYpeOFWood << std::endl
    << "Assembly Required : " << SoFaS_SeaTinGs_Object.GFD_Assembly_Required << std::endl
    << "Assembly_type : " << SoFaS_SeaTinGs_Object.GFD_AssemblyType << std::endl << std::endl
    << "Frame_material : " << SoFaS_SeaTinGs_Object.GFD_FrameMaterial << std::endl
    << "Storage_Availablility : " << SoFaS_SeaTinGs_Object.GFD_StorageAvailability << std::endl
    << "Footboard_upholstery : " << SoFaS_SeaTinGs_Object.GFD_FootBoard_Upholstery << std::endl
    << "Age_range_description : " << SoFaS_SeaTinGs_Object.GFD_AgeRangeDescription << std::endl
    << "Theme : " << SoFaS_SeaTinGs_Object.GFD_Theme << std::endl
    << "Upholstery_material : " << SoFaS_SeaTinGs_Object.GFD_UpholsteryMaterial << std::endl
    << "Item_firmness_Description : " << SoFaS_SeaTinGs_Object.GFD_ItemFirmnessDescription << std::endl

    << "Warranty_type : " << SoFaS_SeaTinGs_Object.SS_WarrantyType << std::endl

    << "Number_of_Shelves : " << SoFaS_SeaTinGs_Object.GFD_NumberOfShelves << std::endl
    << "Number_of_pieces : " << SoFaS_SeaTinGs_Object.GFD_NumberOfPieces << std::endl
    << "Seating Capacity : " << SoFaS_SeaTinGs_Object.SS_SeatingCapacity << std::endl
    << "Thread_Count : " << SoFaS_SeaTinGs_Object.SS_ThreadCount << std::endl
    
    << "Capacity Or Size : " << SoFaS_SeaTinGs_Object.SS_Capacity_OR_Size << std::endl
    << "Arm_height : " << SoFaS_SeaTinGs_Object.SS_ArmHeight << std::endl
    << "Interior_seat_width : " << SoFaS_SeaTinGs_Object.SS_InteriorSeatWidth << std::endl
    << "Leg_length : " << SoFaS_SeaTinGs_Object.SS_LegLength << std::endl
    << "Weight Limit : " << SoFaS_SeaTinGs_Object.GFD_ShippingWeight << std::endl
    << "Seat Depth : " << SoFaS_SeaTinGs_Object.GFD_SeatDepth << std::endl
    << "Seat Height : " << SoFaS_SeaTinGs_Object.GFD_SeatHeight << std::endl
    << "Seat_back_interior_height : " << SoFaS_SeaTinGs_Object.GFD_SeatBack_InteriorHeight << std::endl
    
    
    << "Material : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.GFD_Material); 
    os << std::endl
    
    << "Room_type : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.GFD_RoomType); 
    os << std::endl
    
    << "Mattress_comfort : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.GFD_MattressComfort);
    os << std::endl

    << "Primary_material : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.GFD_PrimaryMaterial);
    os << std::endl
    
    << "Product_description : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_ProductDescription); 
    os << std::endl
    
    << "Special_feature : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_SpecialFeature);
    os << std::endl
    
    << "Legal_Disclaimer : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_LegalDisclaimer);
    os << std::endl
    
    << "Product_care_instructions : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_ProductCare_Instructions);
    os << std::endl

    << "Safety_information : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_SafetyInformation);
    os << std::endl

    << "About_this_item : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_About_This_Item);
    os << std::endl
    
    << "Embellishment : ";
    SoFaS_SeaTinGs_Object.printing_vector_string(SoFaS_SeaTinGs_Object.SS_Embellishment); 
    os << std::endl 

    << "Additional Information : " << std::endl << std::endl
    << SoFaS_SeaTinGs_Object.SS_Additional_Info;
    
    return os;
}

