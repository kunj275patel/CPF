
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
    float average;
    float percentage;
    float result;

    //Input Student Details
    

   
    
    cout <<" Enter Your Mathematics Marks :";
    cin >> maths; 

   

    cout <<" Enter Your Cpf Marks :";
    cin >> cpf; 

    total=maths+cpf;
    average=(maths+cpf)/3;
    percentage=(total/200) * 100;

    ++cpf;
     cout <<left<< setw(30)<<"CPF Marks after ++cpf;"
    << cpf <<endl;
    
    cpf++; 
    cout <<left<< setw(30)<<"CPF Marks after cpf++"
    << cpf <<endl;
    
    --cpf; 
    cout <<left<< setw(30)<<"CPF Marks after --cpf"
    << cpf <<endl;

    cpf--; 
    cout <<left<< setw(30)<<"CPF Marks after cpf--"
    << cpf<<endl;
    
    <<endl;

    //display repport
    
    result= ++cpf + cpf++ + --maths + ++maths - maths--;
    cout <<left<< setw(30)<<"Result : ++cpf + cpf++ + --maths + ++maths - maths-- ="
   <<endl;

    cout<<"Result = "<<result<<endl;
   
     cout <<left<< setw(30)<<"Maths Marks after Evaluation"
    << maths <<endl;
    
    cout <<left<< setw(30)<<"CPF Marks after Evaluation"
    << cpf <<endl;
   
}
