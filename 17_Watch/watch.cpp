#include "watch.hpp"

Watch::Watch(
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
)
:   Watch_NAme(_watch_name),
    Watch_BrandName(_brand_name),
    Watch_Series(_series),

    Watch_VariantsObject(_variants_object),

    Watch_BandColor(_band_color),
    Watch_Band_MaterialType(_band_material_type),
    Watch_ClaspType(_clasp_type),
   
    Watch_BandWidth(
        band_width_value,
        band_width_unit_string),

    Watch_BezelFunction(_bezel_function),
    Watch_CalenderType(_calender_type),

    Watch_CaseDiameter(
        case_diameter_value,
        case_diameter_unit_string),

    Watch_Case_MaterialType(_case_material_type),
    
    Watch_CaseSize(
        case_size_value,
        case_size_unit_string),

    Watch_CaseThickness(
        case_thickness_value,
        case_thickness_unit_string),

        Watch_Collection(_collection),
        Watch_DialColour(_dial_colour),
        Watch_DialShape(_dial_shape),
        Watch_StrapColor(_strap_color),
        Watch_Watch_Display_Type_OR_Technology(_watch_display_type_or_technology),

        Watch_Standing_Screen_Display_Size(
        standing_screen_display_size_value,
        standing_screen_display_size_unit_string),

        Watch_CaseShape(_Case_shape),
        Watch_Watch_Movement_Type(_watch_movement_type),
        Watch_WaterResistance(_water_resistance),

        Watch_Maximum_Water_Resistance_Pressure(
        maximum_water_resistance_pressure_value,
        maximum_water_resistance_pressure_unit_string),

        Watch_Water_Resistance_Depth(
        water_resistance_depth_value,
        water_resistance_depth_unit_string),

        Watch_BandSize(_band_size),
        Watch_BatteriesIncluded(_Batteries_included),
        Watch_BatteriesRequired(_Batteries_required),
        Watch_Battery_Cell_Composition(_Battery_cell_composition),
        Watch_Adapter(_adapter),
        Watch_Reader(_reader),
        Watch_Marimba(_marimba),
        Watch_Recorder(_recorder),
        Watch_Transcriber(_transcriber),
        Watch_Compiler(_compiler),
        Watch_ModelYear(_model_year),
        Watch_Machinery(_machinery),
        Watch_WarrantyType(_warranty_type),


    Watch_OperatingSystem(_operating_system),
    Watch_Processor(_processor),
    Watch_Optical_Heart_Sensor(_optical_heart_sensor),
    Watch_Digital_Crown(_digital_crown),
    Watch_Ailmeter(_Ailmeter),
    Watch_Speaker(_speaker),
    Watch_Fall_Detection(_fall_detection),
    Watch_Compass(_compass),
    Watch_Noise_Monitoring(_noise_monitoring),
    Watch_Blood_Oxygen_Sensor(_blood_oxygen_sensor),
    Watch_Electrical_Heart_Sensor(_Electrical_heart_sensor),
    Watch_Bluetooth(_bluetooth),
    
    Watch_AudioJack(
        Audio_jack_value, 
        Audio_jack_unit_string),

        Watch_FormFactor(_form_factor),

        Watch_MemoryCapacity(
        memory_capacity_value,
        memory_capacity_unit_string),

        Watch_ItemHeight(
        item_height_value,
        item_height_unit_string),

        Watch_ItemWidth(
        item_width_value,
        item_width_unit_string),

        Watch_ItemShape(_item_shape),

        Watch_Wattage(
        wattage_value,
        wattage_unit_string),

        Watch_BatteryCapacity(
        Battery_capacity_value,
        Battery_capacity_unit_string),

        Watch_BatteryLife(
        Battery_Life_value,
        Battery_Life_unit_string),

        Watch_GPSNavigation(_gps_navigation),
        Watch_ClosureType(_closure_type),
        Watch_Network_Service_Provider(_network_service_provider),
        Watch_WirelessCarrier(_wireless_carrier),
        Watch_Includes_Rechargeable_Battery(_Includes_Rechargeable_Battery),
        Watch_wireless_Communication_Standard(_wireless_communication_standard),
        Watch_Wireless_Type(_wireless_type),

        Watch_Resolution(
        dim_1_of_resolution,
        _dim_2_of_resolution,
        unit_of_resolution,
        format_of_resolution
    ),

    Watch_lithium_Battery_Energy_Content(
        lithium_battery_energy_content_value,
        lithium_battery_energy_content_unit_string),

        Watch_NumberOF_Lithium_IONCells(_number_of_lithium_ion_cells),
        Watch_Numberof_Lithium_MetalCells(_number_of_lithium_metal_cells),

        Watch_InputInterface(_input_interface),
    Watch_SportType(_sport_type),
    
    Watch_BezelMaterial(_bezel_material),
    Watch_BandMaterial(_band_material),
    Watch_StrapMaterial(_strap_material),
    Watch_Dial_Glass_Material(_dial_glass_material),
    Watch_Crystal_Material(_crystal_material),

    Watch_CompatibleDevices(_compatible_devices),
    Watch_MountingHardware(_Mounting_hardware),
    Watch_Connectivity_Technology(_Connectivity_technology),
    Watch_controllerType(_controller_type),
    Watch_Supported_Applications(_Supported_applications),
    
    Watch_special_Features(_special_features),
    Watch_camera_Features(_camera_features),
    Watch_about_This_Item(_about_this_item),
    Watch_Suitable_FOR(_suitable_for),
    Watch_Description(_description),

    Watch_Additional_Info_Object(
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

void Watch::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Watch& Watch_Object){
    int j = 0;
    os << "WATCH DETAILS      :  " << std::endl << std::endl

    << "Watch Name : " << Watch_Object.Watch_NAme << std::endl
    << "Brand Name : " << Watch_Object.Watch_BrandName << std::endl
    << "Series : " << Watch_Object.Watch_Series << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter = 
    Watch_Object.Watch_VariantsObject.begin();

    while(Iter != Watch_Object.Watch_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }

    os
    << "Band Colour : " << Watch_Object.Watch_BandColor << std::endl
    << "Band Material Type : " << Watch_Object.Watch_Band_MaterialType << std::endl
    << "Clasp Type : " << Watch_Object.Watch_ClaspType << std::endl
    << "Band Width : " << Watch_Object.Watch_BandWidth << std::endl
    << "Bezel Function : " << Watch_Object.Watch_BezelFunction << std::endl
    << "Calender Type : " << Watch_Object.Watch_CalenderType << std::endl
    << "Case Diameter : " << Watch_Object.Watch_CaseDiameter << std::endl
    << "Case Material Type : " << Watch_Object.Watch_Case_MaterialType << std::endl
    << "Case size : " << Watch_Object.Watch_CaseSize << std::endl
    << "Case thickness : " << Watch_Object.Watch_CaseThickness << std::endl
    << "Collection : " << Watch_Object.Watch_Collection << std::endl
    << "Dial Colour : " << Watch_Object.Watch_DialColour << std::endl
    << "Dial Shape : " << Watch_Object.Watch_DialShape << std::endl
    << "Strap Colour : " << Watch_Object.Watch_StrapColor << std::endl
    << "Watch Display type or technology : " << Watch_Object.Watch_Watch_Display_Type_OR_Technology << std::endl
    << "Standing Screen Display size : " << Watch_Object.Watch_Standing_Screen_Display_Size << std::endl
    << "Case Shape : " << Watch_Object.Watch_CaseShape << std::endl
    << "Watch Movement type : " << Watch_Object.Watch_Watch_Movement_Type << std::endl
    << "Maximum Water Resistance Pressure : " << Watch_Object.Watch_Maximum_Water_Resistance_Pressure << std::endl
    << "Water Resistance Depth : " << Watch_Object.Watch_Water_Resistance_Depth << std::endl
    << "band Size : " << Watch_Object.Watch_BandSize << std::endl
    << "Batteries Included : " << Watch_Object.Watch_BatteriesIncluded << std::endl
    << "Batteries Required : " << Watch_Object.Watch_BatteriesRequired << std::endl
    << "Battery Cell Composition : " << Watch_Object.Watch_Battery_Cell_Composition << std::endl
    << "Adapter : " << Watch_Object.Watch_Adapter << std::endl
    << "Reader : " << Watch_Object.Watch_Reader << std::endl
    << "Marimba : " << Watch_Object.Watch_Marimba << std::endl
    << "Recorder : " << Watch_Object.Watch_Recorder << std::endl
    << "Transcriber : " << Watch_Object.Watch_Transcriber << std::endl
    << "Compiler : " << Watch_Object.Watch_Compiler << std::endl
    << "Model year : " << Watch_Object.Watch_ModelYear << std::endl
    << "Machinery : " << Watch_Object.Watch_Machinery << std::endl
    << "Warranty Type : " << Watch_Object.Watch_WarrantyType << std::endl
    << "Operating System : " << Watch_Object.Watch_OperatingSystem << std::endl
    << "Processor : " << Watch_Object.Watch_Processor << std::endl
    << "Optical heart Sensor : " << Watch_Object.Watch_Optical_Heart_Sensor << std::endl
    << "Digital Crown : " << Watch_Object.Watch_Digital_Crown << std::endl
    << "Ailmeter : " << Watch_Object.Watch_Ailmeter << std::endl
    << "Speaker : " << Watch_Object.Watch_Speaker << std::endl
    << "Fall Detection : " << Watch_Object.Watch_Fall_Detection << std::endl
    << "Compass : " << Watch_Object.Watch_Compass << std::endl
    << "Noise Monitoring : " << Watch_Object.Watch_Noise_Monitoring << std::endl
    << "Blood Oxygen Sensor : " << Watch_Object.Watch_Blood_Oxygen_Sensor << std::endl
    << "Electrical heart Sensor : " << Watch_Object.Watch_Electrical_Heart_Sensor << std::endl
    << "Bluetooth : " << Watch_Object.Watch_Bluetooth << std::endl
    << "Audio Jack : " << Watch_Object.Watch_AudioJack << std::endl
    << "Form Factor : " << Watch_Object.Watch_FormFactor << std::endl
    << "Memory Capacity : " << Watch_Object.Watch_MemoryCapacity << std::endl
    << "Item Height : " << Watch_Object.Watch_ItemHeight << std::endl
    << "Item Width : " << Watch_Object.Watch_ItemWidth << std::endl
    << "Item Shape : " << Watch_Object.Watch_ItemShape << std::endl
    << "Wattage : " << Watch_Object.Watch_Wattage << std::endl
    << "Battery Capacity : " << Watch_Object.Watch_BatteryCapacity << std::endl
    << "Battery Life : " << Watch_Object.Watch_BatteryLife << std::endl
    << "GPS Navigation : " << Watch_Object.Watch_GPSNavigation << std::endl
    << "Closure Type : " << Watch_Object.Watch_ClosureType << std::endl
    << "Network Service Provider : " << Watch_Object.Watch_Network_Service_Provider << std::endl 
    << "Wireless Carriers : " << Watch_Object.Watch_WirelessCarrier << std::endl
    << "Includes Rechargeable Battery : " << Watch_Object.Watch_Includes_Rechargeable_Battery << std::endl
    << "Wireless Communiaction Battery : " << Watch_Object.Watch_wireless_Communication_Standard << std::endl
    << "Wireless Type : " << Watch_Object.Watch_Wireless_Type << std::endl
    << "Resolution : " << Watch_Object.Watch_Resolution << std::endl
    << "Lithium Battery Energy Content : " << Watch_Object.Watch_lithium_Battery_Energy_Content << std::endl
    << "Number of Lithium ION Cells : " << Watch_Object.Watch_NumberOF_Lithium_IONCells << std::endl
    << "Number of Lithium metal Cells : " << Watch_Object.Watch_Numberof_Lithium_MetalCells << std::endl
    << "Sport Type : " << Watch_Object.Watch_SportType << std::endl
    << "Input Interface : " << Watch_Object.Watch_InputInterface << std::endl << std::endl

    << "Bezel Material : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_BezelMaterial);
    os << std::endl

    << "Band Material : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_BandMaterial);
    os << std::endl

    << "Strap Material : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_StrapMaterial);
    os << std::endl

    << "Dial Glass Material : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_Dial_Glass_Material);
    os << std::endl

    << "Crystal Material : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_Crystal_Material);
    os << std::endl

    << "Compatible Devices : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_CompatibleDevices);
    os << std::endl

    << "Mounting Hardware : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_MountingHardware);
    os << std::endl

    << "Connectivity Technology : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_Connectivity_Technology);
    os << std::endl

    << "Controller Type : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_controllerType);
    os << std::endl

    << "Supported Applications : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_Supported_Applications);
    os << std::endl

    << "Special Features : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_special_Features);
    os << std::endl

    << "Camera Features : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_camera_Features);
    os << std::endl

    << "About this itenm : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_about_This_Item);
    os << std::endl
    
    << "Suitable For : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_Suitable_FOR);
    os << std::endl

    << "Description : ";
    Watch_Object.printing_vector_string(Watch_Object.Watch_Description);
    os << std::endl  << std::endl

    << "Additional Information : " << std::endl << std::endl
    << Watch_Object.Watch_Additional_Info_Object;

    return os;
}