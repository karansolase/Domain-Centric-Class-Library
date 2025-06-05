#include "Food_And_Beverages_Container.hpp"

Food_And_Beverages_Container::Food_And_Beverages_Container
(
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

    std::initializer_list <std::string> _Generic_name)    :

    F_And_BC_ProductName(ProductName), 
    F_And_BC_BrandName(BrandName), 

    F_And_BC_Variants_Object(VariantsObject),

    F_And_BC_MoutningType(MountingType),
    F_And_BC_Pattern(Pattern), 
    F_And_BC_FinishType(FinishType), 
    F_And_BC_PackageInformation(PackageInfo),
    F_And_BC_Shape(Shape), 
    F_And_BC_HandleMaterial(HandleMaterial),
    F_And_BC_BottleType(BottleType), 
    F_And_BC_Closure_Material(Closure_Material), 
    F_And_BC_Coating_Description(Coating_Description),  
    F_And_BC_Is_DishWasher_Safe(Is_Diswasher_Safe),
    F_And_BC_Is_Microwaveable(Is_Microwaveable), 
    F_And_BC_IsOven_Safe(IsOven_Safe), 
    F_And_BC_Is_Lid(Is_Lid),
    F_And_BC_IsSuitable_For_StoveTop(IsSuitable_For_StoveTop), 
    F_And_BC_Has_NonStick_Coating(Has_NonStick_Coating), 
    F_And_BC_LidMaterial(LidMaterial), 
    F_And_BC_ControlMethod(ControlMethod),
    F_And_BC_ControllerType(ControllerType), 
    F_And_BC_Operating_Mode(OperatingMode), 
    F_And_BC_Material_TypeFree(Material_TypeFree), 
    F_And_BC_Reusability(Reusability), 
    F_And_BC_Department(Department), 
    F_And_BC_Age_Range_Description(Age_Range_Description), 
    F_And_BC_Theme(Theme), 
    F_And_BC_CapType(CapType),

    F_And_BC_Number_Of_Pieces(Number_OF_Pieces), 
    F_And_BC_Number_of_Items(Number_Of_Items), 
    F_And_BC_UPC(_UPC), 
    F_And_BC_Global_Trade_Identification_Number(Global_Trade_Identificatio_No),

    F_And_BC_Capacity(
        Capacity_Value,
        Capacity_Unit_and_String),

    F_And_BC_BaseDiameter(
        BaseDiameter_Value,
        BaseDiameter_Unit_And_String),

    F_And_BC_Wattage(
        Wattage_Value,
        Wattage_Unit_and_String), 

    F_And_BC_Occassion(Ocassion), 
    F_And_BC_Compatibility_Options(Compatibility_Options), 
    F_And_BC_SpecialFeatures(SpecialFeatures), 
    F_And_BC_Material(Material), 
    F_And_BC_Recommended_Uses_For_Product(Recommended_Uses_For_Product), 

    F_And_BC_About_This_Item(About_This_Item),
    F_And_BC_Product_Description(Product_Description),
    F_And_BC_legal_Disclaimer(Legal_Disclaimer),  
    F_And_BC_From_Brand(From_Brand),

    F_And_BC_Additional_Info(
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

void Food_And_Beverages_Container::printing_vector_string(std::vector <std::string> string_vector_object) const{
    int j = 0;
    for(const std::string i : string_vector_object)
    {
        j = j + 1;
        if(i == "" && j == 1){
            std::cout << std::endl;
            break;
        }

        std::cout << j << ") "  << i << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Food_And_Beverages_Container& F_And_BC_Object)
{
    os << "PRODUCT DETAILS   :    " << std::endl << std::endl

    << "Product Name : " << F_And_BC_Object.F_And_BC_ProductName << std::endl
    << "Brand Name : " << F_And_BC_Object.F_And_BC_BrandName << std::endl << std::endl;

    int j = 0;
    for(const Variants i : F_And_BC_Object.F_And_BC_Variants_Object)
    {
        os << i << std::endl;
    }

    std::vector<Variants>::const_iterator Iter_1 = 
    F_And_BC_Object.F_And_BC_Variants_Object.begin();

    while(Iter_1 != F_And_BC_Object.F_And_BC_Variants_Object.end())
    {
        std::cout << *Iter_1 << std::endl;
        ++Iter_1;
    }
    os << std::endl

    << "Mounting Tyoe : " << F_And_BC_Object.F_And_BC_MoutningType << std::endl
    << "Pattern : " << F_And_BC_Object.F_And_BC_Pattern << std::endl
    << "Finish Type : " << F_And_BC_Object.F_And_BC_FinishType << std::endl
    << "Package Information : " << F_And_BC_Object.F_And_BC_PackageInformation << std::endl
    << "Shape : " << F_And_BC_Object.F_And_BC_Shape << std::endl
    << "Handle Material : " << F_And_BC_Object.F_And_BC_HandleMaterial << std::endl
    << "Bottle Type : " << F_And_BC_Object.F_And_BC_BottleType << std::endl
    << "Closure Material : " << F_And_BC_Object.F_And_BC_Closure_Material << std::endl
    << "Coating Description : " << F_And_BC_Object.F_And_BC_Coating_Description << std::endl
    << "Is Dishwasher Safe ? : " << F_And_BC_Object.F_And_BC_Is_DishWasher_Safe << std::endl
    << "Is Microwaveable ? : " << F_And_BC_Object.F_And_BC_Is_Microwaveable << std::endl
    << "Is Oven Safe ? : "  << F_And_BC_Object.F_And_BC_IsOven_Safe << std::endl
    << "Is Lid ? : " << F_And_BC_Object.F_And_BC_Is_Lid << std::endl
    << "Is Suitable For StoveTop ? : " << F_And_BC_Object.F_And_BC_IsSuitable_For_StoveTop << std::endl
    << "Has NonStick Coating ? :  " << F_And_BC_Object.F_And_BC_Has_NonStick_Coating << std::endl
    << "Lid Material : " << F_And_BC_Object.F_And_BC_LidMaterial << std::endl  
    << "Control Method : " << F_And_BC_Object.F_And_BC_ControlMethod << std::endl
    << "Controller Type : " << F_And_BC_Object.F_And_BC_ControllerType << std::endl
    << "Operating Mode : " << F_And_BC_Object.F_And_BC_Operating_Mode << std::endl
    << "Material Type Free : " << F_And_BC_Object.F_And_BC_Material_TypeFree << std::endl
    << "Reusability : " << F_And_BC_Object.F_And_BC_Reusability << std::endl
    << "Department : " << F_And_BC_Object.F_And_BC_Department << std::endl
    << "Age Range Description : " << F_And_BC_Object.F_And_BC_Age_Range_Description << std::endl
    << "Theme : " << F_And_BC_Object.F_And_BC_Theme << std::endl
    << "CapType : " << F_And_BC_Object.F_And_BC_CapType << std::endl << std::endl

    << "Number Of Pieces : " << F_And_BC_Object.F_And_BC_Number_Of_Pieces << std::endl
    << "Number of Items : " << F_And_BC_Object.F_And_BC_Number_of_Items << std::endl
    << "UPC : " << F_And_BC_Object.F_And_BC_UPC << std::endl
    
    << "Global Trade Identification Number : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_Global_Trade_Identification_Number);
    os << std::endl

    << "Capacity : " << F_And_BC_Object.F_And_BC_Capacity << std::endl
    << "Base Diameter : " << F_And_BC_Object.F_And_BC_BaseDiameter << std::endl
    << "Wattage : " << F_And_BC_Object.F_And_BC_Wattage << std::endl << std::endl

    << "Ocassion : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_Occassion);
    os << std::endl
    
    << "Compatibility Options : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_Compatibility_Options);
    os << std::endl
    
    << "Special Features : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_SpecialFeatures);
    os << std::endl
    
    << "Material : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_Material);
    os << std::endl
    
    << "Recommended Uses FOr Product : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_Recommended_Uses_For_Product);
    os << std::endl

    << "About THis Item : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_About_This_Item);
    os << std::endl
    
    << "Product Description : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_Product_Description);
    os << std::endl
    
    << "Legal Disclaimer : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_legal_Disclaimer);
    os << std::endl
    
    << "From Brand : ";
    F_And_BC_Object.printing_vector_string(F_And_BC_Object.F_And_BC_From_Brand);
    os << std::endl 

    << "Additional Information : " << std::endl << std::endl
    << F_And_BC_Object.F_And_BC_Additional_Info;

    return os;
} 

