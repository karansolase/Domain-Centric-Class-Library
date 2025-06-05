#include "Friger.hpp"

Friger::Friger(
    std::string _product_name,
      std::string _brand_name,

      std::vector <Variants> _variants_object,

      double capacity_value,
      std::initializer_list <std::string> capacity_unit_string,

      double freezer_capacity_value,
      std::initializer_list <std::string> freezer_capacity_unit_string,

      double fresh_food_capacity_value,
      std::initializer_list <std::string> fresh_food_capacity_unit_string,

      unsigned int _number_of_shelves,
      unsigned int _number_of_Doors,
      unsigned int _total_no_of_compartments,
      unsigned int _Vegetable_drawers,
      unsigned int _number_of_drawers,
      unsigned int _bottle_count,

      double Vegetable_tray_capacity_value,
      std::initializer_list <std::string> Vegetable_tray_capacity_unit_string,

      double bottle_storage_value,
      std::initializer_list <std::string> bottle_storage_unit_string,

      Measurement_and_unit _Stabilizer_free_operation,

      std::string _shelf_type,
      std::string _lock_type,
      std::initializer_list <std::string> _Interior_or_storage_description,

      std::string _config,
      std::string _cooling_type,
      std::string _finish,
      std::string _inverter,
      std::initializer_list <std::string> _material,

      std::initializer_list <std::string> _special_features,
      std::initializer_list <std::string> _brand_specific_features,
      std::initializer_list <std::string> _product_info,

      double energy_efficiency_value,
      std::initializer_list <std::string> energy_efficiency_unit_string, 

      double energy_star_value,
      std::initializer_list <std::string> energy_star_unit_string,

      double annual_energy_consumption_value,
      std::initializer_list <std::string> annual_energy_consumption_unit_string,

      std::string _defrost_system,

      double noise_level_value,
      std::initializer_list <std::string> noise_level_unit_string,

      std::string _installation_type,

      double voltage_value,
      std::initializer_list <std::string> voltage_unit_string,

      std::string _refrigent,
      std::string _door_material_type,
      unsigned int _number_of_users,
      unsigned int _number_of_racks,
      std::string _Form_factor,
      std::string _Ice_maker_dispensed_type,
      std::string _specification_met,
      std::string _cooling_method,
      std::string _door_orientation,
      std::string _certification,
      std::string _Adjustable_temperature_control,
      std::string _Power_plug_type,
      std::string _Batteries_included,
      std::string _Batterires_required,

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
:   Friz_ProductName(_product_name),
    Friz_BrandName(_brand_name),

    Friz_VariantsObject(_variants_object),
    
    Friz_FreezerCapacity(
        freezer_capacity_value,
        freezer_capacity_unit_string),

    Friz_Fresh_Food_Capacity(
        fresh_food_capacity_value,
        fresh_food_capacity_unit_string),

    Friz_Number_OF_Shelves(_number_of_shelves),
    Friz_Number_OF_Doors(_number_of_Doors),
    Friz_Total_NO_Of_Compartments(_total_no_of_compartments),
    Friz_VegetableDrawers(_Vegetable_drawers),
    Friz_Number_OF_Drawers(_number_of_drawers),
    Friz_BottleCount(_bottle_count),

    Friz_Vegetable_Tray_Capacity(
        Vegetable_tray_capacity_value,
        Vegetable_tray_capacity_unit_string),

    Friz_BottleStorage(
        bottle_storage_value,
        bottle_storage_unit_string),

    Friz_Stabilizer_Free_Operation(_Stabilizer_free_operation),

    Friz_ShelfType(_shelf_type),
    Friz_LockType(_lock_type),

    Friz_Interior_OR_StorageDescription(_Interior_or_storage_description),

    Friz_Config(_config),
    Friz_CoolingType(_cooling_type),
    Friz_Inverter(_inverter),
    
    Friz_Special_features(_special_features),
    Friz_Brand_SpecificFeatures(_brand_specific_features),
    Friz_ProductInfo(_product_info),
    
    Friz_EnergyEfficiency(
        energy_efficiency_value,
        energy_efficiency_unit_string),
        
    Friz_EnergyStar(
        energy_star_value, 
        energy_star_unit_string),
            
    Friz_Defrost_System(_defrost_system), 
            
    Friz_Refrigent(_refrigent),
    Friz_Door_Material_Type(_door_material_type),
    Friz_Number_OF_Users(_number_of_users),
    Friz_Number_OF_Racks(_number_of_racks),
    Friz_Ice_Maker_Dispensed_Type(_Ice_maker_dispensed_type),
    Friz_Specification_Met(_specification_met),
    Friz_CoolingMethod(_cooling_method),
    Friz_Door_Orientation(_door_orientation),
    Friz_Certification(_certification),
    Friz_Adjustable_Temperature_Control(_Adjustable_temperature_control),
    Friz_Power_Plug_Type(_Power_plug_type),

    Friz_CECD_Object(
        "",
        _Batteries_included,
        _Batterires_required,
        _finish,
        "",
        "",
        "",
        _installation_type,
        _Form_factor,
        "",
        "",
        {""},
        {""},
        {""},

        0,{""},
        noise_level_value,
        noise_level_unit_string,

        capacity_value,
        capacity_unit_string,

        0,{""},
        0,{""},
        0,{""},
        {""},
        0,{""},
        0,{""},

        annual_energy_consumption_value,
        annual_energy_consumption_unit_string,

        voltage_value, voltage_unit_string,

        0,{""},

        {""},
        {""},
        {""},
        {""},
        {""},
        _material
    ),

    Friz_Additional_Info(
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

void Friger::printing_vector_string(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const Friger& Friz_object){

    int j = 0;

    os << "Refrigerator Details :-" << std::endl << std::endl

    << "Product Name : " << Friz_object.Friz_ProductName << std::endl
    << "Brand Name : " << Friz_object.Friz_BrandName << std::endl << std::endl; 

    std::vector<Variants>::const_iterator Iter = 
    Friz_object.Friz_VariantsObject.begin();

    while(Iter != Friz_object.Friz_VariantsObject.end())
    {
        std::cout << *Iter << std::endl;
        ++Iter;
    }

    os
    << "Capacity : " << Friz_object.Friz_CECD_Object.CECD_Capacity << std::endl
    << "Freezer Capacity : " << Friz_object.Friz_FreezerCapacity << std::endl
    << "Fresh Food Capacity : " << Friz_object.Friz_Fresh_Food_Capacity << std::endl
    << "Number of Shelves : " << Friz_object.Friz_Number_OF_Shelves << std::endl
    << "Number of Doors : " << Friz_object.Friz_Number_OF_Doors << std::endl
    << "Total No of Compartments : " << Friz_object.Friz_Total_NO_Of_Compartments << std::endl
    << "Vegetable Drawers : " << Friz_object.Friz_VegetableDrawers << std::endl
    << "Number of Drawers: " << Friz_object.Friz_Number_OF_Drawers << std::endl
    << "Bottle Count : " << Friz_object.Friz_BottleCount << std::endl
    << "Vegetable Tray Capacity : " << Friz_object.Friz_Vegetable_Tray_Capacity << std::endl
    << "Bottle Storage : " << Friz_object.Friz_BottleStorage << std::endl
    << "Stabilizer Free Operation : " << Friz_object.Friz_Stabilizer_Free_Operation << std::endl
    << "Shelf Type : " << Friz_object.Friz_ShelfType << std::endl
    << "Lock Type : " << Friz_object.Friz_LockType << std::endl
    
    << "Interior or Storage Description : ";
    Friz_object.printing_vector_string(Friz_object.Friz_Interior_OR_StorageDescription);
    os << std::endl

    << "Configuration : " << Friz_object.Friz_Config << std::endl
    << "Cooling Type : " << Friz_object.Friz_CoolingType << std::endl
    << "Finish Type : " << Friz_object.Friz_CECD_Object.CECD_FinishType << std::endl
    << "Inverter : " << Friz_object.Friz_Inverter << std::endl

    << "Material : ";
    Friz_object.printing_vector_string(Friz_object.Friz_CECD_Object.CECD_Material);
    os << std::endl

    << "Special Features : ";
    Friz_object.printing_vector_string(Friz_object.Friz_Special_features);
    os << std::endl

    << "Brand Specific Features : ";
    Friz_object.printing_vector_string(Friz_object.Friz_Brand_SpecificFeatures);
    os << std::endl

    << "Product Info : ";
    Friz_object.printing_vector_string(Friz_object.Friz_ProductInfo);
    os << std::endl

    << "Energy Efficieny : " << Friz_object.Friz_EnergyEfficiency << std::endl
    << "Energy Star : " << Friz_object.Friz_EnergyStar << std::endl
    << "Annual Energy Consumption : " << Friz_object.Friz_CECD_Object.CECD_Annual_Energy_Consumption << std::endl << std::endl
    
    << "Defrost System : " << Friz_object.Friz_Defrost_System << std::endl
    << "Noise Level : " << Friz_object.Friz_CECD_Object.CECD_NoiseLevel << std::endl
    << "Installation Type : " << Friz_object.Friz_CECD_Object.CECD_InstallationType << std::endl
    << "Volatge : " << Friz_object.Friz_CECD_Object.CECD_Voltage << std::endl
    << "Refrigent : " << Friz_object.Friz_Refrigent << std::endl
    << "Door material Type : " << Friz_object.Friz_Door_Material_Type << std::endl
    << "Number of Users : " << Friz_object.Friz_Number_OF_Users << std::endl
    << "Number of Racks : " << Friz_object.Friz_Number_OF_Racks << std::endl
    << "Form Factor : " << Friz_object.Friz_CECD_Object.CECD_Form_Factor << std::endl
    << "Ice Maker Dispensed Type : " << Friz_object.Friz_Ice_Maker_Dispensed_Type << std::endl
    << "Specification Met : " << Friz_object.Friz_Specification_Met << std::endl
    << "Cooling Method : " << Friz_object.Friz_CoolingMethod << std::endl
    << "Door Orientation : " << Friz_object.Friz_Door_Orientation << std::endl
    << "Certification : " << Friz_object.Friz_Certification << std::endl
    << "Adjustable Temperature Control : "  << Friz_object.Friz_Adjustable_Temperature_Control << std::endl
    << "Power Plug Type : " << Friz_object.Friz_Power_Plug_Type << std::endl
    << "Batteries Included : " << Friz_object.Friz_CECD_Object.CECD_BatteriesIncluded << std::endl
    << "Batteries Required : " << Friz_object.Friz_CECD_Object.CECD_BatteriesRequired << std::endl << std::endl

    << "Additional Information    :" << std::endl << std::endl; 
    os << Friz_object.Friz_Additional_Info;

    return os;
}