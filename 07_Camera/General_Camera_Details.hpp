#ifndef _GENERAL_CAMERA_DETAILS_HPP
#define _GENERAL_CAMERA_DETAILS_HPP

#include "Measurement_and_unit.hpp"
#include <vector>

class General_Camera_Details{

    public :
    std::string GCD_Lens;
    std::string GCD_Image_Stabilisation_Technology;
    std::string GCD_File_Format;
    std::string GCD_Video_Capture_Format;
    std::string GCD_Camcorder_type;
    std::string GCD_Media_Type;
    std::string GCD_Does_it_contain_liquid;
    std::string GCD_Is_There_A_Timer;
    
    Measurement_and_unit GCD_Optical_Zoom;
    Measurement_and_unit GCD_Maximum_Aperture;
    Measurement_and_unit GCD_Maximum_Focal_length;
    Measurement_and_unit GCD_Minimum_Focal_length;
    Measurement_and_unit GCD_Viewing_Angle;
    
    Measurement_and_unit GCD_Aspect_Ratio;
    
    std::vector <std::string> GCD_Flash_Memory_Type;
    std::vector <Measurement_and_unit> GCD_Video_Capture_Resolution;
    
    public :

    General_Camera_Details(
    std::string _lens,
    std::string _Image_Stabilisation_technology,
    std::string _File_Format,
    std::string _Video_Capture_Format,
    std::string _Camcorder_type,
    std::string _Media_type,
    std::string _Does_it_contain_liquid,
    std::string _Is_there_a_timer,
    
    double Optical_zoom_value,
    std::initializer_list <std::string> Optical_zoom_unit_and_string,
    
    double Maximum_aperture_value,
    std::initializer_list <std::string> Maximum_aperture_unit_and_string,
    
    double Maximum_focal_length_value,
    std::initializer_list <std::string> Maximum_focal_length_unit_and_string,
    
    double Minimum_focal_length_value,
    std::initializer_list <std::string> Minimum_focal_length_unit_and_string,
    
    double Viewing_Angle_value,
    std::initializer_list <std::string> Viewing_Angle_unit_and_string,
    
    Measurement_and_unit _Aspect_ratio,
    
    std::initializer_list <std::string> _Flash_memory_type,
    std::initializer_list <Measurement_and_unit> _Video_capture_resolution
    );
};

#endif