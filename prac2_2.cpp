#include <iostream>
#include <string>
using namespace std;
int main()
{
    string en, sn, br, sem, mn;
    cout<<"*****************************************************************"<<endl;
    cout<<"                STUDENT RECORD MANAGEMENT SYSTEM                 "<<endl;
    cout<<"*****************************************************************"<<endl;
    cout<<endl;
    cout<<"Software Version : 1.1"<<endl;
    cout<<"Institute        : CHARUSAT University"<<endl;
    cout<<"Acedemic Year    : 2026-27"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                     STUDENT'S REGISTRATION                     "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Enter Enrollment Number : ";
    cin>>en;
    cout<<"Enter Student Name : ";
    cin.ignore();
    getline(cin, sn);
    cout<<"Enter Branch : ";
    cin>>br;
    cout<<"Enter Semester : ";
    cin>>sem;
    cout<<"Enter Mobile Number : ";
    cin>>mn;
    cout<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                         STUDENT'S DETAILS                      "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Student's Enrollment Number : "<<en<<endl;
    cout<<"Student's Name              : "<<sn<<endl;
    cout<<"Student's Branch            : "<<br<<endl;
    cout<<"Student's Semester          : "<<sem<<endl;
    cout<<"Student's Mobile Number     : "<<mn<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                                          ~developed by Om Patel"<<endl;
    return 0;
}
