#pragma once 

#ifndef _ELECTRONICS_DETAILS_HPP
#define _ELECTRONICS_DETAILS_HPP

#include "Measurement_and_unit.hpp"
#include "word_number.hpp"
#include <iostream>

class Laptop;

class Common_Electronic_Commodities_Details
{

    friend std::ostream& operator<<(std::ostream& os, const Laptop& LPTP_Object);

    private :
    std::string CECD_Control_Type_OR_Console;
    std::string CECD_BatteriesIncluded;
    std::string CECD_BatteriesRequired;
    std::string CECD_FinishType;
    std::string CECD_ConnectorType;
    std::string CECD_PowerSource;
    std::string CECD_Includes_Rechargeable_Battery;
    std::string CECD_InstallationType;
    std::string CECD_Form_Factor;
    std::string CECD_Battery_Cell_Composition;
    std::string CECD_WaterResistant;
    Word_Number CECD_Processor; 
    Word_Number CECD_OperatingSystem;
    Word_Number CECD_CPU_Model;

    Measurement_and_unit CECD_DisplaySize;
    Measurement_and_unit CECD_NoiseLevel;
    Measurement_and_unit CECD_Capacity;
    Measurement_and_unit CECD_BatteryLife;
    Measurement_and_unit CECD_BatteryCapacity;
    Measurement_and_unit CECD_ChargingTime;
    Measurement_and_unit CECD_Resolution;
    Measurement_and_unit CECD_PowerConumptions;
    Measurement_and_unit CECD_Memory_Storage_Capacity;
    Measurement_and_unit CECD_Annual_Energy_Consumption;
    Measurement_and_unit CECD_Voltage;
    Measurement_and_unit CECD_Wattage;

    std::vector <std::string> CECD_Connectivity_Technologies;
    std::vector <std::string> CECD_MountingType;
    std::vector <std::string> CECD_WirelessType;
    std::vector <std::string> CECD_HardwareInterface;
    std::vector <std::string> CECD_CompatibleDevices;
    std::vector <std::string> CECD_Material; 

    public :
    Common_Electronic_Commodities_Details(
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
        Word_Number Processor,
        Word_Number OperatingSystem,
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
        std::initializer_list <std::string> _hardware_interface,
        std::initializer_list <std::string> _compatible_devices,
        std::initializer_list <std::string> _material 
    );
};

#endif