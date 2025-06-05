#ifndef _WEBCAM_HPP
#define _WEBCAM_HPP

#include "Additional_Info.hpp"
#include "variants.hpp"
#include "General_Camera_Details.hpp"
#include "Common_Electronic_Commodities_Details.hpp"

class Webcam : private General_Camera_Details{

    friend std::ostream& operator<<(std::ostream& os, const Webcam& Webcam_Object);

    private :
    std::string Wbcm_Product_Name;
    std::string Wbcm_Brand_Name;
    Word_Number Wbcm_Model_Name; 

    std::vector <Variants> Wbcm_Variants_Object;
    Common_Electronic_Commodities_Details Wbcm_CECD_Object;

    Word_Number Wbcm_Series; 
    std::string Wbcm_Video_Quality; 
    std::string Wbcm_Focus; 
    std::string Wbcm_Microphone; 
    std::string Wbcm_Rotational_Camera; 
    std::string Wbcm_Optical_Sensor_Tech; 
    std::string Wbcm_Photo_sensor_Technology; 
    // std::string Wbcm_Exposure_Control_type; 
    std::string Wbcm_Supported_Audio_Format; 
    // std::string Wbcm_Wireless_Type; 
    
    Measurement_and_unit Wbcm_Item_height; 
    Measurement_and_unit Wbcm_Item_Width; 
    // Measurement_and_unit Wbcm_Resolution; 
    // Measurement_and_unit Wbcm_Voltage; 
    Measurement_and_unit Wbcm_Rear_Webcam_Resolution; 
    Measurement_and_unit Wbcm_Field_of_View; 
    Measurement_and_unit Wbcm_Display_Size; 
    Measurement_and_unit Wbcm_Digital_Zoom; 
    Measurement_and_unit Wbcm_Screen_Size; 

    unsigned int Wbcm_Number_Of_Items; 
    
    // std::vector <std::string> Wbcm_Hardware_Platform; 
    std::vector <std::string> Wbcm_Shooting_modes; 

    std::vector <std::string> Wbcm_Product_Description; 
    std::vector <std::string> Wbcm_From_manufacturer; 
    std::vector <std::string> Wbcm_From_Brand; 
    std::vector <std::string> Wbcm_Special_features; 
    std::vector <std::string> Wbcm_About_this_item; 

    Additional_Info Wbcm_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Webcam(
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
    );

};

#endif

