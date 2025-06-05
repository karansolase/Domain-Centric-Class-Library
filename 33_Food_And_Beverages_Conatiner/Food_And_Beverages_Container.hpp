#pragma once 

#ifndef _FOOD_AND_BEVERAGES_CONTAINER_HPP
#define _FOOD_AND_BEVERAGES_CONTAINER_HPP

#include <iostream>
#include "Variants.hpp"
#include "Measurement_and_unit.hpp"
#include "Additional_Info.hpp"
#include <vector>

class Food_And_Beverages_Container
{

    friend std::ostream& operator<<(std::ostream& os, const Food_And_Beverages_Container& F_And_BC_Object);

    private :
    std::string F_And_BC_ProductName; 
    std::string F_And_BC_BrandName;

    std::vector <Variants> F_And_BC_Variants_Object;

    std::string F_And_BC_MoutningType;
    std::string F_And_BC_Pattern; 
    std::string F_And_BC_FinishType; 
    std::string F_And_BC_PackageInformation; 
    std::string F_And_BC_Shape; 
    std::string F_And_BC_HandleMaterial; 
    std::string F_And_BC_BottleType;
    std::string F_And_BC_Closure_Material;
    std::string F_And_BC_Coating_Description;
    std::string F_And_BC_Is_DishWasher_Safe; 
    std::string F_And_BC_Is_Microwaveable; 
    std::string F_And_BC_IsOven_Safe; 
    std::string F_And_BC_Is_Lid; 
    std::string F_And_BC_IsSuitable_For_StoveTop; 
    std::string F_And_BC_Has_NonStick_Coating; 
    std::string F_And_BC_LidMaterial; 
    std::string F_And_BC_ControlMethod; 
    std::string F_And_BC_ControllerType; 
    std::string F_And_BC_Operating_Mode; 
    std::string F_And_BC_Material_TypeFree; 
    std::string F_And_BC_Reusability; 
    std::string F_And_BC_Department; 
    std::string F_And_BC_Age_Range_Description; 
    std::string F_And_BC_Theme; 
    std::string F_And_BC_CapType; 

    unsigned int F_And_BC_Number_Of_Pieces; 
    unsigned int F_And_BC_Number_of_Items; 
    std::string F_And_BC_UPC; 
    std::vector <std::string> F_And_BC_Global_Trade_Identification_Number;

    Measurement_and_unit F_And_BC_Capacity; 
    Measurement_and_unit F_And_BC_BaseDiameter; 
    Measurement_and_unit F_And_BC_Wattage; 

    std::vector <std::string> F_And_BC_Occassion; 
    std::vector <std::string> F_And_BC_Compatibility_Options; 
    std::vector <std::string> F_And_BC_SpecialFeatures; 
    std::vector <std::string> F_And_BC_Material; 
    std::vector <std::string> F_And_BC_Recommended_Uses_For_Product; 

    std::vector <std::string> F_And_BC_About_This_Item;
    std::vector <std::string> F_And_BC_Product_Description;
    std::vector <std::string> F_And_BC_legal_Disclaimer;  
    std::vector <std::string> F_And_BC_From_Brand; 

    Additional_Info F_And_BC_Additional_Info;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :

    Food_And_Beverages_Container(
        std::string ProductName,
        std::string BrandName,

        std::initializer_list <Variants> VariantsObject,

        std::string MountingType,
        std::string Pattern,
        std::string FinishType,
        std::string PackageInfo,
        std::string Shape,
        std::string HandleMaterial,
        std::string BottleType,
        std::string Closure_Material,
        std::string Coating_Description,
        std::string Is_Diswasher_Safe,
        std::string Is_Microwaveable,
        std::string IsOven_Safe,
        std::string Is_Lid,
        std::string IsSuitable_For_StoveTop,
        std::string Has_NonStick_Coating,
        std::string LidMaterial,
        std::string ControlMethod,
        std::string ControllerType,
        std::string OperatingMode,
        std::string Material_TypeFree,
        std::string Reusability,
        std::string Department,
        std::string Age_Range_Description,
        std::string Theme,
        std::string CapType,

        unsigned int Number_OF_Pieces,
        unsigned int Number_Of_Items,
        std::string _UPC,
        std::initializer_list <std::string> Global_Trade_Identificatio_No,

        double Capacity_Value,
        std::initializer_list <std::string> Capacity_Unit_and_String,

        double BaseDiameter_Value,
        std::initializer_list <std::string> BaseDiameter_Unit_And_String,

        double Wattage_Value,
        std::initializer_list <std::string> Wattage_Unit_and_String,

        std::initializer_list <std::string> Ocassion,
        std::initializer_list <std::string> Compatibility_Options,
        std::initializer_list <std::string> SpecialFeatures,
        std::initializer_list <std::string> Material,
        std::initializer_list <std::string> Recommended_Uses_For_Product,

        std::initializer_list <std::string> About_This_Item,
        std::initializer_list <std::string> Product_Description,
        std::initializer_list <std::string> Legal_Disclaimer,
        std::initializer_list <std::string> From_Brand,

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
    );
};

#endif /* Food_And_Beverages_Container.hpp */
