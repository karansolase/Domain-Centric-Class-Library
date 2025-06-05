#include "Leaving_Certificate.hpp"

Place_Of_Birth::Place_Of_Birth(
    std::string _villagename,
    std::string _talukaname,
    std::string _districtname,
    std::string _statename,
    std::string _nation)   :

    POB_VillageName(_villagename),
    POB_TalukaName(_talukaname),
    POB_DistrictName(_districtname),
    POB_StateName(_statename),
    POB_Nation(_nation)
{
}

Leaving_Certificate::Leaving_Certificate(
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
    int _Issued_date_year)   :

    LC_SchoolOrCollege_Name(_school_or_college_name),
    LC_SchoolOrCollege_Contact(_school_or_college_contactinfo),
    LC_SchoolOrCollege_Email(_school_or_college_email),
    LC_SchoolApprovalNo(_school_approvalno),
    LC_Medium(_medium),
    LC_SSC_CodeNo(_ssc_codeno),
    LC_HSC_CodeNo(_hsc_codeno),
    LC_UDISE(udise),

    LC_SerialNo(_serialno),
    LC_RegisterNo(_registerno),
    LC_StudentSaral_ID(_student_saralID),
    LC_UID(_uid),
    LC_AdharNo(_adharno),

    LC_StudentName(
        _firstname,
        _middlename,
        _lastname),

    LC_MotherName(
        _mothername),

    LC_Castewith_SubCaste(_castewith_Subcaste),
    LC_Nationality(_nationality),
    LC_MotherTongue(_mothertongue),

    LC_POB_Object(
        _place_of_birth_village,
        _place_of_birth_taluka,
        _place_of_birth_district,
        _place_of_birth_state,
        _place_of_birth_nation
    ),

    LC_Date_Of_Birth(
        _Date_of_Birth_day, "-",
        _Date_of_Birth_month, "-",
        _Date_of_Birth_year),
    
    LC_Date_Of_Birth_InWords(_Date_of_Birth_inwords),
    LC_LastAttendedSchool(_last_attended_school),
    
    LC_Date_Of_Admission(
        _Date_of_Admission_day, "-",
        _Date_of_Admission_month, "-",
        _Date_of_Admission_year),
    
    LC_Progress(_progress),
    LC_Conduct(_conduct),

    LC_Date_Of_Leaving(
        _Date_of_Leaving_day, "-",
        _Date_of_Leaving_month, "-",
        _Date_of_Leaving_year),

    LC_Std_inwhich_Studying(_std_inwhich_studying),
    LC_Reason_For_Leaving_School(_reason_for_leaving_school),
    LC_Remarks(_remarks),

    LC_Issued_date(
        _Issued_date_day, "-",
        _Issued_date_month, "-",
        _Issued_date_year)
{
}

std::ostream& operator<<(std::ostream& os, const Leaving_Certificate& LC_Object)
{
    os << "LEAVING CERTIFICATE DETAILS : " << std::endl << std::endl

    << "School Or College Name : "  << LC_Object.LC_SchoolOrCollege_Name << std::endl
    << "School Or College Contact : " << LC_Object.LC_SchoolOrCollege_Contact << std::endl
    << "School Or College Email : "  << LC_Object.LC_SchoolOrCollege_Email << std::endl
    << "School Approval No. : " << LC_Object.LC_SchoolApprovalNo << std::endl
    << "Medium : "  << LC_Object.LC_Medium << std::endl
    << "SSC Code No. : "  << LC_Object.LC_SSC_CodeNo << std::endl
    << "HSC Code No. : "  << LC_Object.LC_HSC_CodeNo << std::endl
    << "UDISE : "  << LC_Object.LC_UDISE << std::endl 
    << "Serial No. : "  << LC_Object.LC_SerialNo << std::endl
    << "Register No. : "  << LC_Object.LC_RegisterNo << std::endl
    << "Student Saral ID : "  << LC_Object.LC_StudentSaral_ID << std::endl
    << "UID : "  << LC_Object.LC_UID << std::endl
    << "Adhar No : " << LC_Object.LC_AdharNo << std::endl << std::endl

    << "Student Name : "  << LC_Object.LC_StudentName << std::endl
    << "Mother Name : "  << LC_Object.LC_MotherName << std::endl
    << "Caste With Sub Caste : "  << LC_Object.LC_Castewith_SubCaste << std::endl
    << "Nationality : "  << LC_Object.LC_Nationality << std::endl
    << "Mother Tongue : " << LC_Object.LC_MotherTongue << std::endl << std::endl

    << "Place Of Birth :" << std::endl
    << "Village : " << LC_Object.LC_POB_Object.POB_VillageName << std::endl
    << "Taluka : "  << LC_Object.LC_POB_Object.POB_TalukaName << std::endl
    << "District : "  << LC_Object.LC_POB_Object.POB_DistrictName << std::endl
    << "State : "  << LC_Object.LC_POB_Object.POB_StateName << std::endl
    << "Nation : "  << LC_Object.LC_POB_Object.POB_Nation << std::endl << std::endl

    << "Date of Birth : "  << LC_Object.LC_Date_Of_Birth << std::endl
    << "Last Attended School : " << LC_Object.LC_LastAttendedSchool << std::endl
    << "Date of Admission : "  << LC_Object.LC_Date_Of_Admission << std::endl
    << "Progress : "  << LC_Object.LC_Progress << std::endl
    << "Conduct : " << LC_Object.LC_Conduct << std::endl
    << "Date of Leaving : "  << LC_Object.LC_Date_Of_Leaving << std::endl
    << "Std In Which Studying : " << LC_Object.LC_Std_inwhich_Studying << std::endl
    << "Reason For Leaving School : " << LC_Object.LC_Reason_For_Leaving_School << std::endl
    << "Reamrks : " << LC_Object.LC_Remarks << std::endl << std::endl

    << "Issued Date : " << LC_Object.LC_Issued_date << std::endl;

    return os;
}