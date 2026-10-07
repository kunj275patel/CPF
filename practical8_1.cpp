#include<iostream>
using namespace std;

void displayheader();
void acceptStudentDetails();
void calculateStudentRecord();
void displayStudentReport();
int sub1,sub2,sub3,sub4,sub5,total,average;
float percentage;
 int enrollmentNo;
    string studentName;
    string branch;
    int semester;
string grade,result;

int main()
{
    displayheader();
    acceptStudentDetails();
    calculateStudentRecord();
    displayStudentReport();
    return 0;
}

void displayheader(){
     cout<<endl<<"***********************************************************************";
    cout<<endl<<"*                STUDENT RECORD MANAGEMENT SYSTEM                   *"<<endl;
    cout<<endl<<"***********************************************************************";

}

void acceptStudentDetails(){
    
    cout << "\n======== STUDENT REGISTRATION ========\n";
    cout <<" Enter Your Enrollment Number :";
    cin >> enrollmentNo;

    cout <<" Enter Your Branch :";
    cin >> branch;
    
    cout <<" Enter Your Name :";
    cin >> studentName;

    cout <<" Enter Your Semester :";
    cin >> semester;

    cout << "\n======== STUDENT MARKS========\n";

    cout <<" Enter Your Branch :";
    cin>> branch;

    cout <<" Enter Your Subject1 Marks :";
    cin >> sub1; 

    cout <<" Enter Your  Subject2  Marks :";
    cin >> sub2; 

    cout <<" Enter Your  Subject3   Marks :";
    cin >> sub3; 

    cout <<" Enter Your  Subject4  Marks :";
    cin >> sub4; 

    cout <<" Enter Your Subject5  Marks :";
    cin >> sub5; 

   
}

void calculateStudentRecord(){
    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5;
    percentage=(total/500) * 100;

      if(percentage>40)
                            result ="PASS";
                    else
                        result ="FAIL";
                    

                    if(percentage>=90){
                        grade="O";
              
                    }
                    else if(percentage>=80){
                         grade="A+";
                        
                    }
                    else if(percentage>=70)
                    {
                         grade="A";
                       
                    }
                    else if(percentage>=60)
                    {
                         grade="B+";
            
                    }
                    else if(percentage>=50)
                    {
                        grade="B";
              
                    }
                    else if(percentage>=40)
                    {
                         grade="C";
               
                    }
                    else if(percentage<40)
                    {
                        grade="F";
        
                
                    }
                       if(percentage>40)
                            result ="PASS";
                    else
                        result ="FAIL";
                    
}

void displayStudentReport(){
    cout<<endl<<"***********************************************************************\n";
    cout<<endl<<"*                STUDENT REPORT                   *"<<endl;
    cout<<endl<<"***********************************************************************\n";

    cout<< "Enrollment Number :" <<enrollmentNo <<endl;
    cout<< "Student Name :" << studentName <<endl;
    cout<< "Branch :" <<branch <<endl;
     cout<< "Semester :" <<semester <<endl;
    cout<< "Total Marks :"<<total<<endl;
    cout<< "Average Marks :"<<average<<endl;
    cout<< "Percentage  :"<<percentage<<"%"<<endl;
    cout<< "Grade :"<<grade<<endl;
    cout<< "Result :"<<result<<endl;

     cout<<"\n-------------------------------------------------------------------------\n";
     cout<<"Program Executed successfully Using User-defined Function ";
     cout<<"\n-------------------------------------------------------------------------\n";
}