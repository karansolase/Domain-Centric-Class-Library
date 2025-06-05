#include "DrivingLicense.hpp"

DrivingLicense_No::DrivingLicense_No(
    std::string _statecode,
    int _motorvehicleauthority_branchcode,

    int _dl_IssuedYear,

    std::string _driverprofile_id)    :

    DL_No_StateCode(_statecode),
    DL_No_MotorVehicleAuthority_BranchCode(_motorvehicleauthority_branchcode),
    
    DL_No_IssuedYear(_dl_IssuedYear),
    
    DL_No_DriverProfile_ID(
        _driverprofile_id)
{
}

void DrivingLicense_No::Display_DrivingLicense_No() const
{
    std::cout 
    << DL_No_StateCode
    << DL_No_MotorVehicleAuthority_BranchCode << " "
    << DL_No_IssuedYear
    << DL_No_DriverProfile_ID;
}

Driving_License::Driving_License(
    std::string stateName,

    std::string _drivinglicense_statecode,
    int _drivinglicense_motorvehicleauthority_branchcode,
    int _drivinglicense_issuedyear,
    std::string _drivinglicense_driverprofile_id,

    int _dl_dateOfIssue_day,
    int _dl_dateOfIssue_month,
    int _dl_dateOfIssue_year,

    int _dl_Validtill_day,
    int _dl_Validtill_month,
    int _dl_Validtill_year,

    std::string _drivinglicenseUseType,
    std::string _classofvehicle,

    std::string _dl_holder_Title,
    std::string _dl_holder_firstname,
    std::string _dl_holder_middlename,
    std::string _dl_surname,

    std::string _Son_Or_Daughter_Or_Wife_Of,

    std::string _dl_holder_premisesIdentifier,
    std::initializer_list <std::string> _dl_holder_LocalityDetails,
    std::string _dl_holder_subcityname,
    std::string _dl_holder_Cityname,
    std::string _dl_holder_statename,
    int _dl_holder_pin_Or_PostalCode,

    int _dl_holder_DOB_day, 
    int _dl_holder_DOB_month,
    int _dl_holder_DOB_year,

    std::string _dl_holder_bloodgroup)   :

    DL_stateName(stateName),
    
    DL_No(
        _drivinglicense_statecode,
        _drivinglicense_motorvehicleauthority_branchcode,
        _drivinglicense_issuedyear,
        _drivinglicense_driverprofile_id),
    
    DL_DateOfIssue(
        _dl_dateOfIssue_day, "-",
        _dl_dateOfIssue_month, "-",
        _dl_dateOfIssue_year),
    
    DL_VaildTill(
        _dl_Validtill_day, "-",
        _dl_Validtill_month, "-",
        _dl_Validtill_year),

    DL_LicenseUseType(
        _drivinglicenseUseType),

    DL_ClassOfVehicle(_classofvehicle),

    DL_HolderName(
            _dl_holder_Title,
            _dl_holder_firstname,
            _dl_holder_middlename,
            _dl_surname),

    DL_Son_Or_Daughter_Or_Wife_Of(
        _Son_Or_Daughter_Or_Wife_Of),

    DL_HolderAddress(
        _dl_holder_premisesIdentifier,
        _dl_holder_LocalityDetails,
        _dl_holder_subcityname,
        _dl_holder_Cityname,
        _dl_holder_statename,
        _dl_holder_pin_Or_PostalCode,
        ""),

    DL_Holder_DateOfBirth(
        _dl_holder_DOB_day, "-",
        _dl_holder_DOB_month, "-",
        _dl_holder_DOB_year),

    DL_Holder_BloodGroup(
        _dl_holder_bloodgroup)
{
}

std::ostream& operator<<(std::ostream& os, const Driving_License& DLObject)
{
    os << "Driving License Details : " << std::endl << std::endl

    << "State Name : " << DLObject.DL_stateName << std::endl
    << "Driving License No. : ";

    DLObject.DL_No.Display_DrivingLicense_No();

    os 
    << std::endl
    << "Date OF Issue : " << DLObject.DL_DateOfIssue << std::endl
    << "Valid Till : " << DLObject.DL_VaildTill << std::endl
    << "Is License Non Transport : " << DLObject.DL_LicenseUseType << std::endl
    << "Class Of Vehicle : " << DLObject.DL_ClassOfVehicle << std::endl << std::endl
    
    << "Name : " << DLObject.DL_HolderName << std::endl
    << "S/D/W of : " << DLObject.DL_Son_Or_Daughter_Or_Wife_Of << std::endl
    << "Address : " << DLObject.DL_HolderAddress << std::endl
    << "Date Of Birth : " << DLObject.DL_Holder_DateOfBirth << std::endl
    << "Blood Group : " << DLObject.DL_Holder_BloodGroup << std::endl;

    return os;
}