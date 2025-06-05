#include "keyboard.hpp"

KeyBoard::KeyBoard(
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
)
:   KB_ProductName(_product_name), 
    KB_BrandName(_brand_name), 

    KB_VariantsObject(_variants_object),

    KB_Form_Factor(_Form_factor), 
    KB_Power_Source(_Power_Source), 
    KB_Are_Batteries_Included(_Are_Batteries_Included), 
    KB_Batteries(_Batteries), 
    KB_Hardware_Platform(_Hardware_Platform), 
    KB_Hardware_Interface(_Hardware_Interface), 
    KB_ConnectorType(_Connector_type), 
    KB_Hand_Orientation(_Hand_Orientation), 
    KB_Mounting_Hardware(_Mounting_Hardware), 
    KB_Has_An_Attached_Light(_Has_an_attached_light), 
    KB_KeySwitchType(_Key_Switch_type), 
    KB_Noise_Level(_Noise_level), 
    KB_Typing_Speed(_Typing_Speed), 
    KB_Volume_Knob(_Volume_knob), 
    KB_Best_FOR(_Best_for), 
    KB_BIS_Approved(_BIS_Approved),  
    KB_Does_It_Containliquid(_Does_it_contain_liquid), 
    KB_BatteryCell_Composition(_Battery_cell_composition), 
    KB_Has_Auto_Focus(_Has_Auto_Focus),
    KB_Includes_Reahargeable_Battery(_Includes_Reahargeable_Battery), 
    KB_ProgrammableButtons(_Programmable_Buttons), 

    KB_Item_Height(
        Item_Height_value,
        Item_Height_unit_and_string),

    KB_Item_Width(
        Item_Width_value,
        Item_Width_unit_and_string),

    KB_Voltage(
        Voltage_value,
        Voltage_unit_and_string),

    KB_Lithium_Battery_Weight(
        Lithium_Battery_Weight_value,
        Lithium_Battery_Weight_unit_and_string),

    KB_Lithium_Battery_Energy_Content(
        Lithium_Battery_Energy_Content_value,
        Lithium_Battery_Energy_Content_unit_and_string),

    KB_MultiDevice(
    multi_device_value,
    multi_device_unit_and_string),

    KB_Standing_Screen_Display_Size(
    Standing_screen_display_size_value,
    Standing_screen_display_size_unit_and_string),

    KB_number_OF_Keys(_number_of_keys), 
    KB_number_OF_Items(_number_of_items), 
    KB_number_OF_Lithium_ION_Cells(_number_of_lithium_ion_cells), 
    KB_number_OF_lithium_Metal_Cells(_number_of_lithium_Metal_cells), 
    KB_ProcessorCount(_processor_count), 

    KB_Compatible_Devices(_Compatible_Devices), 
    KB_ConnectivityTechnologies(_Connectivity_technologies), 
    KB_Keyboard_Description(_Keyboard_description), 
    KB_Operating_System(_Operating_system), 
    KB_Material(_Material), 

    KB_Recommended_Uses_For_Product(_Recommended_Uses_For_Product),
    KB_About_This_Item(_About_this_item),
    KB_Special_Features(_Special_features), 
    KB_Product_Description(_Product_description),
    KB_From_Manufacturer(_From_manufacturer),

    KB_Additional_Info(_add_info)
{

}

void KeyBoard::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const KeyBoard& KB_Object){
    os << "PRODUCT DETAILS  :  " << std::endl << std::endl

    << "Product Name : " << KB_Object.KB_ProductName << std::endl
    << "Brand Name : " << KB_Object.KB_BrandName << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter = 
    KB_Object.KB_VariantsObject.begin();

    while(Iter != KB_Object.KB_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }
    os 

    << "Form Factor : " << KB_Object.KB_Form_Factor << std::endl
    << "Power Source : " << KB_Object.KB_Power_Source << std::endl
    << "Are Batteries Included : " << KB_Object.KB_Are_Batteries_Included << std::endl
    << "Batteries : " << KB_Object.KB_Batteries << std::endl
    << "Hardware Platform : " << KB_Object.KB_Hardware_Platform << std::endl
    << "Hardware Interface : " << KB_Object.KB_Hardware_Interface << std::endl
    << "Connector Type : " << KB_Object.KB_ConnectorType << std::endl
    << "Hand Orientation : " << KB_Object.KB_Hand_Orientation << std::endl
    << "Mounting Hardware : " << KB_Object.KB_Mounting_Hardware << std::endl
    << "Has an attached Light : " << KB_Object.KB_Has_An_Attached_Light << std::endl
    << "Key Switch Type : " << KB_Object.KB_KeySwitchType << std::endl
    << "Noise Level : " << KB_Object.KB_Noise_Level << std::endl
    << "Typing Speed : " << KB_Object.KB_Typing_Speed << std::endl
    << "Volume Knob : " << KB_Object.KB_Volume_Knob << std::endl
    << "Best For : " << KB_Object.KB_Best_FOR << std::endl
    << "BIS Approved : " << KB_Object.KB_BIS_Approved << std::endl
    << "Does It Contain Liquid : " << KB_Object.KB_Does_It_Containliquid << std::endl
    << "Battery Cell Composition : " << KB_Object.KB_BatteryCell_Composition << std::endl
    << "Has Auto Focus : " << KB_Object.KB_Has_Auto_Focus << std::endl
    << "Includes Rechargeable Battery : " << KB_Object.KB_Includes_Reahargeable_Battery << std::endl
    << "Programmable Devices : " << KB_Object.KB_ProgrammableButtons << std::endl << std::endl

    << "Item Height : " << KB_Object.KB_Item_Height << std::endl
    << "Item Width : " << KB_Object.KB_Item_Width << std::endl
    << "Voltage : " << KB_Object.KB_Voltage << std::endl
    << "Lithium Battery Weight : " << KB_Object.KB_Lithium_Battery_Weight << std::endl
    << "Lithium Battery Energy Content : " << KB_Object.KB_Lithium_Battery_Energy_Content << std::endl
    << "Multi Devices : " << KB_Object.KB_MultiDevice << std::endl
    << "Standing Screen Display Size : " << KB_Object.KB_Standing_Screen_Display_Size << std::endl << std::endl

    << "Number of Keys : " << KB_Object.KB_number_OF_Keys << std::endl
    << "Number of Items : " << KB_Object.KB_number_OF_Items << std::endl
    << "Number of Lithium ION Cells : " << KB_Object.KB_number_OF_Lithium_ION_Cells << std::endl
    << "Number of Lithium Metals Cells : " << KB_Object.KB_number_OF_lithium_Metal_Cells << std::endl
    << "Processor Count : " << KB_Object.KB_ProcessorCount << std::endl << std::endl

    << "Compatible Devices : ";
    KB_Object.printing_vector_string(KB_Object.KB_Compatible_Devices);
    os << std::endl

    << "Connectivity Technolgies : ";
    KB_Object.printing_vector_string(KB_Object.KB_ConnectivityTechnologies);
    os << std::endl

    << "Keyboard Description : ";
    KB_Object.printing_vector_string(KB_Object.KB_Keyboard_Description);
    os << std::endl

    << "Operating System : ";
    KB_Object.printing_vector_string(KB_Object.KB_Operating_System);
    os << std::endl

    << "Material : ";
    KB_Object.printing_vector_string(KB_Object.KB_Material);
    os << std::endl

    << "Recommended Uses for Product : ";
    KB_Object.printing_vector_string(KB_Object.KB_Recommended_Uses_For_Product);
    os << std::endl

    << "About this Item : ";
    KB_Object.printing_vector_string(KB_Object.KB_About_This_Item);
    os << std::endl

    << "Special Features : ";
    KB_Object.printing_vector_string(KB_Object.KB_Special_Features);
    os << std::endl

    << "Product Description : ";
    KB_Object.printing_vector_string(KB_Object.KB_Product_Description);
    os << std::endl

    << "From Manufacturer : ";
    KB_Object.printing_vector_string(KB_Object.KB_From_Manufacturer);
    os << std::endl << std::endl

    << "Additional Information  :  " << std::endl << std::endl
    << KB_Object.KB_Additional_Info;


    return os;
}