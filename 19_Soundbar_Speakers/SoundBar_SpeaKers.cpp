#include "SoundBar_SpeaKers.hpp"

SoundBar_SpeaKers::SoundBar_SpeaKers(
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
)
:   SPKR_ProductName(_product_name),
    SPKR_BrandName(_brand_name),

    SPKR_VariantsObject(_variants_object),

    SPKR_Maximum_Output_Power(
        maximum_output_power_value,
        maximum_output_power_unit_string),

        SPKR_ColorScreen(_colour_screen),

        SPKR_Speakers_Nominal_Output_Power(
        Speakers_nominal_output_power_value, 
        Speakers_nominal_output_power_unit_string),
    
    SPKR_InputVoltage(
        input_voltage_value,
        input_voltage_unit_string),

        SPKR_powerSource(_power_source),
        SPKR_Vehicle_Service_Type(_Vehicle_service_type),
        SPKR_SpeakerType(_speaker_type),
    
        SPKR_Peak_Power_Handling_Speakers(
        peak_power_handling_speakers_value,
        peak_power_handling_speakers_unit_string),

        SPKR_mountingType(_mounting_type),
        SPKR_ControlMethod(_control_method),
        SPKR_ControllerType(_controller_type),

        SPKR_Surround_Sound_Channel_Configuration(_surround_sound_channel_configuration),
    
        SPKR_Battery_Average_Life(
        Battery_Average_life_value,
        Battery_Average_life_unit_string),
    
        SPKR_subwooferDiameter(
        subwoofer_diameter_value,
        subwoofer_diameter_unit_string),

        SPKR_WooferDiameter(
        woofer_diameter_value,
        woofer_diameter_unit_string),

        SPKR_FrequencyResponse(
        frequency_response_first_value,
        frequency_response_first_value_unit,
        frequency_response_second_value,
        frequency_response_second_value_unit,
        frequency_response_symbol,
        frequency_response_string),

        SPKR_Standing_Screen_Display_Size(
        Standing_screen_display_size_value,
        Standing_screen_display_size_unit_string),

        SPKR_Playtime(
        Playtime_value,
        Playtime_unit_string),

        SPKR_BluetoothVersion(_Bluetooth_version),

        SPKR_BluetoothRange(
        Bluetooth_range_value,
        Bluetooth_range_unit_string),

        SPKR_TWS(_TWS),
        SPKR_AppControl(_App_control),
        SPKR_Age_Range_Description(_Age_range_description),
        SPKR_Is_Waterproof(_is_waterproof),

        SPKR_MaximumRange(
        maximum_range_value,
        maximum_range_unit_string
    ),

    SPKR_Number_OF_Items(_number_of_items),

    SPKR_SpeakerSize(
        Speaker_size_value,
        Speaker_size_unit_string),
    
        SPKR_TweeterDiameter(
        tweeter_diameter_value,
        tweeter_diameter_unit_string),

        SPKR_AudioDriverSize(
        Audio_driver_size_value,
        Audio_driver_size_unit_string),

        SPKR_Water_Resistant_Level(_water_resistant_level),
        SPKR_HardwarePlatform(_hardware_platform),
        SPKR_Audio_Input_Compatible_with_the_Item(_Audio_input_compatible_with_the_item),
        SPKR_Subwoofer_Connectivity_Technology(_Subwoofer_connectivity_technologies),
        SPKR_Speaker_Connectivity_Protocol(_speaker_connectivity_protocol),
        SPKR_SpeakerConnectivity(_speaker_connectivity),
        SPKR_Model(_Model),
        SPKR_Includes_MP3Player(_includes_MP3_player),
        SPKR_SeriesNumber(_series_number),
        SPKR_Number_OF_USP_Ports(_Number_of_USB_Ports),
        SPKR_SpeakerAmplification_Type(_Speaker_amplification_type),
    
        SPKR_Wattage(
        wattage_value,
        wattage_unit_string),
    
        SPKR_AudioWattage(
        Audio_wattage_value,
        Audio_wattage_unit_string),

        SPKR_BatteriesIncluded(_Batteries_included),
        SPKR_BatteriesRequired(_Batteries_required),
        SPKR_Batteries_Cell_Composition(_Batteries_cell_composition),
        SPKR_Total_USB_ports(_Total_USB_Ports),
        SPKR_Does_It_Contain_Liquid(_Does_it_contain_liquid),
        SPKR_Includes_Rechargeable_Battery(_Includes_Rechargeable_Battery),
        SPKR_Warranty_Type(_warranty_type),
        SPKR_Wireless_Communication_Technology(_wireless_commuication_technology),
    
        SPKR_Signal_To_Noise_Ratio(
        Signal_to_Noise_Ratio_value,
        Signal_to_Noise_Ratio_unit_string),
    
        SPKR_Audio_Output_Mode(_Audio_output_mode),
    
        SPKR_Impedance(
        impedance_value,
        impedance_unit_string),
    
        SPKR_Includes_Remote(_includes_remote),

        SPKR_ChargingTime(
        charging_time_value,
        charging_time_unit_string),

        SPKR_RMS_Power_Range_Amplifiers(
        RMS_power_range_Amplifiers_value,
        RMS_power_range_Amplifiers_unit_string),

        SPKR_Total_Harmonic_Distortion(
        total_harmonis_distortion_value,
        total_haromonic_distortion_unit_string),

        SPKR_Connectivity_Technology(_connectivity_technologies),
        SPKR_Compatible_Devices(_Compatible_devices),
        SPKR_Compatible_Media_Type(_Compatible_media_type),
        SPKR_Connector(_Connector),
        SPKR_Package_Type(_package_type),

        SPKR_Special_Feature(_Special_features),
        SPKR_Recommended_Uses_For_Product(_Recommended_uses_for_product),
        SPKR_From_Manufacturer(_From_manufacturer),
        SPKR_About_This_Item(_About_this_item),
        SPKR_Product_Description(_product_description),

        SPKR_Additional_Info(
            _ASIN,

            Manufacturing_Object,
            _Manufacturing_Year,

            _Warranty,

            _Country_Of_Origin,
            _Model_Number,

            _Ratings, _Reviews,

            _Best_Seller_Rank,

            _Date_First_Available,

            Packer_Object, Importer_Object,

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

void SoundBar_SpeaKers::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const SoundBar_SpeaKers& SoundBar_SpeaKers_Object){
    os << "PRODUCT DETAILS    : " << std::endl << std::endl

    << "Product Name : " << SoundBar_SpeaKers_Object.SPKR_ProductName << std::endl
    << "Brand Name : " << SoundBar_SpeaKers_Object.SPKR_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    SoundBar_SpeaKers_Object.SPKR_VariantsObject.begin();

    while(Iter_1 != SoundBar_SpeaKers_Object.SPKR_VariantsObject.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os
    << "Colour Screen : " << SoundBar_SpeaKers_Object.SPKR_ColorScreen << std::endl
    << "Input Voltage : " << SoundBar_SpeaKers_Object.SPKR_InputVoltage << std::endl
    << "Power Source : " << SoundBar_SpeaKers_Object.SPKR_powerSource << std::endl
    << "Vehcile service Type : " << SoundBar_SpeaKers_Object.SPKR_Vehicle_Service_Type << std::endl
    << "Speaker Type : " << SoundBar_SpeaKers_Object.SPKR_SpeakerType << std::endl
    << "Mounting Type : " << SoundBar_SpeaKers_Object.SPKR_mountingType << std::endl
    << "Control Method : " << SoundBar_SpeaKers_Object.SPKR_ControlMethod << std::endl
    << "Controller Type : " << SoundBar_SpeaKers_Object.SPKR_ControllerType << std::endl
    << "TWS : " << SoundBar_SpeaKers_Object.SPKR_TWS << std::endl
    << "App Control : " << SoundBar_SpeaKers_Object.SPKR_AppControl << std::endl
    << "Age Range Description : " << SoundBar_SpeaKers_Object.SPKR_Age_Range_Description << std::endl
    << "Is Waterproof : " << SoundBar_SpeaKers_Object.SPKR_Is_Waterproof << std::endl
    << "Water Resistant Level : " << SoundBar_SpeaKers_Object.SPKR_Water_Resistant_Level << std::endl
    << "Hardware Platform : " << SoundBar_SpeaKers_Object.SPKR_HardwarePlatform  << std::endl
    << "Audio Input compatible with the item : " << SoundBar_SpeaKers_Object.SPKR_Audio_Input_Compatible_with_the_Item << std::endl
    << "Subwoofer Connectivity Technology : " << SoundBar_SpeaKers_Object.SPKR_Subwoofer_Connectivity_Technology << std::endl
    << "Speaker Connectivity Protocol : " << SoundBar_SpeaKers_Object.SPKR_Speaker_Connectivity_Protocol << std::endl
    << "Speaker Connectivity : " << SoundBar_SpeaKers_Object.SPKR_SpeakerConnectivity << std::endl
    << "Model : " << SoundBar_SpeaKers_Object.SPKR_Model << std::endl
    << "Includes MP3 player : " << SoundBar_SpeaKers_Object.SPKR_Includes_MP3Player << std::endl
    << "Speaker Amplification Type : " << SoundBar_SpeaKers_Object.SPKR_SpeakerAmplification_Type << std::endl
    << "Batteries Included : " << SoundBar_SpeaKers_Object.SPKR_BatteriesIncluded << std::endl
    << "Batteries Required : " << SoundBar_SpeaKers_Object.SPKR_BatteriesRequired << std::endl
    << "Batteries Cell Composition : " << SoundBar_SpeaKers_Object.SPKR_Batteries_Cell_Composition << std::endl
    << "Does it contain liquid : " << SoundBar_SpeaKers_Object.SPKR_Does_It_Contain_Liquid << std::endl
    << "Includes Rechargeable Battery : " << SoundBar_SpeaKers_Object.SPKR_Includes_Rechargeable_Battery << std::endl
    << "Warranty Type : " << SoundBar_SpeaKers_Object.SPKR_Warranty_Type << std::endl
    << "Wireless Communication Technology : " << SoundBar_SpeaKers_Object.SPKR_Wireless_Communication_Technology << std::endl
    << "Audio output Mode : " << SoundBar_SpeaKers_Object.SPKR_Audio_Output_Mode << std::endl
    << "Includes Remote : " << SoundBar_SpeaKers_Object.SPKR_Includes_Remote << std::endl << std::endl

    << "Surround Sound Channel Configuration : " << SoundBar_SpeaKers_Object.SPKR_Surround_Sound_Channel_Configuration << std::endl
    << "Bluetooth Version : " << SoundBar_SpeaKers_Object.SPKR_BluetoothVersion << std::endl
    << "Series Number : " << SoundBar_SpeaKers_Object.SPKR_SeriesNumber << std::endl
    << "Number of Items : " << SoundBar_SpeaKers_Object.SPKR_Number_OF_Items << std::endl
    << "Number of USP Ports : " << SoundBar_SpeaKers_Object.SPKR_Number_OF_USP_Ports << std::endl
    << "Total USB Ports : " << SoundBar_SpeaKers_Object.SPKR_Total_USB_ports << std::endl
    
    << "Maximum Output Power : " << SoundBar_SpeaKers_Object.SPKR_Maximum_Output_Power << std::endl
    << "Speakers Nominal Output Power : " << SoundBar_SpeaKers_Object.SPKR_Speakers_Nominal_Output_Power << std::endl
    << "Input Voltage : " << SoundBar_SpeaKers_Object.SPKR_InputVoltage << std::endl
    << "Peak Power Handling Speakers : " << SoundBar_SpeaKers_Object.SPKR_Peak_Power_Handling_Speakers << std::endl
    << "Battery Average Life : " << SoundBar_SpeaKers_Object.SPKR_Battery_Average_Life << std::endl
    << "Subwoofer Diameter : " << SoundBar_SpeaKers_Object.SPKR_subwooferDiameter << std::endl
    << "Woofer Diameter : " << SoundBar_SpeaKers_Object.SPKR_WooferDiameter << std::endl
    << "Frequency Response : " << SoundBar_SpeaKers_Object.SPKR_FrequencyResponse << std::endl
    << "Standing Screen Display Size : " << SoundBar_SpeaKers_Object.SPKR_Standing_Screen_Display_Size << std::endl
    << "Playtime : " << SoundBar_SpeaKers_Object.SPKR_Playtime << std::endl
    << "Bluetooth Range : " << SoundBar_SpeaKers_Object.SPKR_BluetoothRange << std::endl
    << "Maximum Range : " << SoundBar_SpeaKers_Object.SPKR_MaximumRange << std::endl
    << "Speaker Size : " << SoundBar_SpeaKers_Object.SPKR_SpeakerSize << std::endl
    << "Tweeter Diameter : " << SoundBar_SpeaKers_Object.SPKR_TweeterDiameter << std::endl
    << "Audio Driver Size : " << SoundBar_SpeaKers_Object.SPKR_AudioDriverSize << std::endl
    << "Wattage : " << SoundBar_SpeaKers_Object.SPKR_Wattage << std::endl
    << "Audio Wattage : " << SoundBar_SpeaKers_Object.SPKR_AudioWattage << std::endl
    << "Signal To Noise Ratio : " << SoundBar_SpeaKers_Object.SPKR_Signal_To_Noise_Ratio << std::endl
    << "Impedance : " << SoundBar_SpeaKers_Object.SPKR_Impedance << std::endl
    << "Charging Time : " << SoundBar_SpeaKers_Object.SPKR_ChargingTime << std::endl
    << "RMS Power Range Amplifiers : " << SoundBar_SpeaKers_Object.SPKR_RMS_Power_Range_Amplifiers << std::endl
    << "ToTal Harmonic Distortion : " << SoundBar_SpeaKers_Object.SPKR_Total_Harmonic_Distortion << std::endl << std::endl

    << "Connectivity Technologies : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Connectivity_Technology);
    os << std::endl

    << "Compatible Devices : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Compatible_Devices);
    os << std::endl

    << "Compatible Media Type : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Compatible_Media_Type);
    os << std::endl

    << "Connector : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Connector);
    os << std::endl

    << "Package Type : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Package_Type);
    os << std::endl

    << "Special Feature : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Special_Feature);
    os << std::endl

    << "Recommended USes for Product : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Recommended_Uses_For_Product);
    os << std::endl

    << "From Manufacturer : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_From_Manufacturer);
    os << std::endl

    << "About this Item : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_About_This_Item);
    os << std::endl

    << "Product Description : ";
    SoundBar_SpeaKers_Object.printing_vector_string(SoundBar_SpeaKers_Object.SPKR_Product_Description);
    os << std::endl

    << "Additional Information    : " << std::endl << std::endl
    << SoundBar_SpeaKers_Object.SPKR_Additional_Info << std::endl;  

    return  os;
}
