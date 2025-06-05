#include "General_Furniture_Details.hpp"

General_Furniture_Details::General_Furniture_Details(
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
)    
:   GFD_BackStyle(BackStyle),
    GFD_FinishType(FinishType),
    GFD_Shape(Shape),
    GFD_publisherCode(publisherCode),
    GFD_FurnitureFinish(FurnitureFinish),
    GFD_InstallationType(InstallationType),
    GFD_Is_Customizable(Is_Customizable),
    GFD_TopMaterial(TopMaterial),
    GFD_TYpeOFWood(TYpeOFWood),
    GFD_Assembly_Required(Assembly_Required),
    GFD_FrameMaterial(FrameMaterial),
    GFD_AssemblyType(AssemblyType),
    GFD_StorageAvailability(StorageAvailability),
    GFD_FootBoard_Upholstery(FootBoard_Upholstery),
    GFD_AgRangeDescription(AgRangeDescription),
    GFD_Theme(Theme),
    GFD_UpholsteryMaterial(UpholsteryMaterial),
    GFD_ItemFirmnessDescription(ItemFirmnessDescription),

    GFD_NumberOfShelves(NumberOfShelves),
    GFD_NumberOfPieces(NumberOfPieces),

    GFD_ShippingWeight(
        ShippingWeight_Value,
        ShippingWeight_UnitAndString),

    GFD_SeatDepth(
        SeatDepth_Value,
        SeatDepth_UnitAndString),

    GFD_SeatHeight(
        SeatHeight_Value,
        SeatHeight_UnitAndString),

    GFD_SeatBack_InteriorHeight(
        SeatBack_InteriorHeight_Value,
        SeatBack_InteriorHeight_UnitAndString),

    GFD_Material(Material),
    GFD_RoomType(RoomType),
    GFD_MattressComfort(MattressComfort),
    GFD_PrimaryMaterial(PrimaryMaterial)
{

}