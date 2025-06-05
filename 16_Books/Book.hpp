#pragma once

#ifndef _BOOK_HPP
#define _BOOK_HPP

#include <iostream>
#include <vector>
#include "Additional_Info.hpp"
#include "Variants.hpp"
#include "Measurement_and_unit.hpp"

class BooK{

    friend std::ostream& operator<<(std::ostream& os, const BooK& BOOk_object);

    private :
    // General Information :
        std::string BK_BookName;

        Variants BK_BookFormat_withPrices;

        std::vector <std::string> BK_AuthorName;
        std::vector <std::string> BK_BookDescription;
        std::vector <std::string> BK_PopularHighlights_InThisbook; 
        std::vector <std::string> BK_Editorial_Reviews;
        std::vector <std::string> BK_AboutAuthors;
        std::vector <std::string> BK_Language;
        std::string BK_Part_OF_Series;
        
    // Product Information :
        std::string BK_Publisher;
        Measurement_and_unit BK_FileSize; 
        std::string BK_Text_TO_Text_Speech; 
        std::string BK_ScreenRecorder;
        std::string BK_EnhancedTypesetting; 
        std::string BK_X_Ray; 
        std::string BK_WordWise; 
        std::string BK_PageFlip; // 
        Measurement_and_unit BK_Paperback;
        unsigned int BK_ISBN_10;
        
        std::string BK_ISBN_13_string_1;
        unsigned long long int BK_ISBN_13_First_Value;
        unsigned long long int BK_ISBN_13_Second_Value;
        std::string BK_ISBN_13_Symbol;
        std::string BK_ISBN_13_String_2;
        
         Measurement_and_unit BK_Reading_Age;

    // Additional Information :
        Additional_Info  BK_Additional_Info_Object;

    void printing_vector_string(std::vector <std::string> string_vector_object) const;

    public :
    BooK(
        std::string _book_name,

        Variants _book_format_with_prices,

        std::initializer_list <std::string> _author_name,
        std::initializer_list <std::string> _book_description,
        std::initializer_list <std::string> _Popular_highlights_in_this_book,
        std::initializer_list <std::string> _editorial_reviews,
        std::initializer_list <std::string> _about_authors,
        std::initializer_list <std::string> _language,
        std::string _Part_of_Series,
        
        std::string _publisher,

        double File_size_value,
        std::initializer_list <std::string> File_size_unit_string,

        std::string _text_to_text_speech, 
        std::string _screen_recorder,
        std::string _enhanced_typesetting,
        std::string _X_Ray,
        std::string _Page_flip, 
        std::string _Word_wise, 

        double paperback_value,
        std::initializer_list <std::string> paperback_unit_string,
        
        unsigned int long long _ISBN_10, 

        std::string ISBN_13_string_1,
        unsigned long long int ISBN_13_first_value,
        unsigned long long int ISBN_13_Second_value,
        std::string ISBN_13_symbol,
        std::string ISBN_13_string_2,

        Measurement_and_unit _reading_age,
        
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

#endif