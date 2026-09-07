#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
   

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

    total=maths+phys+cpf+eng + wtf;
    average=(maths+phys+cpf+eng + wtf)/5;
    percentage=(total/500) * 100;
   
    cout<<"================================================";
    cout<<"======         Acedamic Summary            ======";
    cout<<"================================================";

    cout <<left<< setw(30)<<"Total Marks"
    << total<<endl;
    cout <<left<< setw(30)<<"Average Marks"
     << average<<endl;
    cout <<left<< setw(30)<<"Percentage"
    << percentage<<endl;

   
    cout<<"================================================";
    cout<<"======         Acedamic Result            ======";
    cout<<"================================================";

    if(percentage>35)
        {
            cout<< "Result : Pass"<<endl;
            cout<< "Congratulations You have pass the exam !"<<endl;
        }
        else 
        {
            cout<< "Result : Fail"<<endl;
            cout<< " Better Luck Next Time. Please improve your performence!"<<endl;
        }
   cout<<"                                       -developed by Kunj M.Patel-26cs081";


}
