
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    //student details
    int enrollmentNo;
    string studentName;
    string branch;
    int semester;
    long long mobileNo;

    //subjects marks
    float maths=80;
    float phys=67;
    float cpf=70;
    float eng=78;
    float wtf=89;
    float total;
    float average;
    float percentage;
    float result;

    //Input Student Details
    

    cout <<" Enter Your Enrollment Number :";
    cin >> enrollmentNo;
    
    cout <<" Enter Your Name :";
    cin >> studentName;

    cout <<" Enter Your Mobile Number :";
    cin>> mobileNo;

    cout <<" Enter Your Semester :";
    cin>> semester;

    cout <<" Enter Your Branch :";
    cin>> branch;
    
    //cout <<" Enter Your Mathematics Marks :";
    //cin >> maths; 

    //cout <<" Enter Your Physics Marks :";
    //cin >> phys; 

    //cout <<" Enter Your Cpf Marks :";
    //cin >> cpf; 

    total=maths+phys+cpf;
    average=(maths+phys+cpf)/3;
    percentage=(total/300) * 100;

    ++cpf;
     cout <<left<< setw(30)<<"CPF Marks"
    << cpf <<endl;
    
    cpf++; 
    cout <<left<< setw(30)<<"CPF Marks"
    << cpf <<endl;
    
    --cpf; 
    cout <<left<< setw(30)<<"CPF Marks"
    << cpf <<endl;

    cpf--; 
    cout <<left<< setw(30)<<"CPF Marks"
    << cpf<<endl;
    
    

    //display repport


    cout << "\n======== STUDENT INFORMATION ========\n";

    cout <<left<< setw(30) <<" Enrollment Number"
         <<":"<<enrollmentNo<<endl ;
    cout <<left<< setw(30)<<"Student Name:"
        << studentName<<endl ;
    cout <<left<< setw(30)<<"Student Mobile Number:"
        << mobileNo<<endl ;
    cout <<left<< setw(30)<<"Student Semester"
        << semester<<endl ;
    cout <<left<< setw(30)<<"Student Branch"
        << branch<<endl;

     cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                      ACEDAMIC INFORMATION                      "<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    cout <<left<< setw(30)<<"Maths Marks"
    << maths <<endl;
    cout <<left<< setw(30)<<"Physics Marks"
    << phys<<endl ;
    cout <<left<< setw(30)<<"CPF Marks"
    << cpf <<endl;
    cout <<left<< setw(30)<<"Total Marks"
    << total<<endl;
    cout <<left<< setw(30)<<"Average Marks"
     << average<<endl;
    cout <<left<< setw(30)<<"Percentage"
    << percentage<<endl;
    
    result= ++cpf + cpf++ + --maths + ++maths - maths--;
    cout <<left<< setw(30)<<"Result"
    << result<<endl;

    cout <<left<< setw(30)<<"Maths Marks"
    << maths<<endl;
     cout <<left<< setw(30)<<"Cpf Marks"
    << cpf<<endl;

    result= ++cpf + eng++ + --maths + ++wtf - maths-- +phys-- - --phys;
    cout <<left<< setw(30)<<"Result"
    << result<<endl;
cout<<"                                       -developed by Kunj M.Patel-26cs081";

    
}
