#pragma once

#ifndef _CAMERA_HPP
#define _CAMERA_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Measurement_and_unit.hpp"
#include "variants.hpp"
#include "Common_Electronic_Commodities_Details.hpp"
#include "General_Camera_Details.hpp"
#include "Date.hpp"

class Camera : private General_Camera_Details{

    friend std::ostream& operator<<(std::ostream& os, const Camera& Camera_object);

    private :
    std::string Camera_ProductName;
    std::string Camera_BrandName;

    std::vector <Variants> Camera_VariantObject;
    Common_Electronic_Commodities_Details Camera_CECD_Object;

    std::string Camera_FlashType; 
    std::string Camera_Colored; 
    std::string Camera_FilmColour; 
    std::string Camera_CompatibleMountings;
    std::string Camera_PhotoSensorTechnology;
    std::string Camera_supported_File_Format;
    std::string Camera_Audio_Input_Compatible_With_The_Item; 
    std::string Camera_DisplayTechnology; 
    std::string Camera_DisplayType; 
    std::string Camera_ColourScreen; 
    std::string Camera_ApertureModes; 
    std::string Camera_Hasimage_Stabilisation; 
    std::string Camera_DigitalZoom; 
    std::string Camera_Audio_Output_Type; 
    std::string Camera_VideoOutput; 
    std::string Camera_BatteryDescription; 
    std::string Camera_Measurement; 
    std::string Camera_ViewfinderType; 
    std::string Camera_Has_AudioRecordingCapabilities; 
    std::string Camera_has_AutoFocus; 
    std::string Camera_Has_Night_Vision; 
    std::string Camera_Includes_Remote;
    
    double Camera_Expanded_ISO_Minimum; 
    unsigned int Camera_Macro_Focus_Range; 
    unsigned int Camera_Memory_Slots_Available; 
    unsigned int Camera_ProcessorCount; 
    unsigned int Camera_UPC; 
    unsigned int Camera_Number_OF_Items;
    unsigned int Camera_Total_USB_Ports; 
    
    Date Camera_ModelYear; 
    
    Measurement_and_unit Camera_Included_Memory_Card_Size; 
    Measurement_and_unit Camera_ViewfinderMagnification; 
    Measurement_and_unit Camera_Minimum_Shutter_Speed; 
    Measurement_and_unit Camera_Maximum_Shutter_Speed; 
    Measurement_and_unit Camera_Maximum_Resolution; 
    Measurement_and_unit Camera_Optical_Sensor_Resolution; 
    Measurement_and_unit Camera_Continuouse_Shooting_Speed; 
    Measurement_and_unit Camera_RecordingCapacity; 
    Measurement_and_unit Camera_PhotoSensorSize; 
    
    std::vector <std::string> Camera_Description_OF_Flash_Modes; 
    std::vector <Measurement_and_unit> Camera_MountingHardware; 

    std::vector <std::string> Camera_specialFeatures; 
    std::vector <std::string> Camera_AdditionalPoints; 

    // Additional Information :
    Additional_Info Camera_Additional_Info;

    void printing_string_vector(std::vector <std::string> string_vector_object) const;

    public :
    Camera(
      std::string _product_name,
      std::string _brand,

      std::initializer_list <Variants> _variant_object,
      
      unsigned int _Macro_Focus_Range,
      Date _Model_year,
      
      double memory_storage_capacity_value,
      std::initializer_list <std::string> memory_storage_capacity_unit_string,
      
      unsigned int _Memory_slots_Available,
      std::string _Flash_type,
      std::initializer_list <std::string> _Hardware_interface,
      
      double Included_memory_card_size_value,
      std::initializer_list <std::string> Included_memory_card_size_unit_string, 
      
      unsigned int _processor_count,
      std::string _File_Format_type,
      std::string _colored,
      std::string _Film_colour,

      double Maximum_aperture_value,
      std::initializer_list <std::string> Maximum_aperture_unit_string, 
      
      double _Expanded_ISO_Minimum,
      std::string _exposure_control_type,
      
      double viewfinder_magnification_value,
      std::initializer_list <std::string> viewfinder_magnification_unit_string,

      double minimum_shutter_speed_value,
      std::initializer_list <std::string> minimum_shutter_speed_unit_string,

      double maximum_shutter_speed_value,
      std::initializer_list <std::string> maximum_shutter_speed_unit_string,

      unsigned int _UPC,
      std::string _compatible_mountings,

      Measurement_and_unit _Aspect_ratio,

      double Battery_Life_value,
      std::initializer_list <std::string> Battery_Life_unit_string,

      std::string _photo_sensor_technology,
      std::string _Video_Capture_format, 
      std::string _camcorder_type,
      std::string _supported_file_format,
      std::string _image_stabilisation_technology,

      double optical_zoom_value,
      std::initializer_list <std::string> optical_zoom_unit_string,

      double maximum_focal_length_value,
      std::initializer_list <std::string> maximum_focal_length_unit_string,

      double minimum_focal_length_value,
      std::initializer_list <std::string> minimum_focal_length_unit_string,

      std::string _Audio_input_compatible_with_the_item,
      unsigned int _number_of_items,

      double Standing_screen_display_size_value,
      std::initializer_list <std::string> Standing_screen_display_size_unit_string,

      std::string _Display_technology, 
      std::string _Display_type,
      std::string _Colour_Screen,  
      std::string _Aperture_modes, 
      std::string _has_image_stabilisation, 
      std::string _Digital_zoom,

      double Maximum_resolution_value,
      std::initializer_list <std::string> Maximum_resolution_unit_string,

      double Optical_sensor_resolution_value,
      std::initializer_list <std::string> Optical_sensor_resolution_unit_string, 

      std::string _Audio_output_type,
      std::string _video_output, 
      std::string _Battery_Description,
      std::string _Batteries_included, 
      std::string _Batteries_required,  
      std::string _Battery_cell_composition, 

      double Continuouse_shooting_speed_value,
      std::initializer_list <std::string> Continuouse_shooting_speed_unit_string,
      
      unsigned int _total_USB_ports, 

      double Recording_capacity_value,
      std::initializer_list <std::string> Recording_capacity_unit_string, 
      
      std::string _Connector_type, 
      std::string _Media_type, 
      std::string _form_factor, 
      std::string _lens_type, 

      double Actual_Viewing_angle_value,
      std::initializer_list <std::string> Actual_Viewing_angle_unit_string,
      
      double photo_sensor_size_value,
      std::initializer_list <std::string> photo_sensor_size_unit_string, 
      
      std::string _measurement, 
      std::initializer_list <std::string> _mounting_type, 
      std::string _Viewfinder_type, 
      std::string _Does_it_contain_liquid, 
      std::string _Has_audio_recording_capabilities, 
      std::string _has_auto_focus, 
      std::string _Includes_Rechargeable_Battery, 
      std::string _Has_night_vision, 
      std::string _is_there_timer, 
      std::string _Includes_remote, 
      std::string _Water_Resistant_Level, 

      std::initializer_list <std::string> _Flash_memory_type,
      std::initializer_list <std::string> _Description_of_flash_modes, 
      std::initializer_list <Measurement_and_unit> _Video_capture_resolution,
      std::initializer_list <std::string> _compatible_devices,
      std::initializer_list <Measurement_and_unit> _Mounting_Hardware,
      std::initializer_list <std::string> _Material, 
      std::initializer_list <std::string> _Connectivity_Technology,

      std::initializer_list <std::string> _special_feature,
      std::initializer_list <std::string> _Additional_points, 
      
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

#endif