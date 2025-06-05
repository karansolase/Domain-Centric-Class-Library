#pragma once 

#ifndef _GENERAL_FURNITURE_DETAILS_HPP
#define _GENERAL_FURNITURE_DETAILS_HPP

#include <iostream>
#include "Measurement_and_unit.hpp"
#include <vector>

class General_Furniture_Details
{
    public  :
    std::string GFD_BackStyle;
    std::string GFD_FinishType;
    std::string GFD_Shape;
    std::string GFD_publisherCode;
    std::string GFD_FurnitureFinish;
    std::string GFD_InstallationType;
    std::string GFD_Is_Customizable;
    std::string GFD_TopMaterial;
    std::string GFD_TYpeOFWood;
    std::string GFD_Assembly_Required;
    std::string GFD_FrameMaterial;
    std::string GFD_AssemblyType;
    std::string GFD_StorageAvailability;
    std::string GFD_FootBoard_Upholstery;
    std::string GFD_AgRangeDescription;
    std::string GFD_Theme;
    std::string GFD_UpholsteryMaterial;
    std::string GFD_ItemFirmnessDescription;

    unsigned int GFD_NumberOfShelves;
    unsigned int GFD_NumberOfPieces;

    Measurement_and_unit GFD_ShippingWeight;
    Measurement_and_unit GFD_SeatDepth;
    Measurement_and_unit GFD_SeatHeight;
    Measurement_and_unit GFD_SeatBack_InteriorHeight;

    std::vector <std::string> GFD_Material;
    std::vector <std::string> GFD_RoomType;
    std::vector <std::string> GFD_MattressComfort;
    std::vector <std::string> GFD_PrimaryMaterial;

    General_Furniture_Details(
    std::string BackStyle,
    std::string FinishType,
    std::string Shape,
    std::string publisherCode,
    std::string FurnitureFinish,
    std::string InstallationType,
    std::string Is_Customizable,
    std::string TopMaterial,
    std::string TYpeOFWood,
    std::string Assembly_Required,
    std::string FrameMaterial,
    std::string AssemblyType,
    std::string StorageAvailability,
    std::string FootBoard_Upholstery,
    std::string AgRangeDescription,
    std::string Theme,
    std::string UpholsteryMaterial,
    std::string ItemFirmnessDescription,

    unsigned int NumberOfShelves,
    unsigned int NumberOfPieces,

    double ShippingWeight_Value, 
    std::initializer_list <std::string> ShippingWeight_UnitAndString,

    double SeatDepth_Value, 
    std::initializer_list <std::string> SeatDepth_UnitAndString,

    double SeatHeight_Value, 
    std::initializer_list <std::string> SeatHeight_UnitAndString,
    
    double SeatBack_InteriorHeight_Value, 
    std::initializer_list <std::string> SeatBack_InteriorHeight_UnitAndString,

    std::vector <std::string> Material,
    std::vector <std::string> RoomType,
    std::vector <std::string> MattressComfort,
    std::vector <std::string> PrimaryMaterial
    );
};

#endif /* General_Furniture_Details.hpp */