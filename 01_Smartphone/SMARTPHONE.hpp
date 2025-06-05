#pragma once 

#ifndef _SMARTPHONE_HPP
#define _SMARTPHONE_HPP

#pragma once

#include <iostream>
#include "variants.hpp"
#include "Screen_Based_Devices_Details.hpp"
#include "Additional_Info.hpp"
#include "word_number.hpp"
#include <vector>

class SmartPhone{
    friend std::ostream& operator<<(std::ostream& os, const SmartPhone& SMRT_PHN_Object);

    private :
    std::string SMRT_PHN_ProductName;
    std::string SMRT_PHN_BrandName;
    std::string SMRT_PHN_ModelName;

    std::vector <Variants> SMRT_PHN_VariantsObject;
    Screen_Based_Device_Details SMRT_PHN_SBDD_Object;

    std::vector <std::string> SMRT_PHN_Camera;
    std::vector <std::string> SMRT_PHN_CameraFeatures; 
    std::string SMRT_PHN_CameraFlash; 
    Measurement_and_unit SMRT_PHN_Battery;
    std::string SMRT_PHN_BatteryComposition; 
    Measurement_and_unit SMRT_PHN_TalkTime;
    std::string SMRT_PHN_Charger; 
    Measurement_and_unit SMRT_PHN_ChargerPower; 
    Measurement_and_unit SMRT_PHN_RAM_Memory;
    Measurement_and_unit SMRT_PHN_InternalStorage;
    std::string SMRT_PHN_Upgrades_Updates;
    Measurement_and_unit SMRT_PHN_Processor_Speed;
    std::string SMRT_PHN_Core;
    std::vector <std::string> SMRT_PHN_AdditionalFeatures;

    std::string SMRT_PHN_SimType;
    std::string SMRT_PHN_Network_Service_Provider;
    std::string SMRT_PHN_Cellular_Technology;
    std::string SMRT_PHN_Fingerprint_SensorType;
    Measurement_and_unit SMRT_PHN_Audio_Jack;
    std::string SMRT_PHN_SimCardSlot;
    std::string SMRT_PHN_LensType; 
    Measurement_and_unit SMRT_PHN_RearCamera;
    std::string SMRT_PHN_Human_Interface_Input;
    std::string SMRT_PHN_Sim_Card_Size;
    std::string SMRT_PHN_Material;
    std::string SMRT_PHN_GPS;
    Measurement_and_unit SMRT_PHN_Effective_VideoResolution;
    Measurement_and_unit SMRT_PHN_Effective_Sensor_Resolution; 
    Measurement_and_unit SMRT_PHN_Optical_Video_Resolution;
    Measurement_and_unit SMRT_PHN_Optical_Sensor_Resolution; 
    std::vector <Measurement_and_unit> SMRT_PHN_video_Capture_Resolution; 
    
    Additional_Info SMRT_PHN_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public : 
    SmartPhone(
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
    );

};

#endif 
