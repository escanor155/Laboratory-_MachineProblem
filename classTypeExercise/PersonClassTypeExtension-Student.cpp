#include "PersonClassTypeExtension-Student.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    Student student;
    string academicProgram;
    string yearLevel;
    string university;

    cout << "What is your Academic Program?      :";
    getline(cin, academicProgram);
    cout << "What is your Year Level?            :";
    getline(cin, yearLevel);
    cout << "What is your University?            :";
    getline(cin, university);
    cout << endl;

    student.setAcademicProgram(academicProgram);
    cout << endl;
    student.setYearLevel(yearLevel);
    cout << endl;
    student.setUniversity(university);
    cout << endl;

    cout << "The Academic Program of the Student is " << "[ " << student.getAcademicProgram() << " ]" << endl;
    cout << endl;
    cout << "The year level of the Student is " << "[ " << student.getYearLevel() << " ]" << endl;
    cout << endl;
    cout << "The university of the Student is " << "[ " << student.getUniversity() << " ]" << endl;
    cout << endl;
   
    system("pause");

    return 0;
}