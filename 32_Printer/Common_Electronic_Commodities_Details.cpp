#include "Common_Electronic_Commodities_Details.hpp"

Common_Electronic_Commodities_Details::Common_Electronic_Commodities_Details
(
    std::string Control_type_or_console,
    std::string Batteries_Included,
    std::string Batteries_required,
    std::string Finish_type,
    std::string Connector_type,
    std::string power_Source,
    std::string Includes_rechargeable_battery,
    std::string installation_type,
    std::string form_factor,
    std::string Battery_cell_composition,
    std::string Water_Resistant,
    std::string Human_Interface_Input,
    Word_Number Processor,
    std::initializer_list <Word_Number> OperatingSystem,
    Word_Number CPU_Model,

    double DisplaySize_Value,
    std::initializer_list <std::string> DisplaySize_Unit_and_String,

    double Noise_Level_Value,
    std::initializer_list <std::string> Noise_Level_Unit_and_String,

    double Capacity_Value, 
    std::initializer_list <std::string> Capacity_Unit_and_String,
    
    double BatteryLife_Value, 
    std::initializer_list <std::string> BatteryLife_Unit_and_String,
    
    double BatteryCapacity_Value, 
    std::initializer_list <std::string> BatteryCapacity_Unit_and_String,

    double ChargingTime_Value,
    std::initializer_list <std::string> ChargingTime_Unit_And_String,

    Measurement_and_unit _Resolution,
    
    double PowerConumptions_Value, 
    std::initializer_list <std::string> PowerConumptions_Unit_and_String,

    double Memory_Storage_Capacity_Value,
    std::initializer_list <std::string> Memory_Storage_Capacity_Unit_and_String,
    
    double Annual_Energy_Consumption_Value, 
    std::initializer_list <std::string> Annual_Energy_Consumption_Unit_and_String,
    
    double Voltage_Value, 
    std::initializer_list <std::string> Voltage_Unit_and_String,
    
    double Wattage_Value, 
    std::initializer_list <std::string> Wattage_Unit_and_String,

    std::initializer_list <std::string> _connectivity_Technologies,
    std::initializer_list <std::string> _Mounting_type,
    std::initializer_list <std::string> _Wireless_type,
    std::initializer_list <Word_Number> _hardware_interface,
    std::initializer_list <std::string> _compatible_devices,
    std::initializer_list <std::string> _material 
)
:    CECD_Control_Type_OR_Console(Control_type_or_console),
     CECD_BatteriesIncluded(Batteries_Included),
     CECD_BatteriesRequired(Batteries_required),
     CECD_FinishType(Finish_type),
     CECD_ConnectorType(Connector_type),
     CECD_PowerSource(power_Source),
     CECD_Includes_Rechargeable_Battery(Includes_rechargeable_battery),
     CECD_InstallationType(installation_type),
     CECD_Form_Factor(form_factor),
     CECD_Battery_Cell_Composition(Battery_cell_composition),
     CECD_WaterResistant(Water_Resistant),
     CECD_Human_Interface_Input(Human_Interface_Input),
     CECD_Processor(Processor),
     CECD_OperatingSystem(OperatingSystem),
     CECD_CPU_Model(CPU_Model),

     CECD_DisplaySize(
        DisplaySize_Value,
        DisplaySize_Unit_and_String),

    CECD_NoiseLevel(
        Noise_Level_Value,
        Noise_Level_Unit_and_String),
    
    CECD_Capacity(
        Capacity_Value,
        Capacity_Unit_and_String),
    
    CECD_BatteryLife(
        BatteryLife_Value,
        BatteryLife_Unit_and_String),
    
    CECD_BatteryCapacity(
        BatteryCapacity_Value,
        BatteryCapacity_Unit_and_String),

    CECD_ChargingTime(
        ChargingTime_Value,
        ChargingTime_Unit_And_String),

    CECD_Resolution(_Resolution),
    
    CECD_PowerConumptions(
        PowerConumptions_Value,
        PowerConumptions_Unit_and_String),

    CECD_Memory_Storage_Capacity(
        Memory_Storage_Capacity_Value,
        Memory_Storage_Capacity_Unit_and_String),
    
    CECD_Annual_Energy_Consumption(
        Annual_Energy_Consumption_Value,
        Annual_Energy_Consumption_Unit_and_String),
    
    CECD_Voltage(
        Voltage_Value,
        Voltage_Unit_and_String),
    
    CECD_Wattage(
        Wattage_Value,
        Wattage_Unit_and_String),

     CECD_Connectivity_Technologies(_connectivity_Technologies),
     CECD_MountingType(_Mounting_type),
     CECD_WirelessType(_Wireless_type),
     CECD_HardwareInterface(_hardware_interface),
     CECD_CompatibleDevices(_compatible_devices),
     CECD_Material(_material)
{
}