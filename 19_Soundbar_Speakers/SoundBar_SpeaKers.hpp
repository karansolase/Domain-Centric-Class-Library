#pragma once 

#ifndef _SOUNDBAR_SPEAKER_HPP
#define _SOUNDBAR_SPEAKER_HPP

#include <iostream>
#include <vector>
#include "Measurement_and_unit.hpp"
#include "variants.hpp"
#include "Additional_Info.hpp"

class SoundBar_SpeaKers{

    friend std::ostream& operator<<(std::ostream& os, const SoundBar_SpeaKers& SoundBar_SpeaKers_Object);

    private :
    std::string SPKR_ProductName;
    std::string SPKR_BrandName;

    std::vector <Variants> SPKR_VariantsObject;     

    std::string SPKR_ColorScreen; 
    std::string SPKR_powerSource;
    std::string SPKR_Vehicle_Service_Type; 
    std::string SPKR_SpeakerType; 
    std::string SPKR_mountingType; 
    std::string SPKR_ControlMethod; 
    std::string SPKR_ControllerType; 
    std::string SPKR_TWS;
    std::string SPKR_AppControl; 
    std::string SPKR_Age_Range_Description; 
    std::string SPKR_Is_Waterproof; 
    std::string SPKR_Water_Resistant_Level; 
    std::string SPKR_HardwarePlatform;
    std::string SPKR_Audio_Input_Compatible_with_the_Item; 
    std::string SPKR_Subwoofer_Connectivity_Technology;
    std::string SPKR_Speaker_Connectivity_Protocol; 
    std::string SPKR_SpeakerConnectivity; 
    std::string SPKR_Model; 
    std::string SPKR_Includes_MP3Player; 
    std::string SPKR_SpeakerAmplification_Type; 
    std::string SPKR_BatteriesIncluded;
    std::string SPKR_BatteriesRequired;  
    std::string SPKR_Batteries_Cell_Composition; 
    std::string SPKR_Does_It_Contain_Liquid; 
    std::string SPKR_Includes_Rechargeable_Battery;
    std::string SPKR_Warranty_Type; 
    std::string SPKR_Wireless_Communication_Technology; 
    std::string SPKR_Audio_Output_Mode; 
    std::string SPKR_Includes_Remote; 

    double SPKR_Surround_Sound_Channel_Configuration; 
    double SPKR_BluetoothVersion; 
    double SPKR_SeriesNumber; 
    unsigned int SPKR_Number_OF_Items;
    unsigned int SPKR_Number_OF_USP_Ports; 
    unsigned int SPKR_Total_USB_ports; 

    Measurement_and_unit SPKR_Maximum_Output_Power; 
    Measurement_and_unit SPKR_Speakers_Nominal_Output_Power; 
    Measurement_and_unit SPKR_InputVoltage; 
    Measurement_and_unit SPKR_Peak_Power_Handling_Speakers; 
    Measurement_and_unit SPKR_Battery_Average_Life; 
    Measurement_and_unit SPKR_subwooferDiameter; 
    Measurement_and_unit SPKR_WooferDiameter; 
    Measurement_and_unit SPKR_FrequencyResponse; 
    Measurement_and_unit SPKR_Standing_Screen_Display_Size; 
    Measurement_and_unit SPKR_Playtime; 
    Measurement_and_unit SPKR_BluetoothRange;
    Measurement_and_unit SPKR_MaximumRange;
    Measurement_and_unit SPKR_SpeakerSize; 
    Measurement_and_unit SPKR_TweeterDiameter; 
    Measurement_and_unit SPKR_AudioDriverSize; 
    Measurement_and_unit SPKR_Wattage; 
    Measurement_and_unit SPKR_AudioWattage; 
    Measurement_and_unit SPKR_Signal_To_Noise_Ratio; 
    Measurement_and_unit SPKR_Impedance; 
    Measurement_and_unit SPKR_ChargingTime; 
    Measurement_and_unit SPKR_RMS_Power_Range_Amplifiers; 
    Measurement_and_unit SPKR_Total_Harmonic_Distortion; 

    std::vector <std::string> SPKR_Connectivity_Technology; 
    std::vector <std::string> SPKR_Compatible_Devices; 
    std::vector <std::string> SPKR_Compatible_Media_Type;
    std::vector <std::string> SPKR_Connector; 
    std::vector <std::string> SPKR_Package_Type; 

    std::vector <std::string> SPKR_Special_Feature; 
    std::vector <std::string> SPKR_Recommended_Uses_For_Product; 
    std::vector <std::string> SPKR_From_Manufacturer; 
    std::vector <std::string> SPKR_About_This_Item;  
    std::vector <std::string> SPKR_Product_Description; 

    Additional_Info SPKR_Additional_Info;

    public :
    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    SoundBar_SpeaKers(
        std::string _product_name,
        std::string _brand_name,

        std::initializer_list <Variants> _variants_object,

        double maximum_output_power_value,
        std::initializer_list <std::string> maximum_output_power_unit_string,

        std::string _colour_screen,

        double Speakers_nominal_output_power_value, 
        std::initializer_list <std::string> Speakers_nominal_output_power_unit_string,

        double input_voltage_value,
        std::initializer_list <std::string> input_voltage_unit_string,

        std::string _power_source,
        std::string _Vehicle_service_type,
        std::string _speaker_type,

        double peak_power_handling_speakers_value,
        std::initializer_list <std::string> peak_power_handling_speakers_unit_string,

        std::string _mounting_type,
        std::string _control_method,
        std::string _controller_type,

        double _surround_sound_channel_configuration,

        double Battery_Average_life_value,
        std::initializer_list <std::string> Battery_Average_life_unit_string,

        double subwoofer_diameter_value,
        std::initializer_list <std::string> subwoofer_diameter_unit_string,

        double woofer_diameter_value,
        std::initializer_list <std::string> woofer_diameter_unit_string,

        double frequency_response_first_value,
        std::string frequency_response_first_value_unit,
        double frequency_response_second_value,
        std::string frequency_response_second_value_unit,
        std::string frequency_response_symbol,
        std::string frequency_response_string,

        double Standing_screen_display_size_value,
        std::initializer_list <std::string> Standing_screen_display_size_unit_string,

        double Playtime_value,
        std::initializer_list <std::string> Playtime_unit_string,

        double _Bluetooth_version,

        double Bluetooth_range_value,
        std::initializer_list <std::string> Bluetooth_range_unit_string,

        std::string _TWS,
        std::string _App_control,
        std::string _Age_range_description,
        std::string _is_waterproof,

        double maximum_range_value,
        std::initializer_list <std::string> maximum_range_unit_string,

        unsigned int _number_of_items,

        double Speaker_size_value,
        std::initializer_list <std::string> Speaker_size_unit_string,

        double tweeter_diameter_value,
        std::initializer_list <std::string> tweeter_diameter_unit_string,

        double Audio_driver_size_value,
        std::initializer_list <std::string> Audio_driver_size_unit_string,

        std::string _water_resistant_level,
        std::string _hardware_platform,
        std::string _Audio_input_compatible_with_the_item,
        std::string _Subwoofer_connectivity_technologies,
        std::string _speaker_connectivity_protocol,
        std::string _speaker_connectivity,
        std::string _Model,
        std::string _includes_MP3_player,
        double _series_number,
        unsigned int _Number_of_USB_Ports,
        std::string _Speaker_amplification_type,

        double wattage_value,
        std::initializer_list <std::string> wattage_unit_string,

        double Audio_wattage_value,
        std::initializer_list <std::string> Audio_wattage_unit_string,

        std::string _Batteries_included,
        std::string _Batteries_required,
        std::string _Batteries_cell_composition,
        unsigned int _Total_USB_Ports,
        std::string _Does_it_contain_liquid,
        std::string _Includes_Rechargeable_Battery,
        std::string _warranty_type,
        std::string _wireless_commuication_technology,

        double Signal_to_Noise_Ratio_value,
        std::initializer_list <std::string> Signal_to_Noise_Ratio_unit_string,

        std::string _Audio_output_mode,

        double impedance_value,
        std::initializer_list <std::string> impedance_unit_string,

        std::string _includes_remote,

        double charging_time_value,
        std::initializer_list <std::string> charging_time_unit_string,

        double RMS_power_range_Amplifiers_value,
        std::initializer_list <std::string> RMS_power_range_Amplifiers_unit_string,

        double total_harmonis_distortion_value,
        std::initializer_list <std::string> total_haromonic_distortion_unit_string,

        std::initializer_list <std::string> _connectivity_technologies,
        std::initializer_list <std::string> _Compatible_devices,
        std::initializer_list <std::string> _Compatible_media_type,
        std::initializer_list <std::string> _Connector,
        std::initializer_list <std::string> _package_type,

        std::initializer_list <std::string> _Special_features,
        std::initializer_list <std::string> _Recommended_uses_for_product,
        std::initializer_list <std::string> _From_manufacturer,
        std::initializer_list <std::string> _About_this_item,
        std::initializer_list <std::string> _product_description,

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
