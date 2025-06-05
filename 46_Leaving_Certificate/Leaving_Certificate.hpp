#pragma once 

#ifndef _LEAVING_CERTIFICATE_HPP
#define _LEAVING_CERTIFICATE_HPP

#include <iostream>
#include "Contact_Info.hpp"
#include "Date.hpp"
#include "Name.hpp"

class Leaving_Certificate;

class Place_Of_Birth
{
    friend class Leaving_Certificate;
    friend std::ostream& operator<<(std::ostream& os, const Leaving_Certificate& LC_Object);

    private :
    std::string POB_VillageName;
    std::string POB_TalukaName;
    std::string POB_DistrictName;
    std::string POB_StateName;
    std::string POB_Nation;

    public :
    Place_Of_Birth(
        std::string _villagename,
        std::string _talukaname,
        std::string _districtname,
        std::string _statename,
        std::string _nation);
};

class Leaving_Certificate
{
    friend std::ostream& operator<<(std::ostream& os, const Leaving_Certificate& LC_Object);

    private :
    std::string LC_SchoolOrCollege_Name;
    Contact_Info LC_SchoolOrCollege_Contact;
    std::string LC_SchoolOrCollege_Email;
    std::string LC_SchoolApprovalNo;
    std::string LC_Medium;
    std::string LC_SSC_CodeNo;
    std::string LC_HSC_CodeNo;
    unsigned long long int LC_UDISE;

    std::string LC_SerialNo;
    unsigned int LC_RegisterNo;
    unsigned long long int LC_StudentSaral_ID;
    unsigned long long int LC_UID;
    unsigned long long int LC_AdharNo;

    Name LC_StudentName;
    Name LC_MotherName;
    std::string LC_Castewith_SubCaste;
    std::string LC_Nationality;
    std::string LC_MotherTongue;
    Place_Of_Birth LC_POB_Object;
    Date LC_Date_Of_Birth;
    std::string LC_Date_Of_Birth_InWords;
    std::string LC_LastAttendedSchool;
    Date LC_Date_Of_Admission;
    std::string LC_Progress;
    std::string LC_Conduct;
    Date LC_Date_Of_Leaving;
    std::string LC_Std_inwhich_Studying;
    std::string LC_Reason_For_Leaving_School;
    std::string LC_Remarks;
    Date LC_Issued_date;

    public :

    Leaving_Certificate(
        std::string _school_or_college_name,
        Contact_Info _school_or_college_contactinfo,
        std::string _school_or_college_email,
        std::string _school_approvalno,
        std::string _medium,
        std::string _ssc_codeno,
        std::string _hsc_codeno,
        unsigned long long int udise,

        std::string _serialno,
        unsigned int _registerno,
        unsigned long long int _student_saralID,
        unsigned long long int _uid,
        unsigned long long int _adharno,

        std::string _firstname,
        std::string _middlename,
        std::string _lastname,

        std::string _mothername,

        std::string _castewith_Subcaste,
        std::string _nationality,
        std::string _mothertongue,
        
        std::string _place_of_birth_village,
        std::string _place_of_birth_taluka,
        std::string _place_of_birth_district,
        std::string _place_of_birth_state,
        std::string _place_of_birth_nation,

        int _Date_of_Birth_day,
        int _Date_of_Birth_month,
        int _Date_of_Birth_year,

        std::string _Date_of_Birth_inwords,
        std::string _last_attended_school,
        
        int _Date_of_Admission_day,
        int _Date_of_Admission_month,
        int _Date_of_Admission_year,

        std::string _progress,
        std::string _conduct,

        int _Date_of_Leaving_day,
        int _Date_of_Leaving_month,
        int _Date_of_Leaving_year,

        std::string _std_inwhich_studying,
        std::string _reason_for_leaving_school,
        std::string _remarks,

        int _Issued_date_day,
        int _Issued_date_month,
        int _Issued_date_year
    );
};

#endif /* Leaving_Certificate.hpp */