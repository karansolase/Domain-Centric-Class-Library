
#include "laptop.hpp"
#include <iostream>

Laptop::Laptop( 
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
)
:
    LPTP_ModelName(_Model_Name),
    LPTP_BrandName(_Brand_Name),
    LPTP_Series(_Series),

    LPTP_VariantsObject(_variants_object),

    LPTP_CECD_Object(
        "",
        "",
        _Batteries,
        "",
        "",
        _power_source,
        "",
        "",
        _form_factor,
        "",
        "",
        _Processor_type,
        _Operating_system,
        _CPU_Model,

        display_size,
        display_unit_string,

        0,{""},
        0,{""},
        
        Average_battery_life_value,
        Average_battery_life_value_unit_string,

        0,{""},
        
        battery_charging_time_value,
        battery_charging_time_unit_string,

        {resolution_dim_1,
        resolution_dim_2,
        resolution_unit,
        resolution_format},

        0,{""},
        0,{""},
        0,{""},

        voltage_value,
        voltage_value_unit_string,

        Wattage_value, 
        wattage_unit_string,
    
        _Connectivity_type,
        _mounting_hardware,
        _wireless_type,
        _hardware_platform,
        {""},
        {""}
    ),

    LPTP_Standing_Screen_Display(
        standing_screen_display_size,
        standing_screen_display_unit_string),

    LPTP_ScreenResolution(
        screen_resolution_dim_1,
        screen_resolution_dim_2,
        screen_resolution_unit,
        screen_resolution_format
    ),

    LPTP_AspectRatio(
     Aspect_Ratio_first_value,
     Aspect_Ratio_second_value,
     Aspect_Ratio__symbol,
     Aspect_Ratio__string),

        LPTP_ItemHeight(
        item_height_value,
        item_height_unit_string),

        LPTP_ItemWidth(
        item_width_value,
        item_width_unit_string),

        LPTP_RefreshRate(
        refresh_rate,
        refresh_rate_unit_string),

        LPTP_ResponseTime(
        response_time_value,
        response_time_unit_string),

        LPTP_Brightness(
        brightness_value,
        brightness_unit_string),

        LPTP_Keyboard(_keyboard),
        LPTP_Ports(_ports),
        LPTP_Wifi(_Wifi),
        LPTP_Bluetooth(_bluetooth),
        LPTP_ProcessorBrand(_Processor_brand),

        LPTP_ProcessorSpeed(
        processor_speed, 
        processor_speed_unit_string),

        LPTP_ProcessorCount(_processor_count),
       
        LPTP_Ram_Memory_Installed_Size(
        ram_size,
        ram_size_unit_string),

        LPTP_Memory_Technology(_Memory_technology),
       
        LPTP_Maximum_Memory_Supported(
        max_memory_supported,
        max_memory_unit_string),

        LPTP_Memory_Clock_Speed(
        memory_clock_speed_value,
        memory_clock_speed_unit),

        LPTP_Computer_Memory_Type(_computer_memory_type),

        LPTP_Hard_Drive_Size(
        hard_drive_size,
        hard_drive_size_unit_string),
    
        LPTP_Hard_Drive_Description(_Hard_drive_description),
        LPTP_Hard_Drive_Interface(_Hard_drive_interface),

        LPTP_Hard_Disk_Rotational_Speed(
        Hard_Disk_rotational_speed_value,
        Hard_Disk_rotational_speed_unit_string),
       
        LPTP_AudioDetails(_Audio_details),

        LPTP_Has_Audio_Recording_Technology(_has_audio_recording_technology),
        LPTP_Supports_Bluetooth_Technology(_supports_bluetooth_technology),

    LPTP_AudioJack(
        audio_jack_value,
        audio_jack_unit_string),

        LPTP_Mic(_mic),
        LPTP_Speaker_Description(_speaker_description),
        LPTP_Graphics_Coprocessors(_Graphics_coprocessors),
        LPTP_Graphics_Chipset_Brands(_graphics_chipset_brands),
        LPTP_Graphics_Card_Description(_graphics_card_description),
        LPTP_Graphics_Ram_Type(_graphics_ram_type),
        LPTP_Graphics_Card_Interface(_graphics_card_interface),

        LPTP_Number_of_USB_3_point_O_ports(_Number_of_USB_3_point_O_ports),
        LPTP_Number_of_USB_2_point_O_ports(_Number_of_USB_2_point_O_ports),
        LPTP_Number_of_HDMI_Ports(_Number_of_HDMI_ports),
        LPTP_Number_of_Ethernet_Ports(_Number_of_Ethernet_ports),
        LPTP_Optical_Drive_Type(_optical_drive_type),

        LPTP_Rear_Webcam_Resolution(
        Rear_webcam_resolution_value,
        Rear_webcam_resolution_value_unit_string),

        LPTP_Front_Webcam_Resolution(
        Front_webcam_resolution_value,
        Front_webcam_resolution_value_unit_string),

        LPTP_Additional_Info_or_sepcial_feature(_Additional_info_special_feature),
        LPTP_SoftwareIncluded(_software_included),
        LPTP_Lihtium_Battery_Energy_Content(
        lihtium_battery_energy_content_value,
        lihtium_battery_energy_content_value_unit_string),

        LPTP_Lithium_Battery_Weight(
        lithium_battery_weight_value,
        lithium_battery_weight_value_unit_string),

        LPTP_Number_of_Lithium_ION_Cells(_Number_of_lithium_ion_cells),
        LPTP_Number_of_Lithium_Metal_Cells(_Number_of_lithium_metal_cells),

    // Additional Information :
    LPTP_Additional_Info(
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

void Laptop::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Laptop& LPTP_Object){

    int j = 0;

    os << "DETAILS OF LAPTOP :- " << std::endl << std::endl
        << "Model Name : " << LPTP_Object.LPTP_ModelName << std::endl
        << "Brand Name : " << LPTP_Object.LPTP_BrandName <<  std::endl 
        << "Series : " << LPTP_Object.LPTP_Series <<  std::endl << std::endl;

        std::vector<Variants>::const_iterator Iter_1 = 
        LPTP_Object.LPTP_VariantsObject.begin();

        while(Iter_1 != LPTP_Object.LPTP_VariantsObject.end())
        {
            std::cout << *Iter_1 << std::endl;
            ++Iter_1;
        }

        os
        << "Standing screen display size : " << LPTP_Object.LPTP_Standing_Screen_Display << std::endl   
        << "Screen resolution : " << LPTP_Object.LPTP_ScreenResolution <<  std::endl  
        << "Resolution : " << LPTP_Object.LPTP_CECD_Object.CECD_Resolution <<  std::endl 
        << "Display : " << LPTP_Object.LPTP_CECD_Object.CECD_DisplaySize <<  std::endl
        << "Aspect Ratio : " << LPTP_Object.LPTP_AspectRatio << std::endl
        << "Item Height : " << LPTP_Object.LPTP_ItemHeight << std::endl 
        << "Item width : " << LPTP_Object.LPTP_ItemWidth << std::endl 
        << "Refresh rate : " << LPTP_Object.LPTP_RefreshRate << std::endl 
        << "Response Time : " << LPTP_Object.LPTP_ResponseTime << std::endl
        << "Brightness : " << LPTP_Object.LPTP_Brightness << std::endl
        << "Keyboard : " << LPTP_Object.LPTP_Keyboard << std::endl << std::endl
        << "Ports : ";

        std::vector<Measurement_and_unit>::const_iterator Iter_2 = 
        LPTP_Object.LPTP_Ports.begin();

        while(Iter_2 != LPTP_Object.LPTP_Ports.end())
        {
            j = j + 1;
            std::cout << *Iter_2 << std::endl;
            ++Iter_2;
        }
        j = 0;
        os << std::endl

        << "Wifi : " << LPTP_Object.LPTP_Wifi << std::endl
        << "Bluetooth : " << LPTP_Object.LPTP_Bluetooth << std::endl
        << "Batteries : " << LPTP_Object.LPTP_CECD_Object.CECD_BatteriesRequired <<  std::endl
        << "CPU Model : " << LPTP_Object.LPTP_CECD_Object.CECD_CPU_Model << std::endl
        << "Processor Brand : " << LPTP_Object.LPTP_ProcessorBrand <<  std::endl
        << "Processor type : " << LPTP_Object.LPTP_CECD_Object.CECD_Processor <<  std::endl 
        << "Processor Speed : " << LPTP_Object.LPTP_ProcessorSpeed << std::endl 
        << "Processor Count : " << LPTP_Object.LPTP_ProcessorCount <<  std::endl 
        << "Ram Installed Size : " << LPTP_Object.LPTP_Ram_Memory_Installed_Size << std::endl << std::endl
        
        << "Memory Technology : " << LPTP_Object.LPTP_Memory_Technology <<  std::endl
        << "Maximum Memory supported : " << LPTP_Object.LPTP_Maximum_Memory_Supported <<  std::endl 
        << "Memory Clock Speed : " << LPTP_Object.LPTP_Memory_Clock_Speed << std::endl
        << "Computer Memory Type : " << LPTP_Object.LPTP_Computer_Memory_Type << std::endl
        << "Hard Drive Size : " << LPTP_Object.LPTP_Hard_Drive_Size <<  std::endl
        << "Hard Drive Description : " << LPTP_Object.LPTP_Hard_Drive_Description <<  std::endl
        << "Hard Drive Interface : " << LPTP_Object.LPTP_Hard_Drive_Interface <<  std::endl
        << "Hard Disk Rotational Speed : " << LPTP_Object.LPTP_Hard_Disk_Rotational_Speed << std::endl << std::endl
        
        << "Audio details : ";
        LPTP_Object.printing_vector_string(LPTP_Object.LPTP_AudioDetails);
        os << std::endl

        << "Audio Jack : " << LPTP_Object.LPTP_AudioJack << std::endl
        << "Has Audio Recording Technology : " << LPTP_Object.LPTP_Has_Audio_Recording_Technology << std::endl
        << "Supports Bluetooth Technology : " << LPTP_Object.LPTP_Supports_Bluetooth_Technology << std::endl
        << "Mic : " << LPTP_Object.LPTP_Mic << std::endl
        << "Speaker Description : " << LPTP_Object.LPTP_Speaker_Description << std::endl
        << "Graphics Coprocessors : " << LPTP_Object.LPTP_Graphics_Coprocessors <<  std::endl
        << "Graphics chipset Brands : " << LPTP_Object.LPTP_Graphics_Chipset_Brands <<  std::endl
        << "Graphics card Description : " << LPTP_Object.LPTP_Graphics_Card_Description <<  std::endl
        << "Garphics ram Type : " << LPTP_Object.LPTP_Graphics_Ram_Type <<  std::endl
        << "Graphics Card interface : " << LPTP_Object.LPTP_Graphics_Card_Interface <<  std::endl << std::endl
        
        << "Connectity Type : ";
        LPTP_Object.printing_vector_string(LPTP_Object.LPTP_CECD_Object.CECD_Connectivity_Technologies);
        os << std::endl

        << "Wireless Type : ";
        LPTP_Object.printing_vector_string(LPTP_Object.LPTP_CECD_Object.CECD_WirelessType);
        os << std::endl
      
        << "Number of USB 3.O ports : " << LPTP_Object.LPTP_Number_of_USB_3_point_O_ports << std::endl
        << "Number of USB 3.O ports : " << LPTP_Object.LPTP_Number_of_USB_2_point_O_ports << std::endl
        << "Number of HDMI Ports : " << LPTP_Object.LPTP_Number_of_HDMI_Ports << std::endl
        << "Number of HDMI Ports : " << LPTP_Object.LPTP_Number_of_Ethernet_Ports << std::endl
        << "Optical Drive Type : " << LPTP_Object.LPTP_Optical_Drive_Type << std::endl
        << "Form Factor : " << LPTP_Object.LPTP_CECD_Object.CECD_Form_Factor << std::endl
        << "Voltage : " << LPTP_Object.LPTP_CECD_Object.CECD_Voltage << std::endl
        << "Wattage : " << LPTP_Object.LPTP_CECD_Object.CECD_Wattage << std::endl 
        << "Rear Webcam Resolution : " << LPTP_Object.LPTP_Rear_Webcam_Resolution << std::endl
        << "Front Webcam Resolution : " << LPTP_Object.LPTP_Front_Webcam_Resolution << std::endl
        << "Operating System : " << LPTP_Object.LPTP_CECD_Object.CECD_OperatingSystem <<  std::endl << std::endl
        
        << "Addional Information : ";
        LPTP_Object.printing_vector_string(LPTP_Object.LPTP_Additional_Info_or_sepcial_feature);
        os << std::endl

        << "Software Included : ";
        std::vector<Word_Number>::const_iterator Iter_3 = 
        LPTP_Object.LPTP_SoftwareIncluded.begin();

        while(Iter_3 != LPTP_Object.LPTP_SoftwareIncluded.end())
        {
            j = j + 1;
            std::cout << *Iter_3 << std::endl;
            ++Iter_3;
        }
        j = 0;

        os
        << "Mounting Hardware : ";
        LPTP_Object.printing_vector_string(LPTP_Object.LPTP_CECD_Object.CECD_MountingType);
        os << std::endl

        << "Power Source : " << LPTP_Object.LPTP_CECD_Object.CECD_PowerSource << std::endl
        
        << "Hardware Platform : ";
        LPTP_Object.printing_vector_string(LPTP_Object.LPTP_CECD_Object.CECD_HardwareInterface); 
        os << std::endl
        
        << "Are Batteries inlcuded ? : " << LPTP_Object.LPTP_CECD_Object.CECD_BatteriesIncluded <<  std::endl
        << "Average Battery Life : " << LPTP_Object.LPTP_CECD_Object.CECD_BatteryLife << std::endl
        << "Battery Charging Time : " << LPTP_Object.LPTP_CECD_Object.CECD_ChargingTime << std::endl 
        << "Lithium battery energy content : " << LPTP_Object.LPTP_Lihtium_Battery_Energy_Content <<  std::endl
        << "Lithum Battery Weight : " << LPTP_Object.LPTP_Lithium_Battery_Weight << std::endl 
        << "Number of Lihtium ion cells : " << LPTP_Object.LPTP_Number_of_Lithium_ION_Cells <<  std::endl 
        << "Number of Lithium metal cells : " << LPTP_Object.LPTP_Number_of_Lithium_Metal_Cells << std::endl << std::endl
    
        << "Additional Information : " << std::endl << std::endl
        << LPTP_Object.LPTP_Additional_Info;

        return os;
}