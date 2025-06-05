#pragma once 

#ifndef _DRIVING_LICENSE_HPP
#define _DRIVING_LICENSE_HPP

#include <iostream>
#include "Date.hpp"
#include "Contact_Details.hpp"

class Driving_License;

class DrivingLicense_No
{
    friend std::ostream& operator<<(std::ostream& os, const Driving_License& DLObject);

    private :
    std::string DL_No_StateCode;
    int DL_No_MotorVehicleAuthority_BranchCode;
    Date DL_No_IssuedYear;
    std::string DL_No_DriverProfile_ID;

    public :
    DrivingLicense_No(
        std::string _statecode,
        int _motorvehicleauthority_branchcode,

        int _dl_IssuedYear,

        std::string _driverprofile_id);

    void Display_DrivingLicense_No() const;
};

class Driving_License
{
    friend std::ostream& operator<<(std::ostream& os, const Driving_License& DLObject);

    private :
    std::string DL_stateName;
    DrivingLicense_No DL_No;
    Date DL_DateOfIssue;
    
    Date DL_VaildTill;
    std::string DL_LicenseUseType;

    std::string DL_ClassOfVehicle;

    Name DL_HolderName;
    std::string DL_Son_Or_Daughter_Or_Wife_Of;
    Address DL_HolderAddress;
    Date DL_Holder_DateOfBirth;
    std::string DL_Holder_BloodGroup;

    public :
    Driving_License(
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

        std::string _dl_holder_bloodgroup);
};

#endif /* DrivingLicense.hpp */