#pragma once 

#ifndef _PRINTER_HPP
#define _PRINTER_HPP

#include "Additional_Info.hpp"
#include "Measurement_and_unit.hpp"
#include "Common_Electronic_Commodities_Details.hpp"
#include "variants.hpp"
#include <vector>

class Printer{

    friend std::ostream& operator<<(std::ostream& os, const Printer& Printer_Object);

    private :
    std::string Printer_Product_Name; 
    std::string Printer_Brand_Name;

    std::vector <Variants> Printer_Variants_Object;
    Common_Electronic_Commodities_Details Printer_CECD_Object;

    std::string Printer_Printing_Technology; 
    std::string Printer_Printer_Output; 
    std::string Printer_Scanner_Type; 
    std::string Printer_Display_Type; 
    std::string Printer_Duplex;  
    std::string Printer_Automatic_Document_Feeder; 
    std::string Printer_Auto_Duplex_Printing; 
    std::string Printer_Colour_LCD_Display; 
    std::string Printer_Dual_Sided_Printing;
    std::string Printer_Warranty_Type; 
    std::string Printer_Does_It_Contain_Liquid; 
    std::string Printer_Lithium_Battery_Packaging; 
    
    unsigned short Printer_Number_of_Memory_Sticks; 
    unsigned short Printer_Max_Input_Sheet_Capacity; 
    unsigned short Printer_Processor_count;
    unsigned short Printer_Number_of_lithium_ion_cells; 
    unsigned short Printer_Number_of_USB_2_Ports; 
    unsigned short Printer_Total_USB_Ports; 
    unsigned long long int Printer_UPC; 
    std::string Printer_Global_Trade_Identification_Number; 
    
    Measurement_and_unit Printer_Colour_Depth; 
    Measurement_and_unit Printer_Item_width; 
    Measurement_and_unit Printer_Item_length; 
    Measurement_and_unit Printer_Lithium_Battery_Energy_Content; 
    Measurement_and_unit Printer_Maximum_print_speed_colour; 
    Measurement_and_unit Printer_Max_print_speed_monochrome; 
    Measurement_and_unit Printer_Media_Size_maximum; 
    Measurement_and_unit Printer_Max_copy_speed_Black_and_white;
    Measurement_and_unit Printer_Maximum_Black_and_White_Print_Resolution; 
    Measurement_and_unit Printer_Resolution_BW_vert_max; 
    Measurement_and_unit Printer_Resolution_BW_horiz_max;
    
    std::vector <std::string> Printer_Ink_Colour; 
    std::vector <std::string> Printer_Compatible_Cartridge; 
    std::vector <Variant_Info> Printer_Sheet_size; 
    std::vector <Variant_Info> Printer_Paper_size_or_printer_Media_size_maximum;
    std::vector <std::string> Printer_Type; 
    std::vector <std::string> Printer_Additional_printer_functions; 
    std::vector <std::string> Printer_Controller_Type; 
    std::vector <std::string> Printer_Print_Media_Type;

    std::vector <std::string> Printer_About_This_Item; 
    std::vector <std::string> Printer_Product_Description; 
    std::vector <std::string> Printer_Specific_Uses_for_Product;
    std::vector <std::string> Printer_From_Manufacturer; 
    std::vector <std::string> Printer_Special_Features; 

    Additional_Info Printer_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Printer(
    std::string Product_Name, 
    std::string Brand_Name,

    std::initializer_list <Variants> Variants_Object,

    std::string printing_technology, 
    std::string printer_output, 
    std::string Scanner_type, 
    std::string Display_type, 
    std::string Duplex, 
    std::string Control_method, 
    std::string Form_Factor, 
    std::string Are_Batteries_Included, 
    std::string Automatic_Document_feeder, 
    std::string Auto_Duplex_printing, 
    std::string Colour_LCD_Display, 
    std::string Dual_Sided_printing, 
    std::string Warranty_type, 
    std::string Does_it_contain_liquid,
    std::string Lithium_battery_packaging, 
    
    std::initializer_list <Word_Number> Hardware_interface, 
    
    unsigned short Number_of_memory_sticks, 
    unsigned short Max_input_sheet_Capacity, 
    unsigned short Processor_count, 
    unsigned short Number_of_lithium_ion_cells,
    unsigned short Number_of_USB_2_Ports,
    unsigned short Total_USB_Ports,
    unsigned long long int UPC, 
    std::string Global_Trade_Identification_number, 
    
    double Wattage_Value,
    std::initializer_list <std::string> Wattage_unit_and_String, 
    
    double Voltage_Value,
    std::initializer_list <std::string> Voltage_unit_and_String, 
    
    double Colour_Depth_value,
    std::initializer_list <std::string> Colour_Depth_unit_and_String, 
    
    double Item_Width_Value,
    std::initializer_list <std::string> Item_width_unit_and_String, 
    
    double Item_Length_Value,
    std::initializer_list <std::string> Item_length_unit_and_String, 
    
    double Lithium_Battery_energy_content_Value,
    std::initializer_list <std::string> Lithium_Battery_energy_content_unit_and_String, 
    
    double Standing_Screen_display_Size_Value,
    std::initializer_list <std::string> Standing_Screen_display_Size_unit_and_String, 
    
    double Power_consumptions_Value,
    std::initializer_list <std::string> Power_consumptions_unit_and_String, 
    
    double Maximum_print_speed_colour_Value,
    std::initializer_list <std::string> Maximum_print_speed_colour_unit_And_String, 
    
    double Max_print_speed_monochrome_Value,
    std::initializer_list <std::string> Max_print_speed_monochrome_unit_and_String, 
    
    double Maximum_memory_capacity_Value,
    std::initializer_list <std::string> Maximum_memory_capacity_unit_and_String, 
    
    double First_Value_Media_Size_maximum, 
    std::string symbol_OF_Media_Size_maximum,
    double Second_value_Media_Size_maximum,
    std::string UNit_Of_Media_Size_maximum,

    Measurement_and_unit Max_copy_speed_Black_and_white, 
    
    double First_Value_Resolution,
    std::string Symbol_Of_Resolution,
    double Second_Value_Resolution,
    std::string Unit_Of_Resolution,

    Measurement_and_unit Maximum_Black_and_White_Print_Resolution, 

    double Resolution_BW_vert_max_value,
    std::initializer_list <std::string> Resolution_BW_vert_max_unit_and_String, 
    
    double Resolution_BW_horiz_max_Values,
    std::initializer_list <std::string> Resolution_BW_horiz_max_Unit_and_String, 
    
    std::initializer_list <std::string> connectivity_technologies, 
    std::initializer_list <std::string> Ink_Colour, 
    std::initializer_list <std::string> Compatible_Cartridge, 
    std::initializer_list <Variant_Info> Sheet_size, 
    std::initializer_list <Variant_Info> Paper_size_or_printer_Media_size_maximum, 
    std::initializer_list <std::string> Printer_type, 
    std::initializer_list <Word_Number> Operating_systems, 
    std::initializer_list <std::string> Additional_printer_functions, 
    std::initializer_list <std::string> Compatible_Devices, 
    std::initializer_list <std::string> Controller_Type,
    std::initializer_list <std::string> Print_media_type, 

    std::initializer_list <std::string> About_this_item,
    std::initializer_list <std::string> Product_Description,
    std::initializer_list <std::string> Specific_uses_for_product, 
    std::initializer_list <std::string> From_manufacturer, 
    std::initializer_list <std::string> Special_features, 

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

#endif /* Printer.hpp */