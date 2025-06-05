#include "MenuItems_Price.hpp"

FoodBeverages_Item::FoodBeverages_Item(
    std::string _fooditem_name,
    double _foodItem_Weight,
    std::string _foodItem_WeightUnit,
    double _foodItem_Quantity)   :

    FoodItem_Name(_fooditem_name),
    
    FoodItem_Weight(
        _foodItem_Weight,
        _foodItem_WeightUnit),

    FoodItem_Quantity(_foodItem_Quantity)
{
}

std::ostream& operator<<(std::ostream& os, const FoodBeverages_Item& FB_P_Object)
{
    os 
    << FB_P_Object.FoodItem_Name 
    << " "
    << FB_P_Object.FoodItem_Weight
    << " (QT"
    << FB_P_Object.FoodItem_Quantity
    << ")";
    
    return os;
}

Single_Or_Combo_Of_FoodItemsMenu_And_Price::Single_Or_Combo_Of_FoodItemsMenu_And_Price(
    std::string _fooditem_name,
    
    double _foodItem_Weight,
    std::string _foodItem_WeightUnit,

    double _foodItem_Quantity,
    double _fooditem_price)   :

    FoodBeverages_and_Price_Object(
        _fooditem_name,
    
        _foodItem_Weight,
        _foodItem_WeightUnit,

        _foodItem_Quantity),

    Price_Object("Rs", _fooditem_price)
{
    Num_For_Constructor = 1;
}

Single_Or_Combo_Of_FoodItemsMenu_And_Price::Single_Or_Combo_Of_FoodItemsMenu_And_Price
    (std::initializer_list<FoodBeverages_Item> _foodbeverages_and_price_vectorObject,
    double Price)  :
    FoodBeverages_and_Price_vectorObject(_foodbeverages_and_price_vectorObject),
    Price_Object("Rs", Price),
    FoodBeverages_and_Price_Object("", 0,"", 0)
{
    Num_For_Constructor = 2;
}

std::ostream& operator<<(std::ostream& os, const Single_Or_Combo_Of_FoodItemsMenu_And_Price& Single_Or_Combo_FB_P_Object)
{
    if(Single_Or_Combo_FB_P_Object.Num_For_Constructor == 1)
    {
        os 
        << Single_Or_Combo_FB_P_Object.FoodBeverages_and_Price_Object
        << " | "
        << Single_Or_Combo_FB_P_Object.Price_Object;
    }
    else if(Single_Or_Combo_FB_P_Object.Num_For_Constructor == 2)
    {
        std::vector<FoodBeverages_Item>::const_iterator Iter = 
        Single_Or_Combo_FB_P_Object.FoodBeverages_and_Price_vectorObject.begin();

        while(Iter != Single_Or_Combo_FB_P_Object.FoodBeverages_and_Price_vectorObject.end())
        {
            if(Iter == std::prev(Single_Or_Combo_FB_P_Object.FoodBeverages_and_Price_vectorObject.end()))
            {
                os << *Iter;
            }
            else
            {
                os << *Iter << " + ";
            }
            ++Iter;
        }
        os << " | " << Single_Or_Combo_FB_P_Object.Price_Object;
    }

    return os;
}


