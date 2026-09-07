#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
int main()
{
    int enrollementNo =0;
    string studentName ="";
    string branch="";
    int smester=0;
    long long mobileNo =0;
    float maths=0,phy=0, cpf=0;
    float total=0, average=0, percentage=0;

    string result, grade, remark;
    int choice;

    do
    {
        cout<<"\n";
         cout<<"================================================"<<endl;
         cout<<"======         Acedamic Result            ======"<<endl;
         cout<<"================================================"<<endl;

         cout<<"\n--------------Main Menu----------------\n";
         cout<< "1. Register New Student\n";
         cout<<" 2. Display Student Record\n";
         cout<<" 3. Enter Student Mark\n";
         cout<<" 4. Display Academic Result\n";
         cout<<" 5. Exit\n";

         cout<<"\n Enter Your Choice: ";
         cin>> choice;

         switch(choice)
         {
            case 1:
                cin.ignore();

                cout <<"\nStudent regestration\n";
                cout<<"----------------------------\n";

                cout<< "Enrollment Number : ";
                cin>> enrollementNo;

                cin.ignore();

                cout<< "Student Name : ";
                getline(cin, studentName);

                cout<< "Branch : ";
                getline(cin, branch);

                cout<< "Semester : ";
                cin>> smester;

                cout<< "Mobile Number : ";
                cin>> mobileNo;

                cout<<"\nStudent Regestered Successfully.\n";
                break;

                //dispay student record
                case 2:
                    cout<< "\n Student Record\n";
                    cout<<"\n-------------------------\n";

                    cout<< "Enrollment Number :" <<enrollementNo <<endl;
                    cout<< "Student Namer :" << studentName <<endl;
                    cout<< "Branch :" <<branch <<endl;
                    cout<< "Semester :" <<smester <<endl;
                    cout<< "Mobile Number :" <<mobileNo <<endl;
                    break;

                    //enter marks
                    case 3:
                    cout<< "\nEnter Student Marks\n";
                    cout<<"\n-------------------------\n";

                    cout<<"Enter Your Maths Marks :";
                    cin>>maths;
                    cout<<"Enter Your Physics Marks :";
                    cin>>phy;
                    cout<<"Enter Your CPF Marks :";
                    cin>>cpf;

                    cout<<"\nMarks Entered Successfully\n";
                    break;

                    case 4:
                    
                    total=maths+phy+cpf;
                    average=(maths+phy+cpf)/3;
                    percentage=(total/300) * 100;

                    if(percentage>40)
                            result ="PASS";
                    else
                        result ="FAIL";
                    

                    if(percentage>=90){
                        grade="O";
                        remark="Outstanding";
                    }
                    else if(percentage>=80){
                         grade="A+";
                        remark="Excellent";
                    }
                    else if(percentage>=70)
                    {
                         grade="A";
                        remark="Very Good";
                    }
                    else if(percentage>=60)
                    {
                         grade="B+";
                        remark="Good";
                    }
                    else if(percentage>=50)
                    {
                        grade="B";
                        remark="Satisfactory";
                    }
                    else if(percentage>=40)
                    {
                         grade="C";
                        remark="Needs Improve";
                    }
                    else if(percentage<40)
                    {
                        grade="F";
                        remark="Failed";
                    
                    }

                    cout<< "\nAcademic Result\n";
                    cout<<"\n-------------------------\n";
                    
                    cout<<fixed << setprecision(2);

                    cout<< "Total Marks :"<<total<<endl;
                    cout<< "Average Marks :"<<average<<endl;
                    cout<< "Percentage  :"<<percentage<<endl;
                    cout<< "Result :"<<result<<endl;
                    cout<< "Grade :"<<grade<<endl;
                    cout<< "Performance :"<<remark<<endl;
                    break;

                    case 5:
                        cout<<"\nTHANK YOU...\n"<<endl;
                        break;

                    default:
                    cout<<"\nInvalid Choice! Please Try Again.\n"; 
      

         }
    }
    while (choice != 5);

    cout<<"                                       -developed by Kunj M.Patel-26cs081";

    return 0;
    
}
