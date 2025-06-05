// TV Interface Side

#pragma once 

#ifndef  _TV_HPP
#define  _TV_HPP

#include <vector>
#include <iostream>
#include "variants.hpp"
#include "Additional_Info.hpp"
#include "Common_Electronic_Commodities_Details.hpp"
#include "word_number.hpp"

class Television{

friend std::ostream& operator<<(std::ostream& os, const Television& TV_Object);

  private :
    std::string TV_ProductName; 
    std::string TV_BrandName; 

    std::vector <Variants> TV_VariantsObject; 
    Common_Electronic_Commodities_Details TV_CECD_Object;

    std::vector <std::string> TV_Panel; 
    std::string TV_DisplayTechnology;
    Measurement_and_unit TV_DisplayResolution; 
    Measurement_and_unit TV_Format;
    Measurement_and_unit TV_ViewingAngle;
    std::string TV_ScreenType;
    Measurement_and_unit TV_ContrastRatio; 

    std::string TV_Type;
    std::vector <std::string> TV_Built_IN_Applications;
    unsigned int TV_ProcessorCount; 
    std::vector <Word_Number> TV_GraphicProcessor; 
    Measurement_and_unit TV_Refresh_Rate;
    Measurement_and_unit TV_Aspect_Ratio;
    Measurement_and_unit TV_Brightness;
    Measurement_and_unit TV_ResponseTime;
    Measurement_and_unit TV_Ram;
    Measurement_and_unit TV_InternalMemory;
    std::vector <std::string> TV_Supported_Image_Type; 

    std::vector <std::string> TV_SoundFeature; 
    unsigned int TV_Number_OF_Speakers;
    std::string TV_Speakers;
    std::vector <std::string> TV_SoundConfig;
    Measurement_and_unit TV_SoundOutput;
    std::vector <std::string> TV_AudioFormat;
    std::vector <std::string> TV_Supported_Video_Formats;
    std::vector <std::string> TV_Video_Format;

    Measurement_and_unit TV_HDMI_Ports; 
    Measurement_and_unit TV_USB_Ports; 
    Word_Number TV_Wifi; 
    Measurement_and_unit TV_Bluetooth; 

    std::string TV_RemoteIncluded;
    std::vector <std::string> TV_RemoteType;
    std::vector <std::string> TV_RemoteTechnology;

    // Measurement_and_unit TV_PowerConsumption;
    // std::string TV_PowerSource;
    Measurement_and_unit TV_Ideal_Viewing_Distance;
    std::string TV_AssemblyRequired;
    std::vector <std::string> TV_specialFeatures;

    std::string TV_Indoor_Outdoor_Usage; 
    std::vector <std::string> TV_Recommended_Uses_For_Product; 
    std::string TV_Colour;
    std::string TV_Audio_Output_Mode;
    // Measurement_and_unit TV_Wattage;
    std::string TV_Audio_Input_Mode; 
    std::string TV_Battery_Description;
    Measurement_and_unit TV_Ram_Maximum_Size;
    std::string TV_SignalFormat;
    Measurement_and_unit TV_Speaker_Maximum_Output_Power;
    std::string TV_WarrantyType; 
    std::string TV_Efficiency;
    std::string TV_Parental_Control_Technology;
    // std::string TV_ControlType; 
    std::string TV_VoiceControl;
    std::string TV_ControlMethod;
    std::vector <std::string> TV_TunerTechnology; 
    std::vector <std::string> TV_VideoEncoding;
    Measurement_and_unit TV_LineVoltage; 

    Additional_Info TV_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    Television(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _variants_object, 

    double display_size_value,
    std::initializer_list <std::string> display_size_unit_string,

    std::initializer_list <std::string> _panel,
    std::string _Display_technology,

    double dim_1,
    double dim_2,
    std::string resolution_unit,
    std::string resolution_format,

    double format_value,
    std::initializer_list <std::string> format_unit_string,

    double refresh_rate_value,
    std::initializer_list <std::string> refresh_rate_unit_string,

    double viewing_angle_value,
    std::initializer_list <std::string> viewing_angle_unit_string,

    std::string _screen_type,

    std::string aspect_string_1,
    double aspect_numerator_1,
    double aspect_denominator_2,
    std::string aspect_symbol,
    std::string aspect_string_2,

    std::string contrast_string_1,
    double contrast_numerator_1,
    double contrast_denominator_2,
    std::string contrast_symbol,
    std::string contrast_string_2,

    double brightness_value,
    std::initializer_list <std::string> brightness_unit_and_string,

    std::string _TV_type,
    std::string _OS,
    std::initializer_list <std::string> _built_in_applications,

    double response_time_value,
    std::initializer_list <std::string> response_time_unit_string,

    Word_Number _processor,
    unsigned int _processor_count,
    std::initializer_list <Word_Number> _graphic_processor,

    double ram_size,
    std::initializer_list <std::string> ram_size_unit_string,

    double internal_memory_size,
    std::initializer_list <std::string> internal_memory_unit_string,

    std::initializer_list <std::string> _supported_image_type,

    // Audio & video :
    std::initializer_list <std::string> _sound_feature,
    unsigned int _number_of_speakers,
    std::string _speakers,
    std::initializer_list <std::string> _sound_config,
    
    double sound_output_value,
    std::initializer_list <std::string> sound_output_unit_string,

    std::initializer_list <std::string> _audio_format,
    std::initializer_list <std::string> _supported_video_formats,
    std::initializer_list <std::string> _video_format,

    // Connectivity :
    double hdmi_ports_qty,
    std::initializer_list <std::string> hdmi_port_version,

    double usb_ports_qty,
    std::initializer_list <std::string> usb_ports_version,
    
    Word_Number _Wifi,

    double bluetooth_version_value,
    std::initializer_list <std::string> bluetooth_version, 

    std::initializer_list <std::string> _connectivity_technologies,

    // Remote features :
    std::string _remote_included,
    std::initializer_list <std::string>  _remote_type,
    std::initializer_list <std::string>  _remote_technology,

    // General information :
    double power_consumption_value,
    std::initializer_list <std::string> power_consumption_unit_string,

    std::string _power_source,
    
    double Ideal_viewing_distance_value,
    std::initializer_list <std::string> Ideal_viewing_distance_unit_string,

    std::string _Assembly_required,
    std::initializer_list <std::string> _special_features,

    // More details :
    double Resolution_value,
    std::initializer_list <std::string> _Resolution_unit_string,
    
    std::string _indoor_outdoor_usage, 
    std::initializer_list <std::string> _Recommended_Product_For_Uses,
    std::string _colour,
    std::initializer_list <std::string> _mounting_type, 
    
    double voltage_value,
    std::initializer_list <std::string> voltage_unit_string,
    
    std::string _audio_output_mode,
    
    double wattage_value,
    std::initializer_list <std::string> wattage_unit_string,
    
    std::string _audio_input_mode,
    std::string _battery_description,

    double ram_maximum_size_value,
    std::initializer_list <std::string> ram_maximum_size_unit_string,
    
    std::string _signal_format,

    double speaker_maximum_output_power_value,
    std::initializer_list <std::string> speaker_maximum_output_power_unit_string,
    
    std::string _warranty_type, // 
    std::string _water_resistance_level,
    std::initializer_list <std::string> _Compatible_Devices, // 
    std::string _efficiency,
    std::string _parental_control_technology,
    std::string _control_type, 
    std::string _voice_control,
    std::initializer_list <std::string> _hardware_interface,
    std::string _control_method,
    
    std::initializer_list <std::string> _tuner_technology, 
    std::initializer_list <std::string> _wireless_communication_technology,
    std::initializer_list <std::string> _video_encoding,

    double Line_voltage_value,
    std::initializer_list <std::string> Line_voltage_unit_string, 

    // Additional Information  
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

#endif /* _TV_HPP */