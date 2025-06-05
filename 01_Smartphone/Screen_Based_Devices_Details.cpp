#include "Screen_Based_Devices_Details.hpp"

Screen_Based_Device_Details::Screen_Based_Device_Details
(
    double Display_Size_Value, 
    std::initializer_list <std::string> DisplaySize_Unit_and_String,

    double RefreshRate_Value,
    std::initializer_list <std::string> RefreshRate_unit_or_string,

    Measurement_and_unit _aspect_ratio,

    double brightness_value,
    std::initializer_list <std::string> brightnessvalue_unit_or_string,

    double response_time_value,
    std::initializer_list <std::string> response_time_value_unit_or_string,

    double Voltage_Value, 
    std::initializer_list <std::string> Voltage_Unit_And_String,

    double ChargingTime_Value, 
    std::initializer_list <std::string> ChargingTime_Unit_And_String,

    double BatteryLife_OR_Capacity_Value, 
    std::initializer_list <std::string> BatteryLife_OR_Capacity_Unit_And_String,

    Measurement_and_unit _Resolution,

    double Memory_Storage_Capacity_Value, 
    std::initializer_list <std::string> Memory_Storage_Capacity_Unit_And_String,

    std::string CPU_Model,
    Word_Number OperatingSystem,
    std::string Battery_Cell_Composition,
    std::string FormFactor,
    Word_Number Processor,
    std::string WaterResistant,
    
    std::initializer_list <std::string> Connectivity_Technlogies,
    std::initializer_list <std::string> MountingType,
    std::initializer_list <std::string> WirlessType,
    std::initializer_list <std::string> Hardware_Interface,
    std::initializer_list <std::string> CompatibleDevices
)
:   SBDD_DisplaySize(
        Display_Size_Value,
        DisplaySize_Unit_and_String),

    SBDD_RefreshRate(
        RefreshRate_Value,
        RefreshRate_unit_or_string),

    SBDD_AspectRatio(_aspect_ratio),

    SBDD_Brightness(
        brightness_value,
        brightnessvalue_unit_or_string),

    SBDD_ResponseTime(
        response_time_value,
        response_time_value_unit_or_string),
    
    SBDD_Voltage(
        Voltage_Value,
        Voltage_Unit_And_String),

    SBDD_ChargingTime(
        ChargingTime_Value,
        ChargingTime_Unit_And_String),

    SBDD_BatteryLife_OR_Capacity(
        BatteryLife_OR_Capacity_Value,
        BatteryLife_OR_Capacity_Unit_And_String),

    SBDD_Resolution(_Resolution),

    Memory_Storage_Capacity(
        Memory_Storage_Capacity_Value,
        Memory_Storage_Capacity_Unit_And_String),

    SBDD_CPU_Model(CPU_Model),
    SBDD_OperatingSystem(OperatingSystem),
    SBDD_MountingType(MountingType),
    SBDD_Battery_Cell_Composition(Battery_Cell_Composition),
    SBDD_FormFactor(FormFactor),
    SBDD_Processor(Processor),
    SBDD_WaterResistant(WaterResistant),

    SBDD_Connectivity_Technlogies(Connectivity_Technlogies),
    SBDD_WirlessType(WirlessType),
    SBDD_Hardware_Interface(Hardware_Interface),
    SBDD_CompatibleDevices(CompatibleDevices)
{
}