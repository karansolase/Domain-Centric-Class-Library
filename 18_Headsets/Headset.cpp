#include "headset.hpp"

HeadPhone::HeadPhone(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <Variants> _variants_object,

    std::string _form_factor,
    std::string _ear_placement,
    std::string _model_name,
    std::string _Batteries_required,
    std::string _Batteries_cell_composition,
    unsigned int _number_of_items,
    
    double impedance_value,
    std::initializer_list <std::string> impedance_unit_string,
    
    std::string _Noise_control,
    std::string _microphone_included,

    double frequency_response_value,
    std::initializer_list <std::string> frequency_response_unit_string,
    
    Measurement_and_unit _frequency_range,
    
    double headphones_jack_value,
    std::initializer_list <std::string> headphones_jack_unit_string,

    std::string _Amplifier_type,
    std::string _cable_feature,
    std::string _package_type,
 
    double Battery_life_value,
    std::initializer_list <std::string> Battery_life_unit_string,
    
    std::string _Does_it_contain_liquid,
    std::string _Is_Autographed,
    double _Series_number,
    std::string _Multi_mode_Hybrid_Adaptive,
    std::string _Age_range_description,

    double charging_time_value,
    std::initializer_list <std::string> charging_time_unit_string, 
    
    std::string _theme,
    std::string _Water_resistant_level,
    std::string _control_method,

    double Audio_driver_size_value,
    std::initializer_list <std::string> Audio_driver_size_unit_string,
    
    std::string _microphone_format,
    std::string _microphone_technology,
    std::string _includes_rechargeable_battery,
    std::string _sweat_or_water_resistance,
    std::string _signature_sound,
    std::string _customizable_sound,
    std::string _sound_personalization,
    std::string _active_noise_cancellation,
    std::string _anti_wind_mode,
    std::string _transperancy_mode,
    
    Measurement_and_unit _ultra_fast_charging_mode_or_fast_fuel,
    
    std::string _Device_Ecosystem,
    std::string _On_device_control,
    std::string _calling_capability,
    std::string _personalized_spatial_Audio,
    std::string _lossless_Audio,
    std::string _chip_platform,
    std::string _charging_port,
    std::string _controls_or_control_type,
    std::string _carry_case,
    std::string _Adjustable_sidetone,
    std::string _Audio_driver_type,
    
    double Bluetooth_range_value,
    std::initializer_list <std::string> Bluetooth_range_unit_string,

    double _Bluetooth_version,
    std::string _hardware_platform,
    std::string _power_source,
    
    double sensitivity_value,
    std::initializer_list <std::string> sensitivity_unit_string,
    
    double carrying_case_battery_average_life_value,
    std::initializer_list <std::string> carrying_case_battery_average_life_unit_string,
    
    double carrying_case_length_value,
    std::initializer_list <std::string> carrying_case_length_unit_string,
    
    double carrying_case_width_value, 
    std::initializer_list <std::string> carrying_case_width_unit_string,
    
    double carrying_case_height_value,
    std::initializer_list <std::string> carrying_case_height_unit_string,
    
    double carrying_case_weight_value,
    std::initializer_list <std::string> carrying_case_weight_unit_string,
    
    std::string _carrying_case_material,
    std::string _carrying_case_color,
    std::string _earpiece_shape,
    
    double maximum_operating_distance_value,
    std::initializer_list <std::string> maximum_operating_distance_unit_string,
    
    std::string _beast_mode_low_latency,
    
    double cable_length_value,
    std::initializer_list <std::string> cable_length_unit_string,
    
    std::string _headset_type,
    std::string _UC_compatible,
    std::string _headband,
    std::string _tangle_free_cord,
    
    double memory_storage_capacity_value,
    std::initializer_list <std::string> memory_storage_capacity_unit_string,
    
    double digital_storage_capacity_value,
    std::initializer_list <std::string> digital_storage_capacity_unit_string,
    
    std::string _colour_screen,
    
    double voltage_unit_value,
    std::initializer_list <std::string> voltage_unit_string,
    
    std::string _includes_remote,
    std::string _global_trade_identification_number,
    
    std::initializer_list <std::string> _UPC,
    std::initializer_list <std::string> _Connectivity_technologies,
    std::initializer_list <std::string> _connector_type,
    std::initializer_list <std::string> _wireless_communication_technology,
    std::initializer_list <std::string> _Compatible_devices,
    std::initializer_list <std::string> _material,
    std::initializer_list <std::string> _control_type,
    std::initializer_list <std::string> _controller_type,
    
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Special_features,
    std::initializer_list <std::string> _Specific_uses_for_product,

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
:   Hdphn_ProductName(_product_name),
    Hdphn_BrandName(_brand_name),

    Hdphn_VariantsObject(_variants_object),

    Hdphn_SBDD_Object(
        0,{""},
        0,{""},
        "",0,"",0,"",
        0,{""},
        0,{""},
        0,{""},
        charging_time_value,
        charging_time_unit_string,
        Battery_life_value,
        Battery_life_unit_string,
        {""},
        0,{""},

        "",
        {""},
        _Batteries_cell_composition,
        _form_factor,
        {""},
        _Water_resistant_level,

        _Connectivity_technologies,
        {""},
        {""},
        {""},
        _Compatible_devices
    ),

    Hdphn_BatteriesRequired(_Batteries_required),
    Hdphn_NoiseControl(_Noise_control),
    Hdphn_EarPlacement(_ear_placement),
    Hdphn_ModelName(_model_name),
    HdphnNumber_OF_Items(_number_of_items),
    
    Hdphn_Impedance(
        impedance_value,
        impedance_unit_string),
    
        Hdphn_MicrophoneIncluded(_microphone_included),

        Hdphn_FrequencyResponse(
        frequency_response_value,
        frequency_response_unit_string
    ),
    
    Hdphn_FrequencyRange(_frequency_range),

    Hdphn_HeadphonesJack(
        headphones_jack_value,
        headphones_jack_unit_string),

        Hdphn_AmplifierType(_Amplifier_type),
        Hdphn_Cable_Feature(_cable_feature),
        Hdphn_Package_Type(_package_type),
        Hdphn_Does_It_Contain_Liquid(_Does_it_contain_liquid),
        Hdphn_Is_Autographed(_Is_Autographed),
        Hdphn_SeriesNumber(_Series_number),
        Hdphn_Multi_Mode_Hybrid_Adaptive(_Multi_mode_Hybrid_Adaptive),
        Hdphn_Age_Range_Description(_Age_range_description),
    
        Hdphn_Theme(_theme),
        
        Hdphn_ControlMethod(_control_method),

        Hdphn_AudioDriverSize(
        Audio_driver_size_value,
        Audio_driver_size_unit_string),
    
        Hdphn_MicrophoneFormat(_microphone_format),
        Hdphn_MicrophoneTechnology(_microphone_technology),
        Hdphn_Includes_Rechargeable_Battery(_includes_rechargeable_battery),
        Hdphn_Sweat_OR_WaterResistance(_sweat_or_water_resistance),
        Hdphn_SignatureSound(_signature_sound),
        Hdphn_CustomizableSound(_customizable_sound),
        Hdphn_SoundPersonalization(_sound_personalization),
        Hdphn_Active_NoiseCancellation(_active_noise_cancellation),
        Hdphn_AntiWindMode(_anti_wind_mode),
        Hdphn_TransperancyMode(_transperancy_mode),

        Hdphn_Ultra_Fast_Charging_Mode_OR_Fast_Fuel(
        _ultra_fast_charging_mode_or_fast_fuel
    ),
    
    Hdphn_DeviceEcosystem(_Device_Ecosystem),
    Hdphn_On_DeviceControl(_On_device_control),
    Hdphn_CallingCapability(_calling_capability),
    Hdphn_PersonalizedSpatial_Audio(_personalized_spatial_Audio),
    Hdphn_LosslessAudio(_lossless_Audio),
    Hdphn_ChipPlatform(_chip_platform),
    Hdphn_ChargingPort(_charging_port),
    Hdphn_Controls_OR_ControlType(_controls_or_control_type),
    Hdphn_CarryCase(_carry_case),
    Hdphn_AdjustableSidetone(_Adjustable_sidetone),
    Hdphn_Audio_Driver_Type(_Audio_driver_type),
    
    Hdphn_BluetoothRange(
        Bluetooth_range_value,
        Bluetooth_range_unit_string),

    Hdphn_BluetoothVersion(_Bluetooth_version),
    Hdphn_Hardware_Platform(_hardware_platform),
    Hdphn_PowerSource(_power_source),
    
    Hdphn_Sensitivity(
        sensitivity_value,
        sensitivity_unit_string),

        Hdphn_Carrying_Case_Battery_Average_Life(
        carrying_case_battery_average_life_value,
        carrying_case_battery_average_life_unit_string),
    
        Hdphn_Carrying_Case_Length(
        carrying_case_length_value,
        carrying_case_length_unit_string),

        Hdphn_Carrying_Case_Width(
        carrying_case_width_value,
        carrying_case_width_unit_string
    ),

    Hdphn_Carrying_Case_Height(
        carrying_case_height_value,
        carrying_case_height_unit_string
    ),

    Hdphn_Carryng_Case_Weight(
        carrying_case_weight_value,
        carrying_case_weight_unit_string
    ),

    Hdphn_Carrying_Case_Material(_carrying_case_material),
    Hdphn_Carrying_Case_Color(_carrying_case_color),
    Hdphn_EarpieceShape(_earpiece_shape),

    Hdphn_Maximum_Operating_Distance(
        maximum_operating_distance_value,
        maximum_operating_distance_unit_string),
        
        Hdphn_BeastMode_lowLatency(_beast_mode_low_latency),
    
        Hdphn_Cablelength(
        cable_length_value,
        cable_length_unit_string),
    
        Hdphn_HeadsetType(_headset_type),
        Hdphn_UC_Compatible(_UC_compatible),
        Hdphn_Headband(_headband),
        Hdphn_TangleFreeCord(_tangle_free_cord),
    
        Hdphn_Memory_Storage_Capacity(
        memory_storage_capacity_value,
        memory_storage_capacity_unit_string),
    
        Hdphn_Digital_Storage_Capacity(
        digital_storage_capacity_value,
        digital_storage_capacity_unit_string
    ),
    
    Hdphn_ColourScreen(_colour_screen),
    
    Hdphn_Voltage(
        voltage_unit_value,
        voltage_unit_string),
    
        Hdphn_IncludesRemote(_includes_remote),
        Hdphn_Global_Trade_Identification_Number(_global_trade_identification_number),
    
        Hdphn_UPC(_UPC),
        Hdphn_connectorType(_connector_type),
        Hdphn_Wireless_Communication_Technology(_wireless_communication_technology),
        Hdphn_Material(_material),
        Hdphn_Control_Type(_control_type),
        Hdphn_Controller_Type(_controller_type),

        Hdphn_About_this_item(_About_this_item),
        Hdphn_Special_Features(_Special_features),
        Hdphn_Specific_Uses_FOR_roduct(_Specific_uses_for_product),

        Hdphn_Additional_Info(
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

void HeadPhone::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const HeadPhone& Hdphn_Object){
    os << "HEADPHONE DETAILS    : " << std::endl << std::endl

    << "Product Name : " << Hdphn_Object.Hdphn_ProductName << std::endl
    << "Brand Name : " << Hdphn_Object.Hdphn_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Hdphn_Object.Hdphn_VariantsObject.begin();

    while(Iter_1 != Hdphn_Object.Hdphn_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os
    << "Form Factor : " << Hdphn_Object.Hdphn_SBDD_Object.SBDD_FormFactor << std::endl
    << "Ear Placement : " << Hdphn_Object.Hdphn_EarPlacement << std::endl
    << "Model Name : " << Hdphn_Object.Hdphn_ModelName << std::endl
    << "Batteries Included : " << Hdphn_Object.Hdphn_BatteriesRequired << std::endl
    << "Batteries Cell Composition : " << Hdphn_Object.Hdphn_SBDD_Object.SBDD_Battery_Cell_Composition << std::endl
    << "Noise Control : " << Hdphn_Object.Hdphn_NoiseControl << std::endl
    << "Microphone Included : " << Hdphn_Object.Hdphn_MicrophoneIncluded << std::endl
    << "Amplifier Type : " << Hdphn_Object.Hdphn_AmplifierType << std::endl
    << "Cable Feature : " << Hdphn_Object.Hdphn_Cable_Feature << std::endl
    << "Package Type : " << Hdphn_Object.Hdphn_Package_Type << std::endl
    << "Does it Contain Liquid : " << Hdphn_Object.Hdphn_Does_It_Contain_Liquid << std::endl
    << "Is Autographed : " << Hdphn_Object.Hdphn_Is_Autographed << std::endl
    << "Multi Mode Hybrid Adaptive : " << Hdphn_Object.Hdphn_Multi_Mode_Hybrid_Adaptive << std::endl
    << "Age Range Description : " << Hdphn_Object.Hdphn_Age_Range_Description << std::endl
    << "Theme : " << Hdphn_Object.Hdphn_Theme << std::endl
    << "Water Resistant Level : " << Hdphn_Object.Hdphn_SBDD_Object.SBDD_WaterResistant << std::endl
    << "Control Method : " << Hdphn_Object.Hdphn_ControlMethod << std::endl
    << "Microphone Format : " << Hdphn_Object.Hdphn_MicrophoneFormat << std::endl
    << "Microphone Technology : " << Hdphn_Object.Hdphn_MicrophoneTechnology << std::endl
    << "Includes Rechargeable Battery : " << Hdphn_Object.Hdphn_Includes_Rechargeable_Battery << std::endl
    << "Sweat or Water Resistance : " << Hdphn_Object.Hdphn_Sweat_OR_WaterResistance << std::endl
    << "Signature Sound : " << Hdphn_Object.Hdphn_SignatureSound << std::endl
    << "Customizable Sound : " << Hdphn_Object.Hdphn_CustomizableSound << std::endl
    << "Sound Personalization : " << Hdphn_Object.Hdphn_SoundPersonalization << std::endl
    << "Active Noise Cancellation : " << Hdphn_Object.Hdphn_Active_NoiseCancellation << std::endl
    << "Anti Wind Mode : " << Hdphn_Object.Hdphn_AntiWindMode << std::endl
    << "Transperancy Mode : " << Hdphn_Object.Hdphn_TransperancyMode << std::endl
    << "Device Ecosystem : " << Hdphn_Object.Hdphn_DeviceEcosystem << std::endl
    << "On Device Control : " << Hdphn_Object.Hdphn_On_DeviceControl << std::endl
    << "Calling Capability : " << Hdphn_Object.Hdphn_CallingCapability << std::endl
    << "Personalized Spatial Audio : " << Hdphn_Object.Hdphn_PersonalizedSpatial_Audio << std::endl
    << "Lossless Audio : " << Hdphn_Object.Hdphn_LosslessAudio << std::endl
    << "Chip Platform : " << Hdphn_Object.Hdphn_ChipPlatform << std::endl
    << "Charging port : " << Hdphn_Object.Hdphn_ChargingPort << std::endl
    << "Controls or Control Type : " << Hdphn_Object.Hdphn_Controls_OR_ControlType << std::endl
    << "Carry Case : " << Hdphn_Object.Hdphn_CarryCase << std::endl 
    << "Adjustable Sidetone : " << Hdphn_Object.Hdphn_AdjustableSidetone << std::endl
    << "Audio Driver Type : " << Hdphn_Object.Hdphn_Audio_Driver_Type << std::endl
    << "Hardware Platform : " << Hdphn_Object.Hdphn_Hardware_Platform << std::endl
    << "Power Source : " << Hdphn_Object.Hdphn_PowerSource << std::endl
    << "Carrying Case Material : " << Hdphn_Object.Hdphn_Carrying_Case_Material << std::endl
    << "Carrying Case color : " << Hdphn_Object.Hdphn_Carrying_Case_Color << std::endl
    << "Earpiece Shape : " << Hdphn_Object.Hdphn_EarpieceShape << std::endl
    << "Beast Mode (Low Latency) : " << Hdphn_Object.Hdphn_BeastMode_lowLatency << std::endl
    << "Headset Type : " << Hdphn_Object.Hdphn_HeadsetType << std::endl
    << "UC Compatible : " << Hdphn_Object.Hdphn_UC_Compatible << std::endl
    << "Headband : " << Hdphn_Object.Hdphn_Headband << std::endl
    << "Tangle Free Cord : " << Hdphn_Object.Hdphn_TangleFreeCord << std::endl
    << "Colour Screen : " << Hdphn_Object.Hdphn_ColourScreen << std::endl
    << "Inlcudes Remote : " << Hdphn_Object.Hdphn_IncludesRemote << std::endl 
    << "Global Trade Identification Number : " << Hdphn_Object.Hdphn_Global_Trade_Identification_Number << std::endl << std::endl
    
    << "Series Number : " << Hdphn_Object.Hdphn_SeriesNumber << std::endl
    << "Bluetooth Version : " << Hdphn_Object.Hdphn_BluetoothVersion << std::endl
    << "Number of Items : " << Hdphn_Object.HdphnNumber_OF_Items << std::endl << std::endl
    
    << "Impedance : " << Hdphn_Object.Hdphn_Impedance << std::endl
    << "Frequency Response : " << Hdphn_Object.Hdphn_FrequencyResponse << std::endl
    << "Frequency Range : " << Hdphn_Object.Hdphn_FrequencyRange << std::endl
    << "Headphone Jack : " << Hdphn_Object.Hdphn_HeadphonesJack << std::endl
    << "Battery Life : " << Hdphn_Object.Hdphn_SBDD_Object.SBDD_BatteryLife_OR_Capacity << std::endl
    << "Charging Time : " << Hdphn_Object.Hdphn_SBDD_Object.SBDD_ChargingTime << std::endl
    << "Audio Driver Size : " << Hdphn_Object.Hdphn_AudioDriverSize << std::endl
    << "Ultra Fast CHarging Mode or Fast Fuel : " << Hdphn_Object.Hdphn_Ultra_Fast_Charging_Mode_OR_Fast_Fuel << std::endl
    << "Bluetooth range Value : " << Hdphn_Object.Hdphn_BluetoothRange << std::endl
    << "Sensitivity : " << Hdphn_Object.Hdphn_Sensitivity << std::endl
    << "Carrying Case Battery Average Life : " << Hdphn_Object.Hdphn_Carrying_Case_Battery_Average_Life << std::endl
    << "Carrying Case Length : " << Hdphn_Object.Hdphn_Carrying_Case_Length << std::endl
    << "Carrying Case Width : " << Hdphn_Object.Hdphn_Carrying_Case_Width << std::endl
    << "Carrying Case Height : " << Hdphn_Object.Hdphn_Carrying_Case_Height << std::endl
    << "Carryng Case Weight : " << Hdphn_Object.Hdphn_Carryng_Case_Weight << std::endl
    << "Maximum operating Distance : " << Hdphn_Object.Hdphn_Maximum_Operating_Distance << std::endl
    << "Cable Length : " << Hdphn_Object.Hdphn_Cablelength << std::endl
    << "Memory Storage Capacity Value : " << Hdphn_Object.Hdphn_Memory_Storage_Capacity << std::endl
    << "Digital Storage Capacity Value : " << Hdphn_Object.Hdphn_Digital_Storage_Capacity << std::endl
    << "Voltage : " << Hdphn_Object.Hdphn_Voltage << std::endl << std::endl

    << "UPC : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_UPC);
    os << std::endl

    << "Connectivity Technologies : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_SBDD_Object.SBDD_Connectivity_Technlogies);
    os << std::endl

    << "Connector Type : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_connectorType);
    os << std::endl

    << "Wireless Communication Technology : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_Wireless_Communication_Technology);
    os << std::endl

    << "Compatible Devices : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_SBDD_Object.SBDD_CompatibleDevices);
    os << std::endl

    << "Material : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_Material);
    os << std::endl

    << "Control Type : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_Control_Type);
    os << std::endl

    << "Controller Type : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_Controller_Type);
    os << std::endl

    << "About this item : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_About_this_item);
    os << std::endl

    << "Special Features : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_Special_Features);
    os << std::endl

    << "Specfic Uses for product : ";
    Hdphn_Object.printing_vector_string(Hdphn_Object.Hdphn_Specific_Uses_FOR_roduct);
    os << std::endl
    
    << "Additional Information : " << std::endl << std::endl
    << Hdphn_Object.Hdphn_Additional_Info;

    return os;
}