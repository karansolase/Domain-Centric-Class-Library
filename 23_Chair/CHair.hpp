#pragma once 

#ifndef _CHAIR_HPP
#define _CHAIR_HPP

#include <iostream>
#include <vector>
#include "Additional_Info.hpp"
#include "variants.hpp"
#include "variants_info.hpp"
#include "General_Furniture_Details.hpp"

class Chair : private General_Furniture_Details{

    friend std::ostream& operator<<(std::ostream& os, const Chair& Chair_Object);

    private :
    std::string CHAIR_ProductName;
    std::string CHAIR_BrandName;

    std::vector <Variants> CHAIR_VariantsObject;

    std::string CHAIR_Type; 
    std::string CHAIR_SeatMaterialType;
    std::string CHAIR_ArmStyle; 
    std::string CHAIR_CartoonCharacter; 
    std::string CHAIR_Indoor_OR_OutdoorUsage; 
    std::string CHAIR_FillMaterial; 
    std::string CHAIR_InternalFrame; 
    std::string CHAIR_Neck_OR_HeadPillow; 
    std::string CHAIR_Seat; 
    std::string CHAIR_Design; 
    std::string CHAIR_LumberSupport; 
    std::string CHAIR_Extendable_Footrest; 
    std::string CHAIR_Foam; 
    std::string CHAIR_Mechanism; 
    std::string CHAIR_WheelBase; 
    std::string CHAIR_LumbarPillow;  

    Measurement_and_unit CHAIR_Recliner_Degree; 
    Measurement_and_unit CHAIR_Armrest; 
    Measurement_and_unit CHAIR_Maximum_weight_Recommendations_OR_Limit;
    Measurement_and_unit CHAIR_SeatLength;
    Measurement_and_unit CHAIR_SeatWidth; 
    Measurement_and_unit CHAIR_BackrestWidth; 
    Measurement_and_unit CHAIR_Floor_TO_SeatHeight; 

    std::string CHAIR_Furniture_BaseMovement; 
    std::string CHAIR_FeetMaterial; 
    std::string CHAIR_FurnitureLegMaterial; 
    std::string CHAIR_CushionStyle; 
    std::string CHAIR_LegStyle; 
    std::string CHAIR_FormFactor; 
    std::string CHAIR_Is_Foldable; 
    std::string CHAIR_WarrantyType; 
    std::string CHAIR_Tilting;  
    std::string CHAIR_Locking_Mechanism; 
    std::string CHAIR_PillowType; 
    std::string CHAIR_CoverMaterial; 
    std::string CHAIR_FabricType; 
    Variants CHAIR_Capacity; 
    std::string CHAIR_PublisherCode;  
    unsigned long long int  CHAIR_Global_IdentificationNumber;  
    unsigned long long int CHAIR_UPC; 
    
    unsigned int CHAIR_Reclining_Position_Count; 
    unsigned int CHAIR_Number_of_Height_Positions; 
    unsigned int CHAIR_Seating_Capacity; 
    unsigned int CHAIR_Included_ThrowQuantity; 
    unsigned int CHAIR_Maximum_Number_OF_CompatibleSeats; 

    std::vector <std::string> CHAIR_Surface_Recommendation; 

    std::vector <std::string> CHAIR_Special_Features; 
    std::vector <std::string> CHAIR_Additional_Features; 
    std::vector <std::string> CHAIR_About_This_Item;  
    std::vector <std::string> CHAIR_Product_Description; 
    std::vector <std::string> CHAIR_Recommended_Uses_For_Product;  
    std::vector <std::string> CHAIR_Product_Care_Instructions;  
    std::vector <std::string> CHAIR_Safety_Information; 
    std::vector <std::string> CHAIR_Legal_Disclaimer; 
    std::vector <std::string> CHAIR_Directions;  

    std::string CHAIR_Is_Discontined_By_Manufacturer; 
    Additional_Info CHAIR_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Chair(
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
    );
};

#endif /* CHair.hpp */

