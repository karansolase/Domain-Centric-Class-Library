#include "General_Camera_Details.hpp"

General_Camera_Details::General_Camera_Details(
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
)
:   GCD_Lens(_lens),
    GCD_Image_Stabilisation_Technology(_Image_Stabilisation_technology),
    GCD_File_Format(_File_Format),
    GCD_Video_Capture_Format(_Video_Capture_Format),
    GCD_Camcorder_type(_Camcorder_type),
    GCD_Media_Type(_Media_type),
    GCD_Does_it_contain_liquid(_Does_it_contain_liquid),
    GCD_Is_There_A_Timer(_Is_there_a_timer),

    GCD_Optical_Zoom(
        Optical_zoom_value,
        Optical_zoom_unit_and_string),

    GCD_Maximum_Aperture(
        Maximum_aperture_value,
        Maximum_aperture_unit_and_string),

    GCD_Maximum_Focal_length(
        Maximum_focal_length_value,
        Maximum_focal_length_unit_and_string),

    GCD_Minimum_Focal_length(
        Minimum_focal_length_value,
        Minimum_focal_length_unit_and_string),

    GCD_Viewing_Angle(
        Viewing_Angle_value,
        Viewing_Angle_unit_and_string),

    GCD_Aspect_Ratio(_Aspect_ratio),

    GCD_Flash_Memory_Type(_Flash_memory_type),
    GCD_Video_Capture_Resolution(_Video_capture_resolution)
{
}
