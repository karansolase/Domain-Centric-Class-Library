#include "SMARTPHONE.hpp"

SmartPhone::SmartPhone(
    std::string _product_name,
    std::string _brand,
    std::string _model_name,

    std::initializer_list <Variants> _variants_object,

    double display_size,
    std::initializer_list <std::string> display_unit_string,

    std::initializer_list <std::string> _camera,
    std::initializer_list <std::string> _camera_features,
    std::string _camera_flash,

    double battery_power_value,
    std::initializer_list <std::string> battery_unit_string,

    std::string _battery_composition,

    double talk_time_value,
    std::initializer_list <std::string> talk_time_unit_string,

    std::string _charger,

    double charger_power,
    std::initializer_list <std::string> charger_power_unit,

    double charging_time_value,
    std::initializer_list <std::string> charging_time_unit_string,

    double RAM_size,
    std::initializer_list <std::string> RAM_unit_string,

    double internal_storage_size,
    std::initializer_list <std::string> internal_storage_unit_string,

    double refresh_rate_value,
    std::initializer_list <std::string> refresh_rate_unit_string,

    std::string _upgrades_updates,
    std::string _CPU_Model,
    Word_Number _processor,

    double processor_speed_value,
    std::initializer_list <std::string> processor_speed_unit_string,

    std::string Apsect_Ratio_String_1,
    double Aspect_Ratio_First_Value,
    std::string Aspect_Ratio_Symbol,
    double Aspect_Ratio_Second_Value,
    std::string Aspect_Ratio_String_2,

    double Brightness_Value, 
    std::initializer_list <std::string> Brightness_Unit_And_String,

    double ResponseTime_Value, 
    std::initializer_list <std::string> ResponseTime_Unit_And_String,

    Word_Number _operating_system,

    std::string _core,
    std::initializer_list<std::string> _additional_features,
    std::string _sim_type,
    std::string _network_service_provider,
    std::string _cellular_technology,
    std::initializer_list <std::string> _connectivity,
    std::initializer_list<std::string> _wireless_network_technology,
    std::string _fingerprint_sensor_type,

    double audio_jack_size,
    std::initializer_list <std::string> audio_jack_unit_string,
    
    std::string _sim_card_slot,

    double dim_1,
    double dim_2,
    std::string resolution_unit,
    std::string resolution_format,

    std::string _lens_type,
    std::string _form_factor,
    
    double rear_camera_size,
    std::initializer_list <std::string> rear_camera_unit_string,

    std::string _human_interface_input,
    std::string _Sim_card_size,
    std::string _Material,
    std::string _GPS,
    std::string _water_resistant,
    std::initializer_list <std::string> _compatible_devices,

    double effective_video_resolution_size,
    std::initializer_list <std::string> effective_video_resolution_unit_string,

    double effective_sensor_resolution_size,
    std::initializer_list <std::string> effective_sensor_resolution_unit_string,

    double optical_video_resolution_size,
    std::initializer_list <std::string> optical_video_resolution_unit_string,

    double optical_sensor_resolution_size,
    std::initializer_list <std::string> optical_sensor_resolution_unit_string,

    std::initializer_list <Measurement_and_unit> _video_capture_resolution,
    
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
:   SMRT_PHN_ProductName(_product_name),
    SMRT_PHN_BrandName(_brand),
    SMRT_PHN_ModelName(_model_name),

    SMRT_PHN_VariantsObject(_variants_object),

    SMRT_PHN_SBDD_Object(
        display_size,
        display_unit_string,

        refresh_rate_value,
        refresh_rate_unit_string,
        {
            Apsect_Ratio_String_1,
            Aspect_Ratio_First_Value,
            Aspect_Ratio_Symbol,
            Aspect_Ratio_Second_Value,
            Aspect_Ratio_String_2
        },
        Brightness_Value,
        Brightness_Unit_And_String,
        ResponseTime_Value,
        ResponseTime_Unit_And_String,
        0,{""},
        charging_time_value, 
        charging_time_unit_string,
        0,{""},

        {dim_1, 
        dim_2, 
        resolution_unit, 
        resolution_format},

        0,{""},

        _CPU_Model,
        _operating_system,
        "",
        _form_factor,
        _processor,
        _water_resistant,

        _connectivity,
        {""},
        _wireless_network_technology,
        {""},
        _compatible_devices
    ),

        SMRT_PHN_Camera(_camera),
        SMRT_PHN_CameraFeatures(_camera_features),
        SMRT_PHN_CameraFlash(_camera_flash),

        SMRT_PHN_Battery(
        battery_power_value, 
        battery_unit_string),

        SMRT_PHN_BatteryComposition(_battery_composition),
    
        SMRT_PHN_TalkTime(
        talk_time_value, 
        talk_time_unit_string),
    
        SMRT_PHN_Charger(_charger),

        SMRT_PHN_ChargerPower(
        charger_power, 
        charger_power_unit),

        SMRT_PHN_RAM_Memory(
        RAM_size, 
        RAM_unit_string),

        SMRT_PHN_InternalStorage(
        internal_storage_size, 
        internal_storage_unit_string),
    
        SMRT_PHN_Upgrades_Updates(_upgrades_updates),

        SMRT_PHN_Processor_Speed(
        processor_speed_value, 
        processor_speed_unit_string),

        SMRT_PHN_Core(_core),
        SMRT_PHN_AdditionalFeatures(_additional_features),

        SMRT_PHN_SimType(_sim_type),
        SMRT_PHN_Network_Service_Provider(_network_service_provider),
        SMRT_PHN_Cellular_Technology(_cellular_technology),
        SMRT_PHN_Fingerprint_SensorType(_fingerprint_sensor_type),

        SMRT_PHN_Audio_Jack(
        audio_jack_size, 
        audio_jack_unit_string),

        SMRT_PHN_SimCardSlot(_sim_card_slot),

        SMRT_PHN_LensType(_lens_type),

        SMRT_PHN_RearCamera(
        rear_camera_size, 
        rear_camera_unit_string),

        SMRT_PHN_Human_Interface_Input(_human_interface_input),
        SMRT_PHN_Sim_Card_Size(_Sim_card_size),
        SMRT_PHN_Material(_Material),
        SMRT_PHN_GPS(_GPS),
    
        SMRT_PHN_Effective_VideoResolution(
        effective_video_resolution_size,
        effective_video_resolution_unit_string),

        SMRT_PHN_Effective_Sensor_Resolution(
        effective_sensor_resolution_size,
        effective_sensor_resolution_unit_string),

        SMRT_PHN_Optical_Video_Resolution(
        optical_video_resolution_size,
        optical_video_resolution_unit_string),

        SMRT_PHN_Optical_Sensor_Resolution(
        optical_sensor_resolution_size,
        optical_sensor_resolution_unit_string),

        SMRT_PHN_video_Capture_Resolution(_video_capture_resolution),
    
        SMRT_PHN_Additional_Info(
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

void SmartPhone::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const SmartPhone& SMRT_PHN_Object){

    int j = 0;

    os << "PRODUCT DETAILS :- " << std::endl << std::endl

       << "Product Name : " << SMRT_PHN_Object.SMRT_PHN_ProductName << std::endl
       << "Brand : "        << SMRT_PHN_Object.SMRT_PHN_BrandName << std::endl
       << "Model Name : " << SMRT_PHN_Object.SMRT_PHN_ModelName << std::endl << std::endl;

       std::vector<Variants>::const_iterator Iter_1 =
       SMRT_PHN_Object.SMRT_PHN_VariantsObject.begin();

       while(Iter_1 != SMRT_PHN_Object.SMRT_PHN_VariantsObject.end())
       {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
       }
       os

       << "Display : "      << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_DisplaySize << std::endl << std::endl
       
       << "Camera : ";
       SMRT_PHN_Object.printing_vector_string(SMRT_PHN_Object.SMRT_PHN_Camera);
       os << std::endl
       
       << "Camera Features : ";
       SMRT_PHN_Object.printing_vector_string(SMRT_PHN_Object.SMRT_PHN_CameraFeatures);
       os << std::endl
       
       << "Camera Flash : " << SMRT_PHN_Object.SMRT_PHN_CameraFlash << std::endl
       << "Battery : "      << SMRT_PHN_Object.SMRT_PHN_Battery << std::endl
       << "Battery Composition : " << SMRT_PHN_Object.SMRT_PHN_BatteryComposition << std::endl
       << "Talk Time : " << SMRT_PHN_Object.SMRT_PHN_TalkTime << std::endl
       << "Charger : " << SMRT_PHN_Object.SMRT_PHN_Charger << std::endl
       << "Charger Power : " << SMRT_PHN_Object.SMRT_PHN_ChargerPower << std::endl
       << "Charging Time : " << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_ChargingTime << std::endl
       << "RAM Memory : " << SMRT_PHN_Object.SMRT_PHN_RAM_Memory << std::endl
       << "Internal Storage : " << SMRT_PHN_Object.SMRT_PHN_InternalStorage << std::endl
       << "Refresh Rate : " << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_RefreshRate << std::endl
       << "Upgrades and Updates : " << SMRT_PHN_Object.SMRT_PHN_Upgrades_Updates << std::endl
       << "CPU Model : " << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_CPU_Model << std::endl
       << "Processor : " << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_Processor << std::endl
       << "Processor Speed : " << SMRT_PHN_Object.SMRT_PHN_Processor_Speed << std::endl
       << "Operating System : " << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_OperatingSystem << std::endl << std::endl
       << "Core : " << SMRT_PHN_Object.SMRT_PHN_Core << std::endl

       << "Additional Features : ";
       SMRT_PHN_Object.printing_vector_string(SMRT_PHN_Object.SMRT_PHN_AdditionalFeatures);
       os << std::endl
       
       << "Sim Type : "            << SMRT_PHN_Object.SMRT_PHN_SimType << std::endl
       << "Network Service Provider : " << SMRT_PHN_Object.SMRT_PHN_Network_Service_Provider << std::endl
       << "Cellular Technology : " << SMRT_PHN_Object.SMRT_PHN_Cellular_Technology << std::endl << std::endl
       
       << "Connectivity : ";
       SMRT_PHN_Object.printing_vector_string(SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_Connectivity_Technlogies);
       os << std::endl
       
       << "Wireless Network Technology : ";
       SMRT_PHN_Object.printing_vector_string(SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_WirlessType);
       os << std::endl

       << "FingerPrint Sensor Type : " << SMRT_PHN_Object.SMRT_PHN_Audio_Jack << std::endl
       << "Audio Jack : "          << SMRT_PHN_Object.SMRT_PHN_Audio_Jack          << std::endl
       << "Sim Card Slot : "       << SMRT_PHN_Object.SMRT_PHN_SimCardSlot       << std::endl
       << "Resolution : "          << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_Resolution          << std::endl
       << "Lens Type : "           << SMRT_PHN_Object.SMRT_PHN_LensType           << std::endl
       << "Form factor : "         << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_FormFactor         << std::endl
       << "Rear Camera : "         << SMRT_PHN_Object.SMRT_PHN_RearCamera         << std::endl
       << "Human Interface Input : " << SMRT_PHN_Object.SMRT_PHN_Human_Interface_Input << std::endl
       << "Sim Card Sizes : "      << SMRT_PHN_Object.SMRT_PHN_Sim_Card_Size       << std::endl
       << "Material : "            << SMRT_PHN_Object.SMRT_PHN_Material            << std::endl
       << "GPS : "                 << SMRT_PHN_Object.SMRT_PHN_GPS                 << std::endl
       << "Water Resistant : "     << SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_WaterResistant     << std::endl << std::endl
       << "Comaptible Devices : ";
       SMRT_PHN_Object.printing_vector_string(SMRT_PHN_Object.SMRT_PHN_SBDD_Object.SBDD_CompatibleDevices);

       os << std::endl
       << "Effective Video Resolution : " << SMRT_PHN_Object.SMRT_PHN_Effective_VideoResolution << std::endl
       << "Effective Sensor Resolution : " << SMRT_PHN_Object.SMRT_PHN_Effective_Sensor_Resolution << std::endl
       << "Optical Video Resolution : "   << SMRT_PHN_Object.SMRT_PHN_Optical_Video_Resolution   << std::endl 
       << "Optical Sensor Resolution : " << SMRT_PHN_Object.SMRT_PHN_Optical_Sensor_Resolution << std::endl << std::endl
       << "Video Capture Resolution : ";
       std::vector<Measurement_and_unit>::const_iterator Iter_2 = 
       SMRT_PHN_Object.SMRT_PHN_video_Capture_Resolution.begin();

       while(Iter_2 != SMRT_PHN_Object.SMRT_PHN_video_Capture_Resolution.end())
       {
        j = j + 1;
        std::cout << j << ") " << *Iter_2 << std::endl;
        ++Iter_2;
       }
       os << std::endl

       << "Additional Information : " << std::endl << SMRT_PHN_Object.SMRT_PHN_Additional_Info << std::endl;

    return os;
}