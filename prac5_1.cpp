#include<iostream>
using namespace std;
int main()
{
    int i,sub,marks,tom=0,tm;
    float avg,per;
    cout<<"*****************************************************************"<<endl;
    cout<<"                STUDENT RECORD MANAGEMENT SYSTEM                 "<<endl;
    cout<<"*****************************************************************"<<endl;
    cout<<endl;
    cout<<"Enter Number Of Subjects : ";
    cin>>sub;
    cout<<endl;
    for(i=1; i<=sub; i++)
    {
        cout<<"Enter Marks For Subject "<<i<<" : ";
        cin>>marks;
        tom+=marks;
    }
    cout<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                          ACEDAMIC RESULT                       "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;

    tm = 100*sub;
    avg = (float)tom/sub;
    per = (float)(tom*100)/tm;

    cout<<"Total Marks          : "<<tom<<endl;
    cout<<"Average Marks        : "<<avg<<endl;
    cout<<"Percentage           : "<<per<<"%"<<endl;
    cout<<endl;
        if(per>=90)
        {
            cout<<"Result               : Pass"<<endl;
            cout<<"Grade                : O"<<endl;
            cout<<"Perfromance          : Outstanding";
        }
        else if(per>=80)
        {
            cout<<"Result               : Pass"<<endl;
            cout<<"Grade                : A+"<<endl;
            cout<<"Perfromance          : Excellent";
        }
        else if(per>=70)
        {
            cout<<"Result               : Pass"<<endl;
            cout<<"Grade                : A"<<endl;
            cout<<"Perfromance          : Very Good";
        }
        else if(per>=60)
        {
            cout<<"Result               : Pass"<<endl;
            cout<<"Grade                : B+"<<endl;
            cout<<"Perfromance          : Good";
        }
        else if(per>=50)
        {
            cout<<"Result               : Pass"<<endl;
            cout<<"Grade                : B"<<endl;
            cout<<"Perfromance          : Satisfactory";
        }
        else
        {
        cout<<"You Have Failed The Exam."<<endl;
        }
        cout<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"                                          ~developed by Om Patel"<<endl;
    return 0;
}