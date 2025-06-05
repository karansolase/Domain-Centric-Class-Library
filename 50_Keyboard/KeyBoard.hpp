#pragma once 

#ifndef _KEYBOARD_HPP
#define _KEYBOARD_HPP

#include <iostream>
#include "variants.hpp"
#include "Measurement_and_unit.hpp"
#include "Additional_info.hpp"

class KeyBoard{

    friend std::ostream& operator<<(std::ostream& os, const KeyBoard& KB_Object);

    private :
    std::string KB_ProductName; 
    std::string KB_BrandName; 

    std::vector <Variants> KB_VariantsObject;

    std::string KB_Form_Factor; 
    std::string KB_Power_Source; 
    std::string KB_Are_Batteries_Included; 
    std::string KB_Batteries; 
    std::string KB_Hardware_Platform; 
    std::string KB_Hardware_Interface;
    std::string KB_ConnectorType; 
    std::string KB_Hand_Orientation; 
    std::string KB_Mounting_Hardware; 
    std::string KB_Has_An_Attached_Light; 
    std::string KB_KeySwitchType;
    std::string KB_Noise_Level; 
    std::string KB_Typing_Speed; 
    std::string KB_Volume_Knob; 
    std::string KB_Best_FOR; 
    std::string KB_BIS_Approved; 
    std::string KB_Does_It_Containliquid; 
    std::string KB_BatteryCell_Composition; 
    std::string KB_Has_Auto_Focus; 
    std::string KB_Includes_Reahargeable_Battery; 
    std::string KB_ProgrammableButtons; 

    Measurement_and_unit KB_Item_Height;
    Measurement_and_unit KB_Item_Width;
    Measurement_and_unit KB_Voltage;
    Measurement_and_unit KB_Lithium_Battery_Weight;   
    Measurement_and_unit KB_Lithium_Battery_Energy_Content; 
    Measurement_and_unit KB_MultiDevice;  
    Measurement_and_unit KB_Standing_Screen_Display_Size;   

    unsigned int KB_number_OF_Keys; 
    unsigned int KB_number_OF_Items; 
    unsigned int KB_number_OF_Lithium_ION_Cells; 
    unsigned int KB_number_OF_lithium_Metal_Cells; 
    unsigned int KB_ProcessorCount; 

    std::vector <std::string> KB_Compatible_Devices; 
    std::vector <std::string> KB_ConnectivityTechnologies; 
    std::vector <std::string> KB_Keyboard_Description; 
    std::vector <std::string> KB_Operating_System;
    std::vector <std::string> KB_Material; 

    std::vector <std::string> KB_Recommended_Uses_For_Product;
    std::vector <std::string> KB_About_This_Item;
    std::vector <std::string> KB_Special_Features; 
    std::vector <std::string> KB_Product_Description;
    std::vector <std::string> KB_From_Manufacturer;

    Additional_Info KB_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    KeyBoard(
    std::string _product_name,
    std::string _brand_name, 

    std::initializer_list <Variants> _variants_object,

    std::string _Form_factor, 
    std::string _Power_Source, 
    std::string _Are_Batteries_Included, 
    std::string _Batteries,
    std::string _Hardware_Platform, 
    std::string _Hardware_Interface, 
    std::string _Connector_type, 
    std::string _Hand_Orientation, 
    std::string _Mounting_Hardware,
    std::string _Has_an_attached_light, 
    std::string _Key_Switch_type, 
    std::string _Noise_level, 
    std::string _Typing_Speed,
    std::string _Volume_knob, 
    std::string _Best_for, 
    std::string _BIS_Approved, 
    std::string _Does_it_contain_liquid, 
    std::string _Battery_cell_composition, 
    std::string _Has_Auto_Focus, 
    std::string _Includes_Reahargeable_Battery, 
    std::string _Programmable_Buttons, 

    double Item_Height_value,
    std::initializer_list <std::string> Item_Height_unit_and_string,
    
    double Item_Width_value,
    std::initializer_list <std::string> Item_Width_unit_and_string,
    
    double Voltage_value,
    std::initializer_list <std::string> Voltage_unit_and_string, 
    
    double Lithium_Battery_Weight_value,
    std::initializer_list <std::string> Lithium_Battery_Weight_unit_and_string, 
    
    double Lithium_Battery_Energy_Content_value,
    std::initializer_list <std::string> Lithium_Battery_Energy_Content_unit_and_string, 
    
    double multi_device_value,
    std::initializer_list <std::string> multi_device_unit_and_string, 
    
    double Standing_screen_display_size_value,
    std::initializer_list <std::string> Standing_screen_display_size_unit_and_string, 

    unsigned int _number_of_keys, 
    unsigned int _number_of_items, 
    unsigned int _number_of_lithium_ion_cells, 
    unsigned int _number_of_lithium_Metal_cells, 
    unsigned int _processor_count, 

    std::initializer_list <std::string> _Compatible_Devices, 
    std::initializer_list <std::string> _Connectivity_technologies, 
    std::initializer_list <std::string> _Keyboard_description, 
    std::initializer_list <std::string> _Operating_system, 
    std::initializer_list <std::string> _Material, 

    std::initializer_list <std::string> _Recommended_Uses_For_Product,
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Special_features, 
    std::initializer_list <std::string> _Product_description,
    std::initializer_list <std::string> _From_manufacturer,

    Additional_Info _add_info
    );
};

#endif /* KeyBoard.hpp */

