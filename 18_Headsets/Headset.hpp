#pragma once 

#ifndef _HEADPHONE_HPP
#define _HEADPHONE_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Measurement_and_unit.hpp"
#include "variants.hpp"
#include "Screen_Based_Devices_Details.hpp"
#include <vector>

class HeadPhone{

    friend std::ostream& operator<<(std::ostream& os, const HeadPhone& HeadPhone_Object);

    private :
    std::string Hdphn_ProductName;
    std::string Hdphn_BrandName;

    std::vector <Variants> Hdphn_VariantsObject;
    Screen_Based_Device_Details Hdphn_SBDD_Object;

    std::string Hdphn_EarPlacement;
    std::string Hdphn_ModelName;
    std::string Hdphn_BatteriesRequired;
    std::string Hdphn_NoiseControl;
    std::string Hdphn_MicrophoneIncluded;
    std::string Hdphn_AmplifierType;
    std::string Hdphn_Cable_Feature;
    std::string Hdphn_Package_Type;
    std::string Hdphn_Does_It_Contain_Liquid;
    std::string Hdphn_Is_Autographed;
    std::string Hdphn_Multi_Mode_Hybrid_Adaptive;
    std::string Hdphn_Age_Range_Description;
    std::string Hdphn_Theme;
    std::string Hdphn_ControlMethod;
    std::string Hdphn_MicrophoneFormat;
    std::string Hdphn_MicrophoneTechnology;
    std::string Hdphn_Includes_Rechargeable_Battery;
    std::string Hdphn_Sweat_OR_WaterResistance;
    std::string Hdphn_SignatureSound;
    std::string Hdphn_CustomizableSound;
    std::string Hdphn_SoundPersonalization;
    std::string Hdphn_Active_NoiseCancellation;
    std::string Hdphn_AntiWindMode;
    std::string Hdphn_TransperancyMode;
    std::string Hdphn_DeviceEcosystem;
    std::string Hdphn_On_DeviceControl;
    std::string Hdphn_CallingCapability;
    std::string Hdphn_PersonalizedSpatial_Audio;
    std::string Hdphn_LosslessAudio;
    std::string Hdphn_ChipPlatform;
    std::string Hdphn_ChargingPort;
    std::string Hdphn_Controls_OR_ControlType;
    std::string Hdphn_CarryCase;
    std::string Hdphn_AdjustableSidetone;
    std::string Hdphn_Audio_Driver_Type;
    std::string Hdphn_Hardware_Platform;
    std::string Hdphn_PowerSource;
    std::string Hdphn_Carrying_Case_Material;
    std::string Hdphn_Carrying_Case_Color;
    std::string Hdphn_EarpieceShape;
    std::string Hdphn_BeastMode_lowLatency;
    std::string Hdphn_HeadsetType;
    std::string Hdphn_UC_Compatible;
    std::string Hdphn_Headband;
    std::string Hdphn_TangleFreeCord;
    std::string Hdphn_ColourScreen;
    std::string Hdphn_IncludesRemote;
    std::string Hdphn_Global_Trade_Identification_Number;

    double Hdphn_SeriesNumber;
    double Hdphn_BluetoothVersion;
    unsigned int HdphnNumber_OF_Items;
    
    Measurement_and_unit Hdphn_Impedance;
    Measurement_and_unit Hdphn_FrequencyResponse;
    Measurement_and_unit Hdphn_FrequencyRange;
    Measurement_and_unit Hdphn_HeadphonesJack;
    Measurement_and_unit Hdphn_AudioDriverSize;
    Measurement_and_unit Hdphn_Ultra_Fast_Charging_Mode_OR_Fast_Fuel;
    Measurement_and_unit Hdphn_BluetoothRange;
    Measurement_and_unit Hdphn_Sensitivity;
    Measurement_and_unit Hdphn_Carrying_Case_Battery_Average_Life;
    Measurement_and_unit Hdphn_Carrying_Case_Length;
    Measurement_and_unit Hdphn_Carrying_Case_Width;
    Measurement_and_unit Hdphn_Carrying_Case_Height;
    Measurement_and_unit Hdphn_Carryng_Case_Weight;
    Measurement_and_unit Hdphn_Maximum_Operating_Distance;
    Measurement_and_unit Hdphn_Cablelength;
    Measurement_and_unit Hdphn_Memory_Storage_Capacity;
    Measurement_and_unit Hdphn_Digital_Storage_Capacity;
    Measurement_and_unit Hdphn_Voltage;

    std::vector <std::string> Hdphn_UPC;
    std::vector <std::string> Hdphn_connectorType;
    std::vector <std::string> Hdphn_Wireless_Communication_Technology;
    std::vector <std::string> Hdphn_Material;
    std::vector <std::string> Hdphn_Control_Type;
    std::vector <std::string> Hdphn_Controller_Type;

    std::vector <std::string> Hdphn_About_this_item;
    std::vector <std::string> Hdphn_Special_Features;
    std::vector <std::string> Hdphn_Specific_Uses_FOR_roduct;

    Additional_Info Hdphn_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    HeadPhone(
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

    double _Bluetooh_version,
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
    );
};

#endif