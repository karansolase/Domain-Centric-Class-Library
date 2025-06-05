#include "Television.hpp"

Television::Television(
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
      
      std::string _warranty_type,
      std::string _water_resistance_level,
      std::initializer_list <std::string> _Compatible_Devices, 
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
)
:     TV_ProductName(_product_name),
      TV_BrandName(_brand_name),

      TV_VariantsObject(_variants_object),

      TV_CECD_Object(
            _control_type,
            "",
            "",
            "",
            "",
            _power_source,
            "",
            "",
            "",
            "",
            _water_resistance_level,
            _processor,
            _OS,
            {""},

            display_size_value,
            display_size_unit_string,

            0,{""},
            0,{""},
            0,{""},
            0,{""},
            0,{""},
            {Resolution_value,
            _Resolution_unit_string},

            power_consumption_value,
            power_consumption_unit_string,

            0,{""},
            0,{""},
            voltage_value, 
            voltage_unit_string,

            wattage_value, 
            wattage_unit_string,
      
            _connectivity_technologies,
            _mounting_type,
            _wireless_communication_technology,
            _hardware_interface,
            _Compatible_Devices,
            {""}
      ),

      TV_DisplayResolution(
            dim_1,
            dim_2,
            resolution_unit,
            resolution_format),

      TV_Ram(ram_size, ram_size_unit_string),

      TV_Refresh_Rate(
      refresh_rate_value, 
      refresh_rate_unit_string),
      
      TV_Aspect_Ratio(
      aspect_string_1,
      aspect_numerator_1,
      aspect_symbol,
      aspect_denominator_2,
      aspect_string_2),

      TV_Brightness(
      brightness_value,
      brightness_unit_and_string),

      TV_ResponseTime(
      response_time_value,
      response_time_unit_string),

      TV_ContrastRatio(
            contrast_string_1,
            contrast_numerator_1,
            contrast_symbol,
            contrast_denominator_2,
            contrast_string_2),

            TV_Panel(_panel),
            TV_DisplayTechnology(_Display_technology),

            TV_Format(
            format_value, 
            format_unit_string),

            TV_ViewingAngle(
            viewing_angle_value,
            viewing_angle_unit_string),

            TV_ScreenType(_screen_type),

            TV_Type(_TV_type),
            TV_Built_IN_Applications(_built_in_applications),

            TV_ProcessorCount(_processor_count),
            TV_GraphicProcessor(_graphic_processor),

            TV_InternalMemory(
            internal_memory_size,
            internal_memory_unit_string),

            TV_Supported_Image_Type(_supported_image_type),

            TV_SoundFeature(_sound_feature),
            TV_Number_OF_Speakers(_number_of_speakers),
            TV_Speakers(_speakers),
            TV_SoundConfig(_sound_config),

            TV_SoundOutput(
            sound_output_value,
            sound_output_unit_string),

            TV_AudioFormat(_audio_format),
            TV_Supported_Video_Formats(_supported_video_formats),
            TV_Video_Format(_video_format),

            TV_HDMI_Ports(
            hdmi_ports_qty,
            hdmi_port_version),

            TV_USB_Ports(
            usb_ports_qty,
            usb_ports_version),

            TV_Wifi(_Wifi),

            TV_Bluetooth(
            bluetooth_version_value,
            bluetooth_version),

            TV_RemoteIncluded(_remote_included),
            TV_RemoteType(_remote_type),
            TV_RemoteTechnology(_remote_technology),

            TV_Ideal_Viewing_Distance(
            Ideal_viewing_distance_value,
            Ideal_viewing_distance_unit_string),

            TV_AssemblyRequired(_Assembly_required),
            TV_specialFeatures(_special_features),
            TV_Indoor_Outdoor_Usage(_indoor_outdoor_usage),
            TV_Recommended_Uses_For_Product(_Recommended_Product_For_Uses),
            TV_Colour(_colour),
            TV_Audio_Output_Mode(_audio_output_mode),

            TV_Audio_Input_Mode(_audio_input_mode),
            TV_Battery_Description(_battery_description),

            TV_Ram_Maximum_Size(
            ram_maximum_size_value,
            ram_maximum_size_unit_string),

            TV_SignalFormat(_signal_format),

            TV_Speaker_Maximum_Output_Power(
            speaker_maximum_output_power_value,
            speaker_maximum_output_power_unit_string),

            TV_WarrantyType(_warranty_type),
            TV_Efficiency(_efficiency),
            TV_Parental_Control_Technology(_parental_control_technology),
            TV_VoiceControl(_voice_control),
            TV_ControlMethod(_control_method),
            
            TV_TunerTechnology(_tuner_technology),
            TV_VideoEncoding(_video_encoding),
            
            TV_LineVoltage(
            Line_voltage_value,
            Line_voltage_unit_string),

            TV_Additional_Info(
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

};

void Television::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Television& TV_Object){  

  int j = 0;

  os 
  << std::endl << "SMART TV DETAILS    :" << std::endl << std::endl

  << "Product Name : " << TV_Object.TV_ProductName << std::endl
  << "Brand Name : " << TV_Object.TV_BrandName << std::endl << std::endl;

  std::vector<Variants>::const_iterator Iter_1 = 
  TV_Object.TV_VariantsObject.begin();

  while(Iter_1 != TV_Object.TV_VariantsObject.end())
  {
      std::cout << *Iter_1 << std::endl;
      ++Iter_1;
  }

  os
  << "Display Size : " << TV_Object.TV_CECD_Object.CECD_DisplaySize << std::endl
  << "Panel : ";
  TV_Object.printing_vector_string(TV_Object.TV_Panel);
  os << std::endl
  
  << "Display Technology : " << TV_Object.TV_DisplayTechnology << std::endl
  << "Display Resolution : " << TV_Object.TV_DisplayResolution << std::endl
  << "Format : " << TV_Object.TV_Format << std::endl
  << "Refresh Rate : " << TV_Object.TV_Refresh_Rate << std::endl
  << "Viewing Angle : " << TV_Object.TV_ViewingAngle << std::endl
  << "Screen Type : " << TV_Object.TV_ScreenType << std::endl
  << "Aspect Ratio : " << TV_Object.TV_Aspect_Ratio << std::endl
  << "Contrast Ratio : " << TV_Object.TV_ContrastRatio << std::endl
  << "Brightness : " << TV_Object.TV_Brightness << std::endl << std::endl

  << "TV Type : " << TV_Object.TV_Type << std::endl
  << "OS : " << TV_Object.TV_CECD_Object.CECD_OperatingSystem << std::endl

  << "Built in Applications : ";
  TV_Object.printing_vector_string(TV_Object.TV_Built_IN_Applications);
  os << std::endl
  
  << "Response Time : " << TV_Object.TV_ResponseTime << std::endl
  << "Processor : " << TV_Object.TV_CECD_Object.CECD_Processor << std::endl
  << "Processor Count : " << TV_Object.TV_ProcessorCount << std::endl
  
  << "Graphic Processor : ";
  std::vector<Word_Number>::const_iterator Iter_2 = 
  TV_Object.TV_GraphicProcessor.end();

  while(Iter_2 != TV_Object.TV_GraphicProcessor.end())
  {
      std::cout << *Iter_2 << std::endl;
      ++Iter_2;
  }

  os
  << "RAM : " << TV_Object.TV_Ram << std::endl
  << "Internal Memory : " << TV_Object.TV_InternalMemory << std::endl
  
  << "Supported Image Type : ";
  TV_Object.printing_vector_string(TV_Object.TV_Supported_Image_Type);
  os << std::endl
  
  << "Sound Features : ";
  TV_Object.printing_vector_string(TV_Object.TV_SoundFeature);
  os << std::endl
  
  << "Number of Speakers : " << TV_Object.TV_Number_OF_Speakers << std::endl
  << "Speakers : " << TV_Object.TV_Speakers << std::endl
  
  << "Sound Configuration : ";
  TV_Object.printing_vector_string(TV_Object.TV_SoundConfig);
  os << std::endl
  
  << "Sound Output : " << TV_Object.TV_SoundOutput << std::endl
  
  << "Audio Format : ";
  TV_Object.printing_vector_string(TV_Object.TV_AudioFormat);
  os << std::endl
  
  << "Supported Video Formats : ";
  TV_Object.printing_vector_string(TV_Object.TV_Supported_Video_Formats);
  os << std::endl
  
  << "Video Format : ";
  TV_Object.printing_vector_string(TV_Object.TV_Video_Format);
  os << std::endl
  
  << "HDMI Ports : " << TV_Object.TV_HDMI_Ports << std::endl
  << "USB Ports : " << TV_Object.TV_USB_Ports << std::endl
  << "Wifi : " << TV_Object.TV_Wifi << std::endl
  << "Bluetooth : " << TV_Object.TV_Bluetooth << std::endl
  
  << "Connectivity Technologies : ";
  TV_Object.printing_vector_string(TV_Object.TV_CECD_Object.CECD_Connectivity_Technologies);
  os << std::endl
  
  << "Remote Included : " << TV_Object.TV_RemoteIncluded << std::endl
  
  << "Remote Type : ";
  TV_Object.printing_vector_string(TV_Object.TV_RemoteType);
  os << std::endl
  
  << "Remote Technology : ";
  TV_Object.printing_vector_string(TV_Object.TV_RemoteTechnology);
  os << std::endl
  
  << "Power Consumption : " << TV_Object.TV_CECD_Object.CECD_PowerConumptions << std::endl
  << "Power Source : " << TV_Object.TV_CECD_Object.CECD_PowerSource << std::endl
  << "Ideal Viewing Distance : " << TV_Object.TV_Ideal_Viewing_Distance << std::endl
  << "Assembly Required : " << TV_Object.TV_AssemblyRequired << std::endl << std::endl  
  
  << "Special Features : ";
  TV_Object.printing_vector_string(TV_Object.TV_specialFeatures);
  os << std::endl
  
  << "Resolution : " << TV_Object.TV_CECD_Object.CECD_Resolution << std::endl
  << "Indoor Outdoor Usage : " << TV_Object.TV_Indoor_Outdoor_Usage << std::endl
  
  << "Recommended Uses For Product : ";
  TV_Object.printing_vector_string(TV_Object.TV_Recommended_Uses_For_Product);
  os << std::endl
  
  << "Colour : " << TV_Object.TV_Colour << std::endl
  
  << "Mounting Type : ";
  TV_Object.printing_vector_string(TV_Object.TV_CECD_Object.CECD_MountingType);
  os << std::endl
  
  << "Voltage : " << TV_Object.TV_CECD_Object.CECD_Voltage << std::endl
  << "Audio Output Mode : " << TV_Object.TV_Audio_Output_Mode << std::endl
  << "Wattage : " << TV_Object.TV_CECD_Object.CECD_Wattage << std::endl
  << "Audio Input Mode : " << TV_Object.TV_Audio_Input_Mode << std::endl
  << "Battery Description : " << TV_Object.TV_Battery_Description << std::endl
  << "Ram Maximum Size : " << TV_Object.TV_Ram_Maximum_Size << std::endl
  << "Signal Format : " << TV_Object.TV_SignalFormat << std::endl
  << "Speaker maximum output Power : " << TV_Object.TV_Speaker_Maximum_Output_Power << std::endl
  << "Warranty Type : " << TV_Object.TV_WarrantyType << std::endl
  << "Water Resistance Level : " << TV_Object.TV_CECD_Object.CECD_WaterResistant << std::endl << std::endl
  
  << "Compatible Devices : ";
  TV_Object.printing_vector_string(TV_Object.TV_CECD_Object.CECD_CompatibleDevices);
  os << std::endl
  
  << "Efficiency : " << TV_Object.TV_Efficiency << std::endl
  << "Parental Control Technology : " << TV_Object.TV_Parental_Control_Technology << std::endl
  << "Control Type : " << TV_Object.TV_CECD_Object.CECD_Control_Type_OR_Console << std::endl
  << "Voice Control : " << TV_Object.TV_VoiceControl << std::endl << std::endl
  
  << "Hardware Interface : ";
  TV_Object.printing_vector_string(TV_Object.TV_CECD_Object.CECD_HardwareInterface);
  os << std::endl
  
  << "Control Method : " << TV_Object.TV_ControlMethod << std::endl << std::endl
  
  << "Tuner Technology : ";
  TV_Object.printing_vector_string(TV_Object.TV_TunerTechnology);
  os << std::endl
  
  << "Wirless Communication Technology : ";
  TV_Object.printing_vector_string(TV_Object.TV_CECD_Object.CECD_WirelessType);
  os << std::endl
  
  << "Video Encoding : "; 
  TV_Object.printing_vector_string(TV_Object.TV_VideoEncoding);
  os << std::endl
  
  << "Line Voltage : " << TV_Object.TV_LineVoltage << std::endl << std::endl

  << "ADDITIONAL INFORMATION    :" << std::endl << std::endl
  << TV_Object.TV_Additional_Info;

  return os;
}

