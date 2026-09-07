#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
   

    //subjects marks
    float maths;
    float phys;
    float cpf;
    float eng;
    float wtf;
    float total;
    float average;
    float percentage;
    float result;

    cout <<" Enter Your Mathematics Marks :";
    cin >> maths; 

    cout <<" Enter Your Physics Marks :";
    cin >> phys; 

    cout <<" Enter Your Cpf Marks :";
    cin >> cpf; 

    cout <<" Enter Your English Marks :";
    cin >> eng; 

    cout <<" Enter Your WTF Marks :";
    cin >> wtf; 

    total=maths+phys+cpf+eng + wtf;
    average=(maths+phys+cpf+eng + wtf)/5;
    percentage=(total/500) * 100;

    cout<<"================================================"<<endl;
    cout<<"======         Subject Marks            ======"<<endl;
    cout<<"================================================"<<endl;

    cout <<left<< setw(30)<<"Maths Marks :"
    << maths <<endl;
    cout <<left<< setw(30)<<"Physics Marks :"
    << phys<<endl ;
    cout <<left<< setw(30)<<"CPF Marks :"
    << cpf <<endl; cout <<left<< setw(30)<<"English Marks :"
    << eng <<endl;
     cout <<left<< setw(30)<<"WTF Marks :"
    << wtf <<endl;


    cout<<"================================================"<<endl;
    cout<<"======         Acedamic Result            ======"<<endl;
    cout<<"================================================"<<endl;

    cout <<left<< setw(30)<<"Total Marks :"
    << total<<endl;
    cout <<left<< setw(30)<<"Average Marks :"
     << average<<endl;
    cout <<left<< setw(30)<<"Percentage :"
    << percentage<<endl;
    

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

    if(percentage>=90){
        cout<<"Grade : O"<<endl;
        cout<<"Performence : Outstanding"<<endl;
    }
    else if(percentage>=80){
        cout<<"Grade : A+"<<endl;
        cout<<"Performence : Excellent"<<endl;
    }
    else if(percentage>=70)
    {
        cout<<"Grade : A"<<endl;
        cout<<"Performence : Very Good"<<endl;
    }
    else if(percentage>=60)
    {
        cout<<"Grade : B+"<<endl;
        cout<<"Performence : Good"<<endl;
    }
    else if(percentage>=50)
    {
        cout<<"Grade : B"<<endl;
        cout<<"Performence : Satisfactory"<<endl;
    }
    else if(percentage>=40)
    {
        cout<<"Grade : C"<<endl;
        cout<<"Performence : Needs Improve"<<endl;
    }
    else if(percentage<40)
    {
        cout<<"Grade : F"<<endl;
        cout<<"Performence : Failed"<<endl;
    }
   cout<<"                                       -developed by Kunj M.Patel-26cs081";

    return 0;

}
