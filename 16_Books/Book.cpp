#include "book.hpp"

BooK::BooK(
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

)
:   BK_BookName(_book_name),
    
    BK_BookFormat_withPrices(_book_format_with_prices),

    BK_AuthorName(_author_name),
    BK_BookDescription(_book_description),
    BK_PopularHighlights_InThisbook(_Popular_highlights_in_this_book),
    BK_Editorial_Reviews(_editorial_reviews),
    BK_AboutAuthors(_about_authors),
    BK_Language(_language),
    BK_Part_OF_Series(_Part_of_Series),
        
    BK_Publisher(_publisher),

    BK_FileSize(
        File_size_value,
        File_size_unit_string),

    BK_Text_TO_Text_Speech(_text_to_text_speech),
    BK_ScreenRecorder(_screen_recorder),
    BK_EnhancedTypesetting(_enhanced_typesetting),
    BK_X_Ray(_X_Ray),
    BK_PageFlip(_Page_flip),
    BK_WordWise(_Word_wise),

    BK_Paperback(
        paperback_value,
        paperback_unit_string),
    
    BK_ISBN_10(_ISBN_10),

    BK_ISBN_13_string_1(ISBN_13_string_1),
    BK_ISBN_13_First_Value(ISBN_13_first_value),
    BK_ISBN_13_Second_Value(ISBN_13_Second_value),
    BK_ISBN_13_Symbol(ISBN_13_symbol),
    BK_ISBN_13_String_2(ISBN_13_string_2),
    
    BK_Reading_Age(_reading_age),

    BK_Additional_Info_Object(
            _ASIN,

            Manufacturing_Object,
            _Manufacturing_Year,
            
            _Warranty,
            
            _Country_Of_Origin,
            _Model_Number,

            _Ratings, _Reviews,

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

void BooK::printing_vector_string(std::vector <std::string> string_vector_object) const{
      int j = 0;
      for(const std::string i : string_vector_object){
            j = j + 1;
            if(i == "" && j == 1){
                  std::cout << std::endl;
                  break;
            }
      std::cout << j << ") " << i << std::endl;
      }
} 

std::ostream& operator<<(std::ostream& os, const BooK& BOOk_object){
    os << "BOOK DETAILS       :" << std::endl << std::endl

    << "Book Name : " << BOOk_object.BK_BookName << std::endl << std::endl

    << BOOk_object.BK_BookFormat_withPrices << std::endl

    << "Author Name : ";
    BOOk_object.printing_vector_string(BOOk_object.BK_AuthorName);
    os << std::endl

    << "Book Description : ";
    BOOk_object.printing_vector_string(BOOk_object.BK_BookDescription);
    os << std::endl

    << "Popular Highlights in this book : ";
    BOOk_object.printing_vector_string(BOOk_object.BK_PopularHighlights_InThisbook);
    os << std::endl

    << "Editorial Reviews : ";
    BOOk_object.printing_vector_string(BOOk_object.BK_Editorial_Reviews);
    os << std::endl

    << "About Authors : ";
    BOOk_object.printing_vector_string(BOOk_object.BK_AboutAuthors);
    os << std::endl

    << "Language : ";
    BOOk_object.printing_vector_string(BOOk_object.BK_Language);
    os << std::endl

    << "Part of Series : " << BOOk_object.BK_Part_OF_Series << std::endl

    << "Publisher : " << BOOk_object.BK_Publisher << std::endl
    << "File Size : " << BOOk_object.BK_FileSize << std::endl
    << "Text to Text Speech : " << BOOk_object.BK_Text_TO_Text_Speech << std::endl
    << "Screen Recorder : " << BOOk_object.BK_ScreenRecorder << std::endl
    << "Enhanced Typesetting : " << BOOk_object.BK_EnhancedTypesetting << std::endl
    << "X - Ray : " << BOOk_object.BK_X_Ray << std::endl
    << "Page Flip : " << BOOk_object.BK_PageFlip << std::endl
    << "Word Wise : " << BOOk_object.BK_WordWise << std::endl
    << "PaperBack : " << BOOk_object.BK_Paperback << std::endl
    << "ISBN- 10 : " << BOOk_object.BK_ISBN_10 << std::endl
    
    << "ISBN- 13 : " 
    << BOOk_object.BK_ISBN_13_string_1 << " "
    << BOOk_object.BK_ISBN_13_First_Value 
    << BOOk_object.BK_ISBN_13_Symbol
    << BOOk_object.BK_ISBN_13_Second_Value << " "
    << BOOk_object.BK_ISBN_13_String_2
    << std::endl
    
    << "Reading Age : " << BOOk_object.BK_Reading_Age << std::endl << std::endl

    << "Additional Information  :" << std::endl << std::endl
    << BOOk_object.BK_Additional_Info_Object;

    return os;
}
