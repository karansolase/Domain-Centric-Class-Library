#ifndef _WATCH_HPP
#define _WATCH_HPP

#include <iostream>
#include "Additional_Info.hpp"
#include "Measurement_and_unit.hpp"
#include "word_number.hpp"
#include "variants.hpp"

class Watch{

    friend std::ostream& operator<<(std::ostream& os, const Watch& Watch_Object);

    private :
    std::string Watch_NAme;
    std::string Watch_BrandName;
    std::string Watch_Series; 

    std::vector <Variants> Watch_VariantsObject;
    
    std::string Watch_BandColor;
    std::string Watch_Band_MaterialType;
    std::string Watch_ClaspType;
    Measurement_and_unit Watch_BandWidth;
    std::string Watch_BezelFunction;
    std::string Watch_CalenderType;
    Measurement_and_unit Watch_CaseDiameter;
    std::string Watch_Case_MaterialType;
    Measurement_and_unit Watch_CaseSize; 
    Measurement_and_unit Watch_CaseThickness;
    std::string Watch_Collection; 
    std::string Watch_DialColour;
    std::string Watch_DialShape;
    std::string Watch_StrapColor; 
    std::string Watch_Watch_Display_Type_OR_Technology;
    Measurement_and_unit Watch_Standing_Screen_Display_Size;
    std::string Watch_CaseShape;
    std::string Watch_Watch_Movement_Type;
    std::string Watch_WaterResistance; 
    Measurement_and_unit Watch_Maximum_Water_Resistance_Pressure;
    Measurement_and_unit Watch_Water_Resistance_Depth;
    std::string Watch_BandSize;
    std::string Watch_BatteriesIncluded;
    std::string Watch_BatteriesRequired; 
    std::string Watch_Battery_Cell_Composition;
    std::string Watch_Adapter;
    std::string Watch_Reader;
    std::string Watch_Marimba;
    std::string Watch_Recorder;
    std::string Watch_Transcriber;
    std::string Watch_Compiler; 
    Date Watch_ModelYear; 
    std::string Watch_Machinery; 
    std::string Watch_WarrantyType;

    Word_Number Watch_OperatingSystem;
    std::string Watch_Processor;
    std::string Watch_Optical_Heart_Sensor;
    std::string Watch_Digital_Crown;
    std::string Watch_Ailmeter;
    std::string Watch_Speaker;
    std::string Watch_Fall_Detection;
    std::string Watch_Compass;
    std::string Watch_Noise_Monitoring;
    std::string Watch_Blood_Oxygen_Sensor;
    std::string Watch_Electrical_Heart_Sensor;
    Word_Number Watch_Bluetooth; 
    Measurement_and_unit Watch_AudioJack; 
    std::string Watch_FormFactor; 
    Measurement_and_unit Watch_MemoryCapacity;
    Measurement_and_unit Watch_ItemHeight;
    Measurement_and_unit Watch_ItemWidth;
    std::string Watch_ItemShape;  
    Measurement_and_unit Watch_Wattage;
    Measurement_and_unit Watch_BatteryCapacity; 
    Measurement_and_unit Watch_BatteryLife; 
    std::string Watch_GPSNavigation;
    std::string Watch_ClosureType; 
    std::string Watch_Network_Service_Provider; 
    std::string Watch_WirelessCarrier; 
    std::string Watch_Includes_Rechargeable_Battery;
    std::string Watch_wireless_Communication_Standard;
    std::string Watch_Wireless_Type;
    Measurement_and_unit Watch_Resolution;
    Measurement_and_unit Watch_lithium_Battery_Energy_Content;
    unsigned int Watch_NumberOF_Lithium_IONCells;
    unsigned int Watch_Numberof_Lithium_MetalCells;
    std::string Watch_SportType; 
    std::string Watch_InputInterface;

    std::vector <std::string> Watch_BezelMaterial;
    std::vector <std::string> Watch_BandMaterial;
    std::vector <std::string> Watch_StrapMaterial; 
    std::vector <std::string> Watch_Dial_Glass_Material; 
    std::vector <std::string> Watch_Crystal_Material;

    std::vector <std::string> Watch_CompatibleDevices; 
    std::vector <std::string> Watch_MountingHardware; 
    std::vector <std::string> Watch_Connectivity_Technology;
    std::vector <std::string> Watch_controllerType; 
    std::vector <std::string> Watch_Supported_Applications; 

    std::vector <std::string> Watch_special_Features; 
    std::vector <std::string> Watch_camera_Features; 
    std::vector <std::string> Watch_about_This_Item;
    std::vector <std::string> Watch_Suitable_FOR;
    std::vector <std::string> Watch_Description;

    Additional_Info Watch_Additional_Info_Object; 

// package Dimensions;
    void printing_vector_string(std::vector <std::string> string_vector_object) const;
    
    public :
    Watch(
    std::string _watch_name,
    std::string _brand_name,
    std::string _series,

    std::initializer_list <Variants> _variants_object,

    std::string _band_color,
    std::string _band_material_type,
    std::string _clasp_type,

    double band_width_value,
    std::initializer_list <std::string> band_width_unit_string,
    
    std::string _bezel_function,
    std::string _calender_type,

    double case_diameter_value,
    std::initializer_list <std::string> case_diameter_unit_string,
    
    std::string _case_material_type,

    double case_size_value,
    std::initializer_list <std::string> case_size_unit_string, 
    
    double case_thickness_value,
    std::initializer_list <std::string> case_thickness_unit_string,

    std::string _collection, 
    std::string _dial_colour,
    std::string _dial_shape,
    std::string _strap_color, 
    std::string _watch_display_type_or_technology,

    double standing_screen_display_size_value,
    std::initializer_list <std::string> standing_screen_display_size_unit_string,
    
    std::string _Case_shape,
    std::string _watch_movement_type,
    std::string _water_resistance, 
    
    double maximum_water_resistance_pressure_value,
    std::initializer_list <std::string>  maximum_water_resistance_pressure_unit_string, 
    
    double water_resistance_depth_value,
    std::initializer_list <std::string> water_resistance_depth_unit_string,

    std::string _band_size,
    std::string _Batteries_included,
    std::string _Batteries_required, 
    std::string _Battery_cell_composition,
    std::string _adapter,
    std::string _reader,
    std::string _marimba,
    std::string _recorder,
    std::string _transcriber,
    std::string _compiler,

    Date _model_year, 

    std::string _machinery, 
    std::string _warranty_type,

    Word_Number _operating_system,

    std::string _processor,
    std::string _optical_heart_sensor,
    std::string _digital_crown,
    std::string _Ailmeter,
    std::string _speaker,
    std::string _fall_detection,
    std::string _compass,
    std::string _noise_monitoring,
    std::string _blood_oxygen_sensor,
    std::string _Electrical_heart_sensor,
    
    Word_Number _bluetooth, 

    double Audio_jack_value,
    std::initializer_list <std::string> Audio_jack_unit_string,

    std::string _form_factor,
    
    double memory_capacity_value,
    std::initializer_list <std::string> memory_capacity_unit_string,
    
    double item_height_value,
    std::initializer_list <std::string> item_height_unit_string,
    
    double item_width_value,
    std::initializer_list <std::string> item_width_unit_string,

    std::string _item_shape,
    
    double wattage_value,
    std::initializer_list <std::string> wattage_unit_string,
    
    double Battery_capacity_value,
    std::initializer_list <std::string> Battery_capacity_unit_string, 
    
    double Battery_Life_value,
    std::initializer_list <std::string> Battery_Life_unit_string, 
    
    std::string _gps_navigation, 
    std::string _closure_type,
    std::string _network_service_provider,
    std::string _wireless_carrier,
    std::string _Includes_Rechargeable_Battery,
    std::string _wireless_communication_standard,
    std::string _wireless_type,
    
    double dim_1_of_resolution,
    double _dim_2_of_resolution,
    std::string unit_of_resolution,
    std::string format_of_resolution,
    
    double lithium_battery_energy_content_value,
    std::initializer_list <std::string> lithium_battery_energy_content_unit_string,

    unsigned int _number_of_lithium_ion_cells,
    unsigned int _number_of_lithium_metal_cells,

    std::string _input_interface,
    std::string _sport_type,

    std::initializer_list <std::string> _bezel_material,
    std::initializer_list <std::string> _band_material,
    std::initializer_list <std::string> _strap_material, 
    std::initializer_list <std::string> _dial_glass_material, 
    std::initializer_list <std::string> _crystal_material,

    std::initializer_list <std::string> _compatible_devices, 
    std::initializer_list <std::string> _Mounting_hardware, 
    std::initializer_list <std::string> _Connectivity_technology,
    std::initializer_list <std::string> _controller_type,
    std::initializer_list <std::string> _Supported_applications,

    std::initializer_list <std::string> _special_features, 
    std::initializer_list <std::string> _camera_features,
    std::initializer_list <std::string> _about_this_item,
    std::initializer_list <std::string> _suitable_for,
    std::initializer_list <std::string> _description,

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