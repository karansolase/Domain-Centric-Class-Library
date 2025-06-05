#pragma once

#ifndef _ADDITIONAL_INFO_HPP_
#define _ADDITIONAL_INFO_HPP_

#include <iostream>
#include "Contact_Details.hpp"
#include "Reviews.hpp"
#include "Date.hpp"
#include "Name.hpp"
#include <vector>

class Additional_Info{

    friend std::ostream& operator<<(std::ostream& os, const Additional_Info& Additional_Info_Object);

    private :
       std::string Add_Info_ASIN;
       std::string Add_Info_Country_Of_Origin;
       std::string Add_Info_Model_Number;

       Name_Address_Email_No Add_Info_Manufacturing_Object;
       Name_Address_Email_No Add_Info_Packer_Object;
       Name_Address_Email_No Add_Info_Importer_Object;
       
       Date Add_Info_Manufacturing_Year;
       Date Add_Info_Date_First_Available;
       
       Reviews Add_Info_Reviews_Object;
       
       std::vector <std::string> Add_Info_Best_Seller_Rank;
       std::vector <std::string> Add_Info_Included_Components;
       std::vector <std::string> Add_Info_Generic_Name;
       
       Measurement_and_unit Add_Info_Item_Dimensions;
       Measurement_and_unit Add_Info_Product_Dimensions;
       Measurement_and_unit Add_Info_Weight_Object;
       Measurement_and_unit Add_Info_Net_Quantity;
       
       std::vector <Measurement_and_unit> Add_Info_Warranty;
       
       void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    Additional_Info(
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

#endif /* Additional_Info.hpp */