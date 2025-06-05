#include "Webcam.hpp"

Webcam::Webcam(
    std::string _product_name,
    std::string _brand_name,
    Word_Number _Model_name,

    std::initializer_list <Variants> _variants_object,

    Word_Number _Series,
    std::string _Video_Quality,
    std::string _Focus,
    std::string _Lens,
    std::string _Microphone, 
    std::string _Rotational_Camera,  
    std::string _Optical_sensor_tech, 
    std::string _Image_stabilisation_technology, 
    std::string _Photo_sensor_technology, 
    std::string _Exposure_control_type, 
    std::string _File_Format, 
    std::string _Video_capture_format, 
    std::string _Supported_Audio_Format, 
    std::string _Form_Factor, 
    std::string _camcorder_type, 
    std::string _Batteries_Included, 
    std::string _Batteries_Required, 
    std::initializer_list <std::string> _Wireless_type, 
    std::string _Connector_type, 
    std::string _Media_type, 
    std::string _Does_it_contain_liquid, 
    std::string _Is_there_a_timer,
    
    double Item_height_value,
    std::initializer_list <std::string> Item_height_unit_and_string, 
    
    double Item_Width_value,
    std::initializer_list <std::string> Item_Width_unit_and_string, 
    
    double Standing_screen_display_size_value,
    std::initializer_list <std::string> Standing_screen_display_size_unit_and_string, 
    
    double Resolution_value,
    std::initializer_list <std::string> Resolution_unit_and_string, 
    
    double Voltage_value,
    std::initializer_list <std::string> Voltage_unit_and_string, 
    
    double Rear_Webcam_Resolution_value,
    std::initializer_list <std::string> Rear_Webcam_Resolution_unit_and_string,
    
    double Field_of_View_value,
    std::initializer_list <std::string> Field_of_View_unit_and_string, 
    
    double Display_Size_value,
    std::initializer_list <std::string> Display_Size_unit_and_string,
    
    double Digital_Zoom_value,
    std::initializer_list <std::string> Digital_Zoom_unit_and_string, 
    
    double Optical_Zoom_value,
    std::initializer_list <std::string> Optical_Zoom_unit_and_string, 
    
    double Maximum_Aperture_value,
    std::initializer_list <std::string> Maximum_Aperture_unit_and_string, 
    
    double Maximum_focal_length_value,
    std::initializer_list <std::string> Maximum_focal_length_unit_and_string, 
    
    double Minimum_focal_length_value,
    std::initializer_list <std::string> Minimum_focal_length_unit_and_string, 
    
    double Screen_Size_value,
    std::initializer_list <std::string> Screen_Size_unit_and_string, 
    
    double Viewing_Angle_value,
    std::initializer_list <std::string> Viewing_Angle_unit_and_string, 

    Measurement_and_unit _Aspect_ratio, 

    unsigned int _number_of_items, 

    std::initializer_list <Measurement_and_unit> _Video_capture_resolution, 

    std::initializer_list <std::string> _Flash_memory_type, 
    std::initializer_list <std::string> _Hardware_Platform, 
    std::initializer_list <std::string> _Shooting_modes, 
    std::initializer_list <std::string> _Compatible_Devices, 
    std::initializer_list <std::string> _Connectivity_tech, 

    std::initializer_list <std::string> _Product_Description, 
    std::initializer_list <std::string> _From_manufacturer, 
    std::initializer_list <std::string> _From_Brand,  
    std::initializer_list <std::string> _Special_features, 
    std::initializer_list <std::string> _About_this_item, 

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
:   Wbcm_Product_Name(_product_name),
    Wbcm_Brand_Name(_brand_name),
    Wbcm_Model_Name(_Model_name),

    Wbcm_Variants_Object(_variants_object),

    Wbcm_Series(_Series),
    Wbcm_Video_Quality(_Video_Quality),
    Wbcm_Focus(_Focus),
    Wbcm_Microphone(_Microphone),
    Wbcm_Rotational_Camera(_Rotational_Camera),
    Wbcm_Optical_Sensor_Tech(_Optical_sensor_tech),
    Wbcm_Photo_sensor_Technology(_Photo_sensor_technology),
    Wbcm_Supported_Audio_Format(_Supported_Audio_Format),
    
    Wbcm_Item_height(
        Item_height_value,
        Item_height_unit_and_string),
        
    Wbcm_Item_Width(
        Item_Width_value,
        Item_Width_unit_and_string),

    Wbcm_Rear_Webcam_Resolution(
        Rear_Webcam_Resolution_value,
        Rear_Webcam_Resolution_unit_and_string),
                        
    Wbcm_Field_of_View(
        Field_of_View_value,
        Field_of_View_unit_and_string),

    Wbcm_Display_Size(
        Display_Size_value,
        Display_Size_unit_and_string),
                                
    Wbcm_Digital_Zoom(
        Digital_Zoom_value,
        Digital_Zoom_unit_and_string),                         
                                    
    Wbcm_Screen_Size(
        Screen_Size_value,
        Screen_Size_unit_and_string),

    Wbcm_Number_Of_Items(_number_of_items),
    
    Wbcm_Shooting_modes(_Shooting_modes),
                                        
    Wbcm_Product_Description(_Product_Description),
    Wbcm_From_manufacturer(_From_manufacturer),
    Wbcm_From_Brand(_From_Brand),
    Wbcm_Special_features(_Special_features),
    Wbcm_About_this_item(_About_this_item),

    Wbcm_CECD_Object(
        _Exposure_control_type,
        _Batteries_Included,
        _Batteries_Required,
        "",
        _Connector_type,
        "",
        "",
        "",
        _Form_Factor,
        "",
        "",
        "",
        {""},
        {""},
        {""},

        Standing_screen_display_size_value,
        Standing_screen_display_size_unit_and_string,
        0,{""},
        0,{""},
        0,{""},
        0,{""},
        0,{""},
        {Resolution_value,Resolution_unit_and_string},
        0,{""},
        0,{""},
        0,{""},
        Voltage_value,Voltage_unit_and_string,
        0,{""},

        _Connectivity_tech,
        {""},
        _Wireless_type,
        _Hardware_Platform,
        _Compatible_Devices,
        {""}
        
    ),

    General_Camera_Details{
    _Lens,
    _Image_stabilisation_technology,
    _File_Format,
    _Video_capture_format,
    _camcorder_type,
    _Media_type,
    _Does_it_contain_liquid,
    _Is_there_a_timer,
    
    Optical_Zoom_value,
    Optical_Zoom_unit_and_string,
    
    Maximum_Aperture_value,
    Maximum_Aperture_unit_and_string,
    
    Maximum_focal_length_value,
    Maximum_focal_length_unit_and_string,
    
    Minimum_focal_length_value,
    Minimum_focal_length_unit_and_string,
    
    Viewing_Angle_value,
    Viewing_Angle_unit_and_string,
    
    _Aspect_ratio,

    _Flash_memory_type,
    _Video_capture_resolution

    },

    Wbcm_Additional_Info_Object(
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

void Webcam::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Webcam& Webcam_Object){
    os << "PRODUCT DETAILS  :  " << std::endl << std::endl

    << "Product Name : " << Webcam_Object.Wbcm_Product_Name << std::endl
    << "Brand NAme : " << Webcam_Object.Wbcm_Brand_Name << std::endl
    << "Model Name : " << Webcam_Object.Wbcm_Model_Name << std::endl << std::endl;

    for(
        std::vector<Variants>::const_iterator Iter = 
        Webcam_Object.Wbcm_Variants_Object.begin();
        Iter != Webcam_Object.Wbcm_Variants_Object.end();
        ++Iter
    )
    {
        std::cout << *Iter << std::endl;
    }

    os 
    << "Series : " << Webcam_Object.Wbcm_Series << std::endl
    << "Video Quality : " << Webcam_Object.Wbcm_Video_Quality << std::endl
    << "Focus : " << Webcam_Object.Wbcm_Focus << std::endl
    << "Lens : " << Webcam_Object.GCD_Lens << std::endl
    << "Microphone : " << Webcam_Object.Wbcm_Microphone << std::endl
    << "Rotational Camera : " << Webcam_Object.Wbcm_Rotational_Camera << std::endl
    << "Optical Sensor Technology : " << Webcam_Object.Wbcm_Optical_Sensor_Tech << std::endl
    << "Image Stabilisation Technology : " << Webcam_Object.GCD_Image_Stabilisation_Technology << std::endl
    << "Photo Sensor Technology : " << Webcam_Object.Wbcm_Photo_sensor_Technology << std::endl
    << "Exposure Control Type : " << Webcam_Object.Wbcm_CECD_Object.CECD_Control_Type_OR_Console << std::endl
    << "File Format : " << Webcam_Object.GCD_File_Format << std::endl
    << "Video Capture Format : " << Webcam_Object.GCD_Video_Capture_Format << std::endl
    << "Supported Audio Format : " << Webcam_Object.Wbcm_Supported_Audio_Format << std::endl
    << "Form Factor : " << Webcam_Object.Wbcm_CECD_Object.CECD_Form_Factor << std::endl
    << "Camcorder Type : " << Webcam_Object.GCD_Camcorder_type << std::endl
    << "Batteries Inlcuded : " << Webcam_Object.Wbcm_CECD_Object.CECD_BatteriesIncluded << std::endl
    << "Batteries Required : " << Webcam_Object.Wbcm_CECD_Object.CECD_BatteriesRequired << std::endl
    
    << "Wireless Type : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_CECD_Object.CECD_WirelessType);
    os << std::endl
    
    << "Connector Type : " << Webcam_Object.Wbcm_CECD_Object.CECD_ConnectorType << std::endl
    << "Media Type : " << Webcam_Object.GCD_Media_Type  << std::endl
    << "Does It Contain Liquid ? : " << Webcam_Object.GCD_Does_it_contain_liquid << std::endl
    << "Is There a Timer ? : " << Webcam_Object.GCD_Is_There_A_Timer << std::endl << std::endl

    << "Item Height : " << Webcam_Object.Wbcm_Item_height << std::endl
    << "Item Width : " << Webcam_Object.Wbcm_Item_Width << std::endl
    << "Standing Screen Display Size : " << Webcam_Object.Wbcm_CECD_Object.CECD_DisplaySize << std::endl
    << "Resolution : " << Webcam_Object.Wbcm_CECD_Object.CECD_Resolution << std::endl
    << "Voltage : " << Webcam_Object.Wbcm_CECD_Object.CECD_Voltage << std::endl
    << "Rear Webcam Resolution : " << Webcam_Object.Wbcm_Rear_Webcam_Resolution << std::endl
    << "Field of View : " << Webcam_Object.Wbcm_Field_of_View << std::endl
    << "Display Size : " << Webcam_Object.Wbcm_Display_Size << std::endl
    << "Digital Zoom : " << Webcam_Object.Wbcm_Digital_Zoom << std::endl
    << "Maximum Aperture : " << Webcam_Object.GCD_Maximum_Aperture << std::endl
    << "Maximum Focal Length : " << Webcam_Object.GCD_Maximum_Focal_length << std::endl
    << "Minimum Focal Length : " << Webcam_Object.GCD_Minimum_Focal_length << std::endl
    << "Screen Size : " << Webcam_Object.Wbcm_Screen_Size << std::endl
    << "Viewing Angle : " << Webcam_Object.GCD_Viewing_Angle << std::endl << std::endl 

    << "Aspect Ratio : " << Webcam_Object.GCD_Aspect_Ratio << std::endl
    << "Number of Items : " << Webcam_Object.Wbcm_Number_Of_Items << std::endl  << std::endl

    << "Video Capture Resolution : ";
    std::vector<Measurement_and_unit>::const_iterator Iter_1 = 
    Webcam_Object.GCD_Video_Capture_Resolution.end();

    while(Iter_1 != Webcam_Object.GCD_Video_Capture_Resolution.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }

    os
    << "Flash Memory Type : ";
    Webcam_Object.printing_vector_string(Webcam_Object.GCD_Flash_Memory_Type);
    os << std::endl 

    << "Hardware Platform : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_CECD_Object.CECD_HardwareInterface);
    os << std::endl

    << "Shooting Modes : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_Shooting_modes);
    os << std::endl

    << "Compatible Devices : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_CECD_Object.CECD_CompatibleDevices);
    os << std::endl

    << "Connectivity Tech : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_CECD_Object.CECD_Connectivity_Technologies);
    os << std::endl


    << "Product Description : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_Product_Description);
    os << std::endl

    << "From Manufacturer : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_From_manufacturer);
    os << std::endl

    << "From Brand : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_From_Brand);
    os << std::endl

    << "Special Features : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_Special_features);
    os << std::endl

    << "About this Item : ";
    Webcam_Object.printing_vector_string(Webcam_Object.Wbcm_About_this_item);
    os << std::endl << std::endl

    << "Additional Information : " << std::endl << std::endl
    << Webcam_Object.Wbcm_Additional_Info_Object << std::endl;

    return os;
}
