#pragma once 

#ifndef _SOFAS_SEATINGS_HPP
#define _SOFAS_SEATINGS_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "General_Furniture_Details.hpp"
#include "variants.hpp"

class SoFaS_SeaTinGs : private General_Furniture_Details{

    friend std::ostream& operator<<(std::ostream& os, const SoFaS_SeaTinGs& SoFaS_SeaTinGs_Object);

    private :
    std::string SS_ProductName;
    std::string SS_BrandName;

    std::vector <Variants> SS_VariantsObject;

    std::string SS_Type; 
    std::string SS_Upholstery_FabricType; 
    std::string SS_ArmStyle; 
    std::string SS_Pattern; 
    std::string SS_Cushion_Has_RemovableCover; 
    std::string SS_CushionStyle; 
    std::string SS_CoverMaterial; 
    std::string SS_SofaStyle; 
    std::string SS_Orientation; 
    std::string SS_CollectionName; 
    std::string SS_SeatFillMaterial; 
    std::string SS_SeatBackFillMaterial; 
    std::string SS_Furniture_LegMaterial; 
    std::string SS_LegStyle; 
    std::string SS_CartoonCharacter; 
    std::string SS_FrameFinish; 
    std::string SS_WarrantyType; 

    unsigned int SS_SeatingCapacity;
    unsigned int SS_ThreadCount; 

    Measurement_and_unit SS_Capacity_OR_Size; 
    Measurement_and_unit SS_ArmHeight; 
    Measurement_and_unit SS_InteriorSeatWidth; 
    Measurement_and_unit SS_LegLength;
    
    std::vector <std::string> SS_ProductDescription; 
    std::vector <std::string> SS_SpecialFeature; 
    std::vector <std::string> SS_LegalDisclaimer; 
    std::vector <std::string> SS_ProductCare_Instructions; 
    std::vector <std::string> SS_SafetyInformation;
    std::vector <std::string> SS_About_This_Item; 
    std::vector <std::string> SS_Embellishment; 

    Additional_Info SS_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    SoFaS_SeaTinGs(
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
    );
};

#endif /* Sofas_Seatings.hpp */