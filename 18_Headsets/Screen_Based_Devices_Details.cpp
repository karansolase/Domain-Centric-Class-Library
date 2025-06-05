#include "Screen_Based_Devices_Details.hpp"

Screen_Based_Device_Details::Screen_Based_Device_Details
(
    double Display_Size_Value, 
    std::initializer_list <std::string> DisplaySize_Unit_and_String,

    double RefreshRate_Value, 
    std::initializer_list <std::string> RefreshRate_Unit_And_String,

    std::string Apsect_Ratio_String_1,
    double Aspect_Ratio_First_Value,
    std::string Aspect_Ratio_Symbol,
    double Aspect_Ratio_Second_Value,
    std::string Aspect_Ratio_String_2,

    double Brightness_Value, 
    std::initializer_list <std::string> Brightness_Unit_And_String,

    double ResponseTime_Value, 
    std::initializer_list <std::string> ResponseTime_Unit_And_String,

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
        RefreshRate_Unit_And_String),

    SBDD_AspectRatio(
        Apsect_Ratio_String_1,
        Aspect_Ratio_First_Value,
        Aspect_Ratio_Symbol,
        Aspect_Ratio_Second_Value,
        Aspect_Ratio_String_2),

    SBDD_Brightness(
        Brightness_Value,
        Brightness_Unit_And_String),

    SBDD_ResponseTime(
        ResponseTime_Value,
        ResponseTime_Unit_And_String),

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