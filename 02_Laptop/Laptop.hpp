#pragma once  

#ifndef _LAPTOP_HPP
#define _LAPTOP_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "variants.hpp"
#include "word_number.hpp"
#include "Common_Electronic_Commodities_Details.hpp"
#include <vector>

class Laptop{

   friend std::ostream& operator<<(std::ostream& os, const Laptop& LPTP_Object);

    private :
       Word_Number LPTP_ModelName;
       std::string LPTP_BrandName;
       Word_Number LPTP_Series;

       std::vector <Variants> LPTP_VariantsObject;
       Common_Electronic_Commodities_Details LPTP_CECD_Object;

       Measurement_and_unit LPTP_Standing_Screen_Display;
       Measurement_and_unit LPTP_ScreenResolution;
       Measurement_and_unit LPTP_AspectRatio; 
       Measurement_and_unit LPTP_ItemHeight;
       Measurement_and_unit LPTP_ItemWidth;
       Measurement_and_unit LPTP_RefreshRate;
       Measurement_and_unit LPTP_ResponseTime;
       Measurement_and_unit LPTP_Brightness;
       std::string LPTP_Keyboard;
       std::vector <Measurement_and_unit> LPTP_Ports;
       Word_Number LPTP_Wifi; 
       Word_Number LPTP_Bluetooth; 

       std::string LPTP_ProcessorBrand;
       Measurement_and_unit LPTP_ProcessorSpeed;
       unsigned int LPTP_ProcessorCount;
       Measurement_and_unit LPTP_Ram_Memory_Installed_Size;

       std::string LPTP_Memory_Technology;
       Measurement_and_unit LPTP_Maximum_Memory_Supported;
       Measurement_and_unit LPTP_Memory_Clock_Speed;
       std::string LPTP_Computer_Memory_Type;

       Measurement_and_unit LPTP_Hard_Drive_Size;
       std::string LPTP_Hard_Drive_Description;
       std::string LPTP_Hard_Drive_Interface;
       Measurement_and_unit LPTP_Hard_Disk_Rotational_Speed; 
       
       std::vector <std::string> LPTP_AudioDetails; 
       Measurement_and_unit LPTP_AudioJack;
       std::string LPTP_Has_Audio_Recording_Technology; 
       std::string LPTP_Supports_Bluetooth_Technology; 
       std::string LPTP_Mic;
       std::string LPTP_Speaker_Description;
       Word_Number LPTP_Graphics_Coprocessors;
       std::string LPTP_Graphics_Chipset_Brands;
       std::string LPTP_Graphics_Card_Description;
       std::string LPTP_Graphics_Ram_Type;
       std::string LPTP_Graphics_Card_Interface;
       unsigned int LPTP_Number_of_USB_3_point_O_ports;
       unsigned int LPTP_Number_of_USB_2_point_O_ports; 
       unsigned int LPTP_Number_of_HDMI_Ports;
       unsigned int LPTP_Number_of_Ethernet_Ports; 
       std::string LPTP_Optical_Drive_Type;

       Measurement_and_unit LPTP_Rear_Webcam_Resolution;
       Measurement_and_unit LPTP_Front_Webcam_Resolution;

       std::vector <std::string> LPTP_Additional_Info_or_sepcial_feature; 
       std::vector <Word_Number> LPTP_SoftwareIncluded;  
       Measurement_and_unit LPTP_Lihtium_Battery_Energy_Content;
       Measurement_and_unit LPTP_Lithium_Battery_Weight;
       unsigned int LPTP_Number_of_Lithium_ION_Cells;
       unsigned int LPTP_Number_of_Lithium_Metal_Cells;

       // Additional Information :
       Additional_Info LPTP_Additional_Info;

       void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
       // Default constructor
   Laptop( 
    Word_Number _Model_Name,
    std::string _Brand_Name,
    Word_Number _Series,

    std::initializer_list <Variants> _variants_object,

    double standing_screen_display_size,
    std::initializer_list <std::string> standing_screen_display_unit_string,
      
    double screen_resolution_dim_1,
    double screen_resolution_dim_2,
    std::string screen_resolution_unit,
    std::string screen_resolution_format,

    double resolution_dim_1,
    double resolution_dim_2,
    std::string resolution_unit,
    std::string resolution_format,

    double display_size,
    std::initializer_list <std::string> display_unit_string,

    double Aspect_Ratio_first_value,
    double Aspect_Ratio_second_value,
    std::string Aspect_Ratio__symbol,
    std::string Aspect_Ratio__string,

    double item_height_value,
    std::initializer_list <std::string> item_height_unit_string,
    
    double item_width_value,
    std::initializer_list <std::string> item_width_unit_string,

    double refresh_rate,
    std::initializer_list <std::string> refresh_rate_unit_string,

    double response_time_value,
    std::initializer_list <std::string> response_time_unit_string,

    double brightness_value,
    std::initializer_list <std::string> brightness_unit_string,

    std::string _keyboard,

    std::initializer_list <Measurement_and_unit> _ports,
    Word_Number _Wifi,
    Word_Number _bluetooth,
    std::string _Batteries,
    Word_Number _CPU_Model,
    std::string _Processor_brand,
    Word_Number _Processor_type,

    double processor_speed,
    std::initializer_list <std::string> processor_speed_unit_string,

    unsigned int _processor_count,
   
    double ram_size,
    std::initializer_list <std::string> ram_size_unit_string,

    std::string _Memory_technology,
       
    double max_memory_supported,
    std::initializer_list <std::string> max_memory_unit_string,

    double memory_clock_speed_value,
    std::initializer_list <std::string> memory_clock_speed_unit,

    std::string _computer_memory_type,
      
    double hard_drive_size,
    std::initializer_list <std::string> hard_drive_size_unit_string,

    std::string _Hard_drive_description,
    std::string _Hard_drive_interface,

    double Hard_Disk_rotational_speed_value,
    std::initializer_list <std::string> Hard_Disk_rotational_speed_unit_string,
       
    std::initializer_list <std::string> _Audio_details,

    std::string _has_audio_recording_technology,
    std::string _supports_bluetooth_technology,

    double audio_jack_value,
    std::initializer_list <std::string> audio_jack_unit_string,

    std::string _mic,
    std::string _speaker_description,
    Word_Number _Graphics_coprocessors,
    std::string _graphics_chipset_brands,
    std::string _graphics_card_description,
    std::string _graphics_ram_type,
    std::string _graphics_card_interface,
    std::initializer_list <std::string> _Connectivity_type,
    std::initializer_list <std::string> _wireless_type,
    unsigned int _Number_of_USB_3_point_O_ports,
    unsigned int _Number_of_USB_2_point_O_ports,
    unsigned int _Number_of_HDMI_ports,
    unsigned int _Number_of_Ethernet_ports,
    std::string _optical_drive_type,
    std::string _form_factor,

    double voltage_value,
    std::initializer_list <std::string> voltage_value_unit_string,

    double Wattage_value,
    std::initializer_list <std::string> wattage_unit_string,

    double Rear_webcam_resolution_value,
    std::initializer_list <std::string> Rear_webcam_resolution_value_unit_string,

    double Front_webcam_resolution_value,
    std::initializer_list <std::string> Front_webcam_resolution_value_unit_string,

    Word_Number _Operating_system,
    std::initializer_list <std::string> _Additional_info_special_feature,
    std::initializer_list <Word_Number> _software_included,
    std::initializer_list <std::string> _mounting_hardware,
    std::string _power_source,
    std::initializer_list <std::string> _hardware_platform,
    std::string _Are_batteries_included,

    double Average_battery_life_value,
    std::initializer_list <std::string> Average_battery_life_value_unit_string,

    double battery_charging_time_value,
    std::initializer_list <std::string> battery_charging_time_unit_string,

    double lihtium_battery_energy_content_value,
    std::initializer_list <std::string> lihtium_battery_energy_content_value_unit_string,

    double lithium_battery_weight_value,
    std::initializer_list <std::string> lithium_battery_weight_value_unit_string,    

    unsigned int _Number_of_lithium_ion_cells,
    unsigned int _Number_of_lithium_metal_cells,
       
   // Additional Information :
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