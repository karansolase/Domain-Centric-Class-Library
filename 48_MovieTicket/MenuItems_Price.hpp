#pragma once

#ifndef FOOD_BEVERAGES_HPP
#define FOOD_BEVERAGES_HPP

#include "Price.hpp"
#include "Measurement_and_unit.hpp"

class FoodBeverages_Item
{
    friend class MovieTicket;
    friend std::ostream& operator<<(std::ostream& os, const FoodBeverages_Item& FB_P_Object);
    private :
    std::string FoodItem_Name;
    Measurement_and_unit FoodItem_Weight;
    double FoodItem_Quantity;

    public :
    FoodBeverages_Item(
        std::string _fooditem_name,
        
        double _foodItem_Weight,
        std::string _foodItem_WeightUnit,

        double _foodItem_Quantity);
};

class Single_Or_Combo_Of_FoodItemsMenu_And_Price
{
    friend std::ostream& operator<<(std::ostream& os, const Single_Or_Combo_Of_FoodItemsMenu_And_Price& Single_Or_Combo_FB_P_Object);
    friend class MovieTicket;
    
    private :
    std::vector<FoodBeverages_Item> FoodBeverages_and_Price_vectorObject;
    FoodBeverages_Item FoodBeverages_and_Price_Object;
    Price Price_Object;

    int Num_For_Constructor;

    public :
    // For Single
    Single_Or_Combo_Of_FoodItemsMenu_And_Price(
        std::string _fooditem_name,

        double _foodItem_Weight,
        std::string _foodItem_WeightUnit,

        double _foodItem_Quantity,
        double _fooditem_price);

    // For Combo
    Single_Or_Combo_Of_FoodItemsMenu_And_Price(
        std::initializer_list<FoodBeverages_Item> _foodbeverages_and_price_vectorObject,
        double Price);
};

#endif /* MenuItems_Price.hpp */