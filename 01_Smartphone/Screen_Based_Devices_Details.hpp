#pragma once

#ifndef _SCREEN_BASED_DEVICES_COMMON_DETAILS_HPP
#define _SCREEN_BASED_DEVICES_COMMON_DETAILS_HPP

#include "Measurement_and_unit.hpp"
#include <vector>
#include "word_number.hpp"

class SmartPhone;

class Screen_Based_Device_Details{

    friend std::ostream& operator<<(std::ostream& os, const SmartPhone& SMRT_PHN_Object);

    private :
    Measurement_and_unit SBDD_DisplaySize;
    Measurement_and_unit SBDD_RefreshRate;
    Measurement_and_unit SBDD_AspectRatio;
    Measurement_and_unit SBDD_Brightness;
    Measurement_and_unit SBDD_ResponseTime;
    Measurement_and_unit SBDD_Voltage;
    Measurement_and_unit SBDD_ChargingTime;
    Measurement_and_unit SBDD_BatteryLife_OR_Capacity;
    Measurement_and_unit SBDD_Resolution;
    Measurement_and_unit Memory_Storage_Capacity;

    std::string SBDD_CPU_Model;
    Word_Number SBDD_OperatingSystem;
    std::string SBDD_Battery_Cell_Composition;
    std::string SBDD_FormFactor;
    Word_Number SBDD_Processor;
    std::string SBDD_WaterResistant;
    
    std::vector <std::string> SBDD_Connectivity_Technlogies;
    std::vector <std::string> SBDD_MountingType;
    std::vector <std::string> SBDD_WirlessType;
    std::vector <std::string> SBDD_Hardware_Interface;
    std::vector <std::string> SBDD_CompatibleDevices;

    public : 

    Screen_Based_Device_Details(
    
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
    );
};

#endif
