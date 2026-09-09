
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
   
    

    //subjects marks
    float maths=80;
    float cpf=70;
    float total;
   
    float result;

    //Input Student Details
    
    //cout <<" Enter Your Mathematics Marks :";
    //cin >> maths; 


    //cout <<" Enter Your Cpf Marks :";
    //cin >> cpf; 

    total=maths+cpf;
    average=(maths+cpf)/3;
    percentage=(total/200) * 100;

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


    cout <<left<< setw(30)<<"Maths Marks"
    << maths <<endl;
    
    cout <<left<< setw(30)<<"CPF Marks"
    << cpf <<endl;
    
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
