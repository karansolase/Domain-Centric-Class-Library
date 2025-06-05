#include "camera.hpp"

Camera::Camera(
    std::string _product_name,
        std::string _brand,

        std::initializer_list <Variants> _variant_object,
        
        unsigned int _Macro_Focus_Range,
        Date _Model_year,
        
        double memory_storage_capacity_value,
        std::initializer_list <std::string> memory_storage_capacity_unit_string,
        
        unsigned int _Memory_slots_Available,
        std::string _Flash_type,
        std::initializer_list <std::string> _Hardware_interface,
        
        double Included_memory_card_size_value,
        std::initializer_list <std::string> Included_memory_card_size_unit_string, 
        
        unsigned int _processor_count,
        std::string _File_Format_type,
        std::string _colored,
        std::string _Film_colour,

        double Maximum_aperture_value,
        std::initializer_list <std::string> Maximum_aperture_unit_string, 
        
        double _Expanded_ISO_Minimum,
        std::string _exposure_control_type,
        
        double viewfinder_magnification_value,
        std::initializer_list <std::string> viewfinder_magnification_unit_string,

        double minimum_shutter_speed_value,
        std::initializer_list <std::string> minimum_shutter_speed_unit_string,

        double maximum_shutter_speed_value,
        std::initializer_list <std::string> maximum_shutter_speed_unit_string,

        unsigned int _UPC,
        std::string _compatible_mountings,

        Measurement_and_unit _Aspect_ratio,

        double Battery_Life_value,
        std::initializer_list <std::string> Battery_Life_unit_string,

        std::string _photo_sensor_technology,
        std::string _Video_Capture_format, 
        std::string _camcorder_type,
        std::string _supported_file_format,
        std::string _image_stabilisation_technology,

        double optical_zoom_value,
        std::initializer_list <std::string> optical_zoom_unit_string,

        double maximum_focal_length_value,
        std::initializer_list <std::string> maximum_focal_length_unit_string,

        double minimum_focal_length_value,
        std::initializer_list <std::string> minimum_focal_length_unit_string,

        std::string _Audio_input_compatible_with_the_item,
        unsigned int _number_of_items,

        double Standing_screen_display_size_value,
        std::initializer_list <std::string> Standing_screen_display_size_unit_string,

        std::string _Display_technology, 
        std::string _Display_type,
        std::string _Colour_Screen,  
        std::string _Aperture_modes, 
        std::string _has_image_stabilisation, 
        std::string _Digital_zoom,

        double Maximum_resolution_value,
        std::initializer_list <std::string> Maximum_resolution_unit_string,

        double Optical_sensor_resolution_value,
        std::initializer_list <std::string> Optical_sensor_resolution_unit_string, 

        std::string _Audio_output_type,
        std::string _video_output, 
        std::string _Battery_Description,
        std::string _Batteries_included, 
        std::string _Batteries_required,  
        std::string _Battery_cell_composition, 

        double Continuouse_shooting_speed_value,
        std::initializer_list <std::string> Continuouse_shooting_speed_unit_string,
        
        unsigned int _total_USB_ports, 

        double Recording_capacity_value,
        std::initializer_list <std::string> Recording_capacity_unit_string, 
        
        std::string _Connector_type, 
        std::string _Media_type, 
        std::string _form_factor, 
        std::string _lens_type, 

        double Actual_Viewing_angle_value,
        std::initializer_list <std::string> Actual_Viewing_angle_unit_string,
        
        double photo_sensor_size_value,
        std::initializer_list <std::string> photo_sensor_size_unit_string, 
        
        std::string _measurement, 
        std::initializer_list <std::string> _mounting_type, 
        std::string _Viewfinder_type, 
        std::string _Does_it_contain_liquid, 
        std::string _Has_audio_recording_capabilities, 
        std::string _has_auto_focus, 
        std::string _Includes_Rechargeable_Battery, 
        std::string _Has_night_vision, 
        std::string _is_there_timer, 
        std::string _Includes_remote, 
        std::string _Water_Resistant_Level, 

        std::initializer_list <std::string> _Flash_memory_type,
        std::initializer_list <std::string> _Description_of_flash_modes, 
        std::initializer_list <Measurement_and_unit> _Video_capture_resolution,
        std::initializer_list <std::string> _compatible_devices,
        std::initializer_list <Measurement_and_unit> _Mounting_Hardware,
        std::initializer_list <std::string> _Material, 
        std::initializer_list <std::string> _Connectivity_Technology,

        std::initializer_list <std::string> _special_feature,
        std::initializer_list <std::string> _Additional_points, 
        
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
:   Camera_ProductName(_product_name),
    Camera_BrandName(_brand),

    Camera_VariantObject(_variant_object),

    Camera_Macro_Focus_Range(_Macro_Focus_Range),
    Camera_ModelYear(_Model_year),

        Camera_Memory_Slots_Available(_Memory_slots_Available),
        Camera_FlashType(_Flash_type),

        Camera_Included_Memory_Card_Size(
        Included_memory_card_size_value,
        Included_memory_card_size_unit_string),

        Camera_ProcessorCount(_processor_count),
        Camera_Colored(_colored),
        Camera_FilmColour(_Film_colour),

        Camera_Expanded_ISO_Minimum(_Expanded_ISO_Minimum),

        Camera_ViewfinderMagnification(
        viewfinder_magnification_value,
        viewfinder_magnification_unit_string),

        Camera_Minimum_Shutter_Speed(
        minimum_shutter_speed_value,
        minimum_shutter_speed_unit_string),

        Camera_Maximum_Shutter_Speed(
        maximum_shutter_speed_value,
        maximum_shutter_speed_unit_string),

        Camera_UPC(_UPC),
        Camera_CompatibleMountings(_compatible_mountings),

        Camera_PhotoSensorTechnology(_photo_sensor_technology),
        Camera_supported_File_Format(_supported_file_format),

        Camera_Audio_Input_Compatible_With_The_Item(
        _Audio_input_compatible_with_the_item),

        Camera_Number_OF_Items(_number_of_items),

        Camera_DisplayTechnology(_Display_technology),
        Camera_DisplayType(_Display_type),
        Camera_ColourScreen(_Colour_Screen),
        Camera_ApertureModes(_Aperture_modes),
        Camera_Hasimage_Stabilisation(_has_image_stabilisation),
        Camera_DigitalZoom(_Digital_zoom),

        Camera_Maximum_Resolution(
        Maximum_resolution_value,
        Maximum_resolution_unit_string),

        Camera_Optical_Sensor_Resolution(
        Optical_sensor_resolution_value,
        Optical_sensor_resolution_unit_string),

        Camera_Audio_Output_Type(_Audio_output_type),
        Camera_VideoOutput(_video_output),
        Camera_BatteryDescription(_Battery_Description),
        Camera_Continuouse_Shooting_Speed(
        Continuouse_shooting_speed_value,
        Continuouse_shooting_speed_unit_string),

        Camera_Total_USB_Ports(_total_USB_ports),

        Camera_RecordingCapacity(
        Recording_capacity_value,
        Recording_capacity_unit_string),

        Camera_PhotoSensorSize(
        photo_sensor_size_value,
        photo_sensor_size_unit_string),
        
    Camera_Measurement(_measurement),
    Camera_ViewfinderType(_Viewfinder_type),
    Camera_Has_AudioRecordingCapabilities(_Has_audio_recording_capabilities),
    Camera_has_AutoFocus(_has_auto_focus),
    Camera_Has_Night_Vision(_Has_night_vision),
    Camera_Includes_Remote(_Includes_remote),
    
    Camera_Description_OF_Flash_Modes(_Description_of_flash_modes),
    Camera_MountingHardware(_Mounting_Hardware),
    Camera_specialFeatures(_special_feature),
    Camera_AdditionalPoints(_Additional_points),

    Camera_CECD_Object(
        _exposure_control_type,
        _Batteries_included,
        _Batteries_required,
        "",
        _Connector_type,
        "",
        _Includes_Rechargeable_Battery,
        "",
        _form_factor,
        _Battery_cell_composition,
        _Water_Resistant_Level,
        "",
        {""},
        {""},
        {""},

        Standing_screen_display_size_value,
        Standing_screen_display_size_unit_string,
        0,{""},
        0,{""},
        Battery_Life_value,
        Battery_Life_unit_string,
        0,{""},
        0,{""},
        {""},
        0,{""},
        memory_storage_capacity_value,
        memory_storage_capacity_unit_string,
        0,{""},
        0,{""},
        0,{""},

        _Connectivity_Technology,
        _mounting_type,
        {""},
        _Hardware_interface,
        _compatible_devices,
        _Material
    ),

    General_Camera_Details(
        _lens_type,
        _image_stabilisation_technology,
        _File_Format_type,
        _Video_Capture_format,
       
        _camcorder_type,
        
        
        _Media_type,
        _Does_it_contain_liquid,
        _is_there_timer,
        
        optical_zoom_value,
        optical_zoom_unit_string,
        
        Maximum_aperture_value,
        Maximum_aperture_unit_string,

        maximum_focal_length_value,
        maximum_focal_length_unit_string,

        minimum_focal_length_value,
        minimum_focal_length_unit_string,

        Actual_Viewing_angle_value,
        Actual_Viewing_angle_unit_string,

        _Aspect_ratio,

        _Flash_memory_type,
        _Video_capture_resolution
    ),
    
    Camera_Additional_Info(
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

void Camera::printing_string_vector(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Camera& Camera_object){

    int j = 0;

    os << "Product Details           :" << std::endl << std::endl

       << "Product Name : " << Camera_object.Camera_ProductName << std::endl
       << "Brand : " << Camera_object.Camera_BrandName << std::endl << std::endl;

       std::vector<Variants>::const_iterator Iter_1 = 
       Camera_object.Camera_VariantObject.begin();

       while(Iter_1 != Camera_object.Camera_VariantObject.end())
       {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
       }
       
       os 
       << "Macro Focus Range : " << Camera_object.Camera_Macro_Focus_Range << std::endl
       << "Model Year : " << Camera_object.Camera_ModelYear << std::endl
       << "Memory Storage Capacity : " << Camera_object.Camera_CECD_Object.CECD_Memory_Storage_Capacity << std::endl
       << "Memory Slots Available : " << Camera_object.Camera_Memory_Slots_Available << std::endl
       << "Flash Memory : " << Camera_object.Camera_FlashType << std::endl << std::endl
       
       << "Hardware Interface : ";
       Camera_object.printing_string_vector(Camera_object.Camera_CECD_Object.CECD_HardwareInterface);
       os << std::endl
       
       << "Included Memory Card Size : " << Camera_object.Camera_Included_Memory_Card_Size << std::endl
       << "Processor Count : " << Camera_object.Camera_ProcessorCount << std::endl
       << "File Format Type : " << Camera_object.Camera_FilmColour << std::endl
       << "Colored : " << Camera_object.Camera_Colored << std::endl
       << "Film Colour : " << Camera_object.Camera_FilmColour << std::endl
       << "Maximum Aperture : " << Camera_object.GCD_Maximum_Aperture << std::endl
       << "Expanded ISO Minimum  : " << Camera_object.Camera_Expanded_ISO_Minimum << std::endl
       << "Exposure Control Type : " << Camera_object.Camera_CECD_Object.CECD_Control_Type_OR_Console << std::endl
       << "Viewfinder Magnification : " << Camera_object.Camera_ViewfinderMagnification << std::endl
       << "Minimum Shutter Speed : " << Camera_object.Camera_Minimum_Shutter_Speed << std::endl
       << "Maximum Shutter Speed : " << Camera_object.Camera_Maximum_Shutter_Speed << std::endl
       << "UPC : " << Camera_object.Camera_UPC << std::endl
       << "Compatible Mountings : " << Camera_object.Camera_CompatibleMountings << std::endl 
       << "Aspect Ratio : " << Camera_object.GCD_Aspect_Ratio << std::endl
       << "Battery Life : " << Camera_object.Camera_CECD_Object.CECD_BatteryLife << std::endl
       << "Photo Sensor Technology : " << Camera_object.Camera_PhotoSensorTechnology << std::endl
       << "Video Capture Format : " << Camera_object.GCD_Video_Capture_Format << std::endl
       << "Camcorder Type : " << Camera_object.GCD_Camcorder_type << std::endl
       << "Supported File Format : " << Camera_object.GCD_File_Format << std::endl
       << "Image Stabilisation : " << Camera_object.GCD_Image_Stabilisation_Technology << std::endl
       << "Optical Zoom : " << Camera_object.GCD_Optical_Zoom << std::endl
       << "Maximum Focal Length : " << Camera_object.GCD_Maximum_Focal_length << std::endl
       << "Minimum Focal Length : " << Camera_object.GCD_Minimum_Focal_length << std::endl
       << "Audio input compatible with the item : " << Camera_object.Camera_Audio_Input_Compatible_With_The_Item << std::endl
       << "Number of Items : " << Camera_object.Camera_Number_OF_Items << std::endl
       << "Standing Screen Display Size : " << Camera_object.Camera_CECD_Object.CECD_DisplaySize << std::endl
       << "Display Technology : " << Camera_object.Camera_DisplayTechnology << std::endl
       << "Display Type : " << Camera_object.Camera_DisplayType << std::endl
       << "Colour Screen : " << Camera_object.Camera_ColourScreen << std::endl
       << "Aperture Modes : " << Camera_object.Camera_ApertureModes << std::endl
       << "Has Image Stabilisation : " << Camera_object.GCD_Image_Stabilisation_Technology << std::endl
       << "Digital Zoom : " << Camera_object.Camera_DigitalZoom << std::endl
       << "Maximum Resolution : " << Camera_object.Camera_Maximum_Resolution << std::endl
       << "Optical Sensor Resolution : " << Camera_object.Camera_Optical_Sensor_Resolution << std::endl
       << "Audio Output Type : " << Camera_object.Camera_Audio_Output_Type << std::endl
       << "Video Output : " << Camera_object.Camera_VideoOutput << std::endl
       << "Battery Description : " << Camera_object.Camera_BatteryDescription << std::endl
       << "Batteries Included : " << Camera_object.Camera_CECD_Object.CECD_BatteriesIncluded << std::endl
       << "Batteries Required : " << Camera_object.Camera_CECD_Object.CECD_BatteriesRequired << std::endl
       << "Battery Cell Composition : " << Camera_object.Camera_CECD_Object.CECD_Battery_Cell_Composition << std::endl
       << "Continuouse Shooting Speed : " << Camera_object.Camera_Continuouse_Shooting_Speed << std::endl
       << "Total USB POrts : " << Camera_object.Camera_Total_USB_Ports << std::endl
       << "Recording Capacity : " << Camera_object.Camera_RecordingCapacity << std::endl
       << "Connector Type : " << Camera_object.Camera_CECD_Object.CECD_ConnectorType << std::endl
       << "Media Type : " << Camera_object.GCD_Media_Type << std::endl
       << "Form Factor : " << Camera_object.Camera_CECD_Object.CECD_Form_Factor << std::endl
       << "Lens Type : " << Camera_object.GCD_Lens << std::endl
       << "Actual Viewing Angle : " << Camera_object.GCD_Viewing_Angle << std::endl
       << "Photo Sensor Size : " << Camera_object.Camera_PhotoSensorSize << std::endl
       << "Measurement : " << Camera_object.Camera_Measurement << std::endl << std::endl
       
       << "Mounting Type : ";
       Camera_object.printing_string_vector(Camera_object.Camera_CECD_Object.CECD_MountingType);
       os << std::endl
       
       << "Viewfinder Type : " << Camera_object.Camera_ViewfinderType << std::endl
       << "Does It Contain Liquid : " << Camera_object.GCD_Does_it_contain_liquid << std::endl
       << "Has Audio Recording capabilities : " << Camera_object.Camera_Has_AudioRecordingCapabilities << std::endl
       << "Has Auto Focus : " << Camera_object.Camera_has_AutoFocus << std::endl
       << "Includes Rechargeable battery : " << Camera_object.Camera_CECD_Object.CECD_Includes_Rechargeable_Battery << std::endl
       << "Has Night Vision : " << Camera_object.Camera_Has_Night_Vision << std::endl
       << "Is there Timer : " << Camera_object.GCD_Is_There_A_Timer << std::endl
       << "Includes Remote : " << Camera_object.Camera_Includes_Remote << std::endl
       << "Water Resistant level : " << Camera_object.Camera_CECD_Object.CECD_WaterResistant << std::endl << std::endl

       << "Flash Memory Type : ";
       Camera_object.printing_string_vector(Camera_object.GCD_Flash_Memory_Type);
       os << std::endl

       << "Description of Flash Modes : ";
       Camera_object.printing_string_vector(Camera_object.Camera_Description_OF_Flash_Modes);
       os << std::endl

       << "Video capture Resolution : ";
       std::vector<Measurement_and_unit>::const_iterator Iter_2 = 
       Camera_object.GCD_Video_Capture_Resolution.begin();

       while(Iter_2 != Camera_object.GCD_Video_Capture_Resolution.end())
       {
        j = j + 1;
        std::cout << j << ") " << *Iter_2 << std::endl;
        ++Iter_2;
       }
       j = 0;

       os << std::endl
       << "Compatible Devices : ";
       Camera_object.printing_string_vector(Camera_object.Camera_CECD_Object.CECD_CompatibleDevices);
       os << std::endl

       << "Mounting Hardware : ";
       std::vector<Measurement_and_unit>::const_iterator Iter_3 = 
       Camera_object.Camera_MountingHardware.begin();

       while(Iter_3 != Camera_object.Camera_MountingHardware.end())
       {
        j = j + 1;
        std::cout << j << ") " << *Iter_3 << std::endl;
        ++Iter_3;
       }
       os << std::endl

       << "Material : ";
       Camera_object.printing_string_vector(Camera_object.Camera_CECD_Object.CECD_Material);
       os << std::endl

       << "Connectivity Technologies : ";
       Camera_object.printing_string_vector(Camera_object.Camera_CECD_Object.CECD_Connectivity_Technologies);
       os << std::endl
       
       << "Special features : ";
       Camera_object.printing_string_vector(Camera_object.Camera_specialFeatures);
       os << std::endl
       
       << "Additional Points : ";
       Camera_object.printing_string_vector(Camera_object.Camera_AdditionalPoints);
       os << std::endl

       << "Additional Information : " << std::endl
       << Camera_object.Camera_Additional_Info << std::endl;

    return os; 
}