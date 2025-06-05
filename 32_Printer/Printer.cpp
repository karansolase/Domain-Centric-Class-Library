#include "Printer.hpp"

Printer::Printer(
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

      std::initializer_list <std::string> _Generic_name)   :

    Printer_Product_Name(Product_Name), 
    Printer_Brand_Name(Brand_Name),

    Printer_Variants_Object(Variants_Object),

    Printer_Printing_Technology(printing_technology), 
    Printer_Printer_Output(printer_output), 
    Printer_Scanner_Type(Scanner_type), 
    Printer_Display_Type(Display_type), 
    Printer_Duplex(Duplex), 
    Printer_Automatic_Document_Feeder(Automatic_Document_feeder),
    Printer_Auto_Duplex_Printing(Auto_Duplex_printing), 
    Printer_Colour_LCD_Display(Colour_LCD_Display), 
    Printer_Dual_Sided_Printing(Dual_Sided_printing), 
    Printer_Warranty_Type(Warranty_type), 
    Printer_Does_It_Contain_Liquid(Does_it_contain_liquid), 
    Printer_Lithium_Battery_Packaging(Lithium_battery_packaging), 
    
    Printer_Number_of_Memory_Sticks(Number_of_memory_sticks),
    Printer_Max_Input_Sheet_Capacity(Max_input_sheet_Capacity), 
    Printer_Processor_count(Processor_count),
    Printer_Number_of_lithium_ion_cells(Number_of_lithium_ion_cells), 
    Printer_Number_of_USB_2_Ports(Number_of_USB_2_Ports),
    Printer_Total_USB_Ports(Total_USB_Ports),
    Printer_UPC(UPC), 
    Printer_Global_Trade_Identification_Number(Global_Trade_Identification_number), 

    Printer_Colour_Depth(
        Colour_Depth_value,
        Colour_Depth_unit_and_String
    ), 

    Printer_Item_width(
        Item_Width_Value,
        Item_width_unit_and_String
    ), 

    Printer_Item_length(
        Item_Length_Value,
        Item_length_unit_and_String
    ),

    Printer_Lithium_Battery_Energy_Content(
        Lithium_Battery_energy_content_Value,
        Lithium_Battery_energy_content_unit_and_String
    ),

    Printer_Maximum_print_speed_colour(
        Maximum_print_speed_colour_Value,
        Maximum_print_speed_colour_unit_And_String
    ), 

    Printer_Max_print_speed_monochrome(
        Max_print_speed_monochrome_Value,
        Max_print_speed_monochrome_unit_and_String
    ), 

    Printer_Media_Size_maximum(
        "",
        First_Value_Media_Size_maximum,
        symbol_OF_Media_Size_maximum,
        Second_value_Media_Size_maximum,
        UNit_Of_Media_Size_maximum), 

    Printer_Max_copy_speed_Black_and_white(Max_copy_speed_Black_and_white), 
    Printer_Maximum_Black_and_White_Print_Resolution(Maximum_Black_and_White_Print_Resolution),
    
    Printer_Resolution_BW_vert_max(
        Resolution_BW_vert_max_value,
        Resolution_BW_vert_max_unit_and_String), 

    Printer_Resolution_BW_horiz_max(
        Resolution_BW_horiz_max_Values,
        Resolution_BW_horiz_max_Unit_and_String),
    
    Printer_Ink_Colour(Ink_Colour), 
    Printer_Compatible_Cartridge(Compatible_Cartridge),
    Printer_Sheet_size(Sheet_size),
    Printer_Paper_size_or_printer_Media_size_maximum(Paper_size_or_printer_Media_size_maximum), 
    Printer_Type(Printer_type), 
    Printer_Additional_printer_functions(Additional_printer_functions),
    Printer_Controller_Type(Controller_Type),
    Printer_Print_Media_Type(Print_media_type), 

    Printer_About_This_Item(About_this_item), 
    Printer_Product_Description(Product_Description),
    Printer_Specific_Uses_for_Product(Specific_uses_for_product), 
    Printer_From_Manufacturer(From_manufacturer),
    Printer_Special_Features(Special_features),

    Printer_CECD_Object(
        Control_method,
        Are_Batteries_Included,
        "",
        "",
        "",
        "",
        "",
        "",
        Form_Factor,
        "",
        "",
        "",
        {""},
        Operating_systems, 
        {""},

        Standing_Screen_display_Size_Value,
        Standing_Screen_display_Size_unit_and_String,

        0,{""},
        0,{""},
        0,{""},
        0,{""},
        0,{""},
        
        {"",
        First_Value_Resolution,
        Symbol_Of_Resolution,
        Second_Value_Resolution,
        Unit_Of_Resolution},

        Power_consumptions_Value,
        Power_consumptions_unit_and_String,

        Maximum_memory_capacity_Value,
        Maximum_memory_capacity_unit_and_String,

        0,{""},

        Voltage_Value,
        Voltage_unit_and_String,

        Wattage_Value,
        Wattage_unit_and_String,

        connectivity_technologies,
        {""},
        {""},
        Hardware_interface,
        Compatible_Devices,
        {""}
    ),
    
    Printer_Additional_Info_Object(
        _ASIN,

        Manufacturing_Object,
        _Manufacturing_Year,

        _Warranty,

        _Country_Of_Origin,
        _Model_Number,

        _Ratings,
        _Reviews,

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

void Printer::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Printer& Printer_Object)
{
    os << "PORDUCT DETAILS     :   " << std::endl << std::endl

    << "Product Name : " << Printer_Object.Printer_Product_Name << std::endl
    << "Brand Name : " << Printer_Object.Printer_Brand_Name << std::endl << std::endl;

    std::vector<Variants>::const_iterator Iter_1 = 
    Printer_Object.Printer_Variants_Object.begin();

    while(Iter_1 != Printer_Object.Printer_Variants_Object.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os << std::endl;

    os
    << "Printing Technology : " << Printer_Object.Printer_Printing_Technology << std::endl
    << "Printer Output : " << Printer_Object.Printer_Printer_Output << std::endl
    << "Scanner Type : " << Printer_Object.Printer_Scanner_Type << std::endl
    << "Display Type : " << Printer_Object.Printer_Display_Type << std::endl
    << "Duplex : " << Printer_Object.Printer_Duplex << std::endl
    << "Control Method : " << Printer_Object.Printer_CECD_Object.CECD_Control_Type_OR_Console << std::endl
    << "Form Factor : " << Printer_Object.Printer_CECD_Object.CECD_Form_Factor << std::endl
    << "Are Batteries Included : " << Printer_Object.Printer_CECD_Object.CECD_BatteriesIncluded << std::endl
    << "Automatic Document Feeder : " << Printer_Object.Printer_Automatic_Document_Feeder << std::endl
    << "Colour LCD Display : " << Printer_Object.Printer_Colour_LCD_Display << std::endl
    << "Dual Sided Printing : " << Printer_Object.Printer_Dual_Sided_Printing << std::endl
    << "Warranty Type : " << Printer_Object.Printer_Warranty_Type << std::endl
    << "Does It Contain Liquid : " << Printer_Object.Printer_Does_It_Contain_Liquid << std::endl
    << "Lithium Battery Packaging : " << Printer_Object.Printer_Lithium_Battery_Packaging << std::endl
    
    << "Hardware Interface : ";
    std::vector<Word_Number>::const_iterator Iter_2 = 
    Printer_Object.Printer_CECD_Object.CECD_HardwareInterface.begin();

    int j = 0;
    while(Iter_2 != Printer_Object.Printer_CECD_Object.CECD_HardwareInterface.end())
    {
        j = j + 1;
        std::cout << j << ") " << *Iter_2 << std::endl;
        ++Iter_2;
    }
    os << std::endl

    << "Number of Memory Sticks : " << Printer_Object.Printer_Number_of_Memory_Sticks << std::endl
    << "Max Input Sheet Capacity : " << Printer_Object.Printer_Max_Input_Sheet_Capacity << std::endl
    << "Processor Count : " << Printer_Object.Printer_Processor_count << std::endl
    << "Number of Lithium Ion Cells : " << Printer_Object.Printer_Number_of_lithium_ion_cells << std::endl
    << "Number of USE 2 Ports : " << Printer_Object.Printer_Number_of_USB_2_Ports << std::endl
    << "Total USb Ports : " << Printer_Object.Printer_Total_USB_Ports << std::endl
    << "UPC : " << Printer_Object.Printer_UPC << std::endl
    << "Global Trade Identification Number : " << Printer_Object.Printer_Global_Trade_Identification_Number << std::endl << std::endl

    << "Wattage : " << Printer_Object.Printer_CECD_Object.CECD_Wattage << std::endl
    << "Voltage : " << Printer_Object.Printer_CECD_Object.CECD_Voltage << std::endl
    << "Colour Depth : " << Printer_Object.Printer_Colour_Depth << std::endl
    << "Item Width : " << Printer_Object.Printer_Item_width << std::endl
    << "Item Length : " << Printer_Object.Printer_Item_length << std::endl
    << "Lithium Battery Energy Content : " << Printer_Object.Printer_Lithium_Battery_Energy_Content << std::endl
    << "Standing Scren Display Size : " << Printer_Object.Printer_CECD_Object.CECD_DisplaySize << std::endl
    << "Power Consumptions : " << Printer_Object.Printer_CECD_Object.CECD_PowerConumptions << std::endl
    << "Maximum Print Speed Colour : " << Printer_Object.Printer_Maximum_print_speed_colour << std::endl
    << "Max Print Speed Monochrome : " << Printer_Object.Printer_Max_print_speed_monochrome << std::endl
    << "Maximum Memory Capacity : " << Printer_Object.Printer_CECD_Object.CECD_Memory_Storage_Capacity << std::endl
    << "Print Media Size Maximum : " << Printer_Object.Printer_Media_Size_maximum << std::endl
    << "Max Copy Speed Black and White : " << Printer_Object.Printer_Max_copy_speed_Black_and_white << std::endl
    << "Resolution : " << Printer_Object.Printer_CECD_Object.CECD_Resolution << std::endl
    << "Maximum Black and White Print Resolution : " << Printer_Object.Printer_Maximum_Black_and_White_Print_Resolution << std::endl
    << "Resolution BW Vert Max : " << Printer_Object.Printer_Resolution_BW_horiz_max << std::endl
    << "Resolution BW Horiz Max : " << Printer_Object.Printer_Resolution_BW_horiz_max << std::endl << std::endl

    << "Connectivity Technologies : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_CECD_Object.CECD_Connectivity_Technologies);
    os << std::endl

    << "Printer Ink Colour : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Ink_Colour);
    os << std::endl

    << "Compatible Cartridge : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Compatible_Cartridge);
    os << std::endl

    << "Printer Sheet Size : ";
    std::vector<Variant_Info>::const_iterator Iter_3 = 
    Printer_Object.Printer_Sheet_size.begin();

    j = 0;
    while(Iter_3 != Printer_Object.Printer_Sheet_size.end())
    {
        j = j + 1;
        std::cout << j << ") " << *Iter_3 << std::endl;
        ++Iter_3;
    }
    os << std::endl

    << "Paper Size OR Printer Media Size Maximum : ";
    std::vector<Variant_Info>::const_iterator Iter_4 = 
    Printer_Object.Printer_Paper_size_or_printer_Media_size_maximum.begin();

    j = 0;
    while(Iter_4 != Printer_Object.Printer_Paper_size_or_printer_Media_size_maximum.end())
    {
        j = j + 1;
        std::cout << j << ") " << *Iter_4 << std::endl;
        ++Iter_4;
    }
    os << std::endl

    << "Printer Type : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Type);
    os << std::endl

    << "Operating System : ";
    j = 0;
    for(const Word_Number i : Printer_Object.Printer_CECD_Object.CECD_OperatingSystem)
    {
        j = j + 1;
        os << j << ") " << i << std::endl; 
    }
    os << std::endl;

    std::vector<Word_Number>::const_iterator Iter_5 = 
    Printer_Object.Printer_CECD_Object.CECD_OperatingSystem.begin();

    j = 0;
    while(Iter_5 != Printer_Object.Printer_CECD_Object.CECD_OperatingSystem.end())
    {
        j = j + 1;
        std::cout << j << ") " << *Iter_5 << std::endl;
        ++Iter_5;
    }
    os << std::endl

    << "Additional Printer Functions : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Additional_printer_functions);
    os << std::endl

    << "Compatible Devices : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_CECD_Object.CECD_CompatibleDevices);
    os << std::endl

    << "Controller Type : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Controller_Type);
    os << std::endl

    << "Print Media Type : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Print_Media_Type);
    os << std::endl

    << "About This Item : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_About_This_Item);
    os << std::endl

    << "Product Description : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Product_Description);
    os << std::endl

    << "Specific Uses For Product : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Specific_Uses_for_Product);
    os << std::endl

    << "From Manufacturer : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_From_Manufacturer);
    os << std::endl

    << "Special Features : ";
    Printer_Object.printing_vector_string(Printer_Object.Printer_Special_Features);
    os << std::endl << std::endl

    << "Additional Information  : " << std::endl << std::endl
    << Printer_Object.Printer_Additional_Info_Object;

    return os;
}