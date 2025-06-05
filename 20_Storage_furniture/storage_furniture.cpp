#include "storage_furniture.hpp"

storage_furniture::storage_furniture(
    std::string _product_name,
    std::string _brand_name,

    std::initializer_list <variants> _variants_object,

    std::string _Material,
    std::string _Mounting_Type,
    std::string _Door_Style,
    std::string _Back_Style,
    std::string _Finish_Type,
    std::string _Shape,
    std::string _publisher_code,
    std::string _Furniture_finish,
    
    double Minimum_required_door_width_value,
    std::initializer_list <std::string> Minimum_required_door_width_unit_string,
    
    double Shelf_Thickness_value,
    std::initializer_list <std::string> Shelf_Thickness_unit_string,
    
    std::string _Base_Type,
    std::string _Installation_Type,
    std::string _Is_cutomisable,
    std::string _Top_Material_Type,
    std::string _Type_of_Wood,
    std::string _Handle_Material,
    std::string _Back_Material_Type,
    std::string _Assembly_Required,
    std::string _Frame_Material,
    std::string _Lock_Type,
    std::string _Assembly_Type,
    std::string _Primary_material,
    std::string _Top_Material,
    std::string _Upholstery_material,
    std::string _shelf_type,
    std::string _Drawer_type,
    
    variants _capacity,
    
    double load_capacity_value,
    std::initializer_list <std::string> load_capacity_unit_string,
    
    std::string _Storage_Availability,
    std::string _Shelf_Material,
    std::string _Footboard_upholstery,
    
    double Number_of_Shelves_value,
    std::initializer_list <std::string> Number_of_Shelves_unit_string,
    
    double Shipping_weight_value,
    std::initializer_list <std::string> Shipping_weight_unit_string,
    
    double Ground_To_Item_Distance_value,
    std::initializer_list <std::string> Ground_To_Item_Distance_unit_string,
    
    std::string _mattress_comfort,

    unsigned int _Number_of_Pieces,
    unsigned int _Number_of_Compartments,
    unsigned int _Number_of_Levels,
    unsigned int _Number_of_Items,
    unsigned int _Number_of_doors,
    unsigned int _Number_of_drawers,

    std::initializer_list <std::string> _Room_type,
    
    std::initializer_list <std::string> _Special_features,
    std::initializer_list <std::string> _Recommended_Uses_For_Product,
    std::initializer_list <std::string> _Care_Instructions,
    std::initializer_list <std::string> _Legal_Disclaimer,
    std::initializer_list <std::string> _Safety_information,
    std::initializer_list <std::string> _About_this_item,
    std::initializer_list <std::string> _Product_description,
    std::initializer_list <std::string> _Key_features,

    Additional_Info _add_info
)
:   product_name(_product_name),
    brand_name(_brand_name),

    variants_object(_variants_object),

    Material(_Material),
    Mounting_Type(_Mounting_Type),
    Door_Style(_Door_Style),
    Back_Style(_Back_Style),
    Finish_Type(_Finish_Type),
    Shape(_Shape),
    publisher_code(_publisher_code),
    Furniture_finish(_Furniture_finish),
    
    Minimum_required_door_width(
        Minimum_required_door_width_value,
        Minimum_required_door_width_unit_string),

    Shelf_Thickness(
        Shelf_Thickness_value,
        Shelf_Thickness_unit_string),
    
    Base_Type(_Base_Type),
    Installation_Type(_Installation_Type),
    Is_cutomisable(_Is_cutomisable),
    Top_Material_Type(_Top_Material_Type),
    Type_of_Wood(_Type_of_Wood),
    Handle_Material(_Handle_Material),
    Back_Material_Type(_Back_Material_Type),
    Assembly_Required(_Assembly_Required),
    Frame_Material(_Frame_Material),
    Lock_Type(_Lock_Type),
    Assembly_Type(_Assembly_Type),
    Primary_material(_Primary_material),
    Top_Material(_Top_Material),
    Upholstery_material(_Upholstery_material),
    shelf_type(_shelf_type),
    Drawer_type(_Drawer_type),
    
    Capacity(_capacity),
    
    load_capacity(
        load_capacity_value,
        load_capacity_unit_string),
    
    Storage_Availability(_Storage_Availability),
    Shelf_Material(_Shelf_Material),
    Footboard_upholstery(_Footboard_upholstery),
    
    Number_of_Shelves(
        Number_of_Shelves_value,
        Number_of_Shelves_unit_string),
    
    Shipping_weight(
        Shipping_weight_value,
        Shipping_weight_unit_string),
    
    Ground_To_Item_Distance(
        Ground_To_Item_Distance_value,
        Ground_To_Item_Distance_unit_string),
    
    mattress_comfort(_mattress_comfort),

    Number_of_Pieces(_Number_of_Pieces),
    Number_of_Compartments(_Number_of_Compartments),
    Number_of_Levels(_Number_of_Levels),
    Number_of_Items(_Number_of_Items),
    Number_of_doors(_Number_of_doors),
    Number_of_drawers(_Number_of_drawers),

    Room_type(_Room_type),
    
    Special_features(_Special_features),
    Recommended_Uses_For_Product(_Recommended_Uses_For_Product),
    Care_Instructions(_Care_Instructions),
    Legal_Disclaimer(_Legal_Disclaimer),
    Safety_information(_Safety_information),
    About_this_item(_About_this_item),
    Product_description(_Product_description),
    Key_features(_Key_features),

    add_info(_add_info)
{

}

void storage_furniture::printing_string_vector(std::vector <std::string> string_vector_object) const{
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

std::ostream& operator<<(std::ostream& os, const storage_furniture& object){

    int j = 0;

    os << "PRODUCT DETAILS  : " << std::endl << std::endl

    << "Product Name : " << object.product_name << std::endl
    << "Brand Name : " << object.brand_name << std::endl << std::endl;

    for(
        std::vector<variants>::const_iterator Iter = 
        object.variants_object.begin();
        Iter != object.variants_object.end();
        ++Iter
    )
    {
        std::cout << *Iter << std::endl;
    }

    os
    << "Material : " << object.Material << std::endl
    << "Mounting Type : " << object.Mounting_Type << std::endl
    << "Door Style : " << object.Door_Style << std::endl 
    << "Back Style : " << object.Back_Style << std::endl
    << "Finish Type : " << object.Finish_Type << std::endl
    << "Shape : " << object.Shape << std::endl
    << "Publisher Code : " << object.publisher_code << std::endl
    << "Furniture Finish : " << object.Furniture_finish << std::endl
    << "Minimum Required Door Width : " << object.Minimum_required_door_width << std::endl
    << "Shelf Thickness : " << object.Shelf_Thickness << std::endl
    << "Base Type : " << object.Base_Type << std::endl
    << "Installation Type : " << object.Installation_Type << std::endl
    << "Is Customizable : " << object.Is_cutomisable << std::endl
    << "Top Material Type : " << object.Top_Material_Type << std::endl
    << "Type of Wood : " << object.Type_of_Wood << std::endl
    << "Handle Material : " << object.Handle_Material << std::endl
    << "Back Material Type : " << object.Back_Material_Type << std::endl
    << "Assembly Required : " << object.Assembly_Required << std::endl
    << "Frame Material : " << object.Frame_Material << std::endl
    << "Lock Type : " << object.Lock_Type << std::endl
    << "Assembly Type : " << object.Assembly_Type << std::endl
    << "Primary Material : " << object.Primary_material << std::endl
    << "Top Material : " << object.Top_Material << std::endl
    << "Upholstery Material : " << object.Upholstery_material << std::endl
    << "Shelf Type : " << object.shelf_type << std::endl
    << "Drawer Type : " << object.Drawer_type << std::endl
    << object.Capacity << std::endl
    << "Load Capacity : " << object.load_capacity << std::endl
    << "Storage Availability : " << object.Storage_Availability << std::endl
    << "Shelf Material : " << object.Shelf_Material << std::endl
    << "Footboard Upholstery : " << object.Footboard_upholstery << std::endl
    << "Number of Shelves : " << object.Number_of_Shelves << std::endl
    << "Shipping Weight : " << object.Shipping_weight << std::endl
    << "Groud to Item Distance : " << object.Ground_To_Item_Distance << std::endl
    << "Mattress Comfort : " << object.mattress_comfort << std::endl << std::endl

    << "Number of Pieces : " << object.Number_of_Pieces << std::endl
    << "Number of Compartment : " << object.Number_of_Compartments << std::endl
    << "Number of Levels : " << object.Number_of_Levels << std::endl
    << "Number of Items : " << object.Number_of_Items << std::endl
    << "Number of Doors : " << object.Number_of_doors << std::endl
    << "Number of Drawers : " << object.Number_of_drawers << std::endl << std::endl

    << "Room Type : ";
    object.printing_string_vector(object.Room_type);
    os << std::endl

    << "Special Features : ";
    object.printing_string_vector(object.Special_features);
    os << std::endl

    << "Recommended Uses for Product : ";
    object.printing_string_vector(object.Recommended_Uses_For_Product);
    os << std::endl

    << "Care Instructions : ";
    object.printing_string_vector(object.Care_Instructions);
    os << std::endl

    << "Legal Disclaimer : ";
    object.printing_string_vector(object.Legal_Disclaimer);
    os << std::endl

    << "Safety Information : ";
    object.printing_string_vector(object.Safety_information);
    os << std::endl

    << "ABout this Item : ";
    object.printing_string_vector(object.About_this_item);
    os << std::endl

    << "Product Description : ";
    object.printing_string_vector(object.Product_description);
    os << std::endl

    << "Key Features : ";
    object.printing_string_vector(object.Key_features);
    os << std::endl

    << "Additional Information : " << std::endl << std::endl
    << object.add_info << std::endl;

    return os;
}