#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
int main()
{

    int enrollmentNo=0;
    string studentName="";
    int semester=0;
    string branch="";
    long long mobileNo=0;
    int menu;

    int n=0;
    float marks;
    float total=0, average =0, percentage=0;

    string result="";
    string grade="";
    string performance="";
    string remark="";
    float maths=0,phy=0, cpf=0;

    char choice;
     
    //main menu

    do
    {
        
    
    
    cout<<"********************************************\n";
    cout<<"     STUDENT RECORD MANAGMENT SYSTEM          ";
    cout<<"********************************************\n";

    cout<< "1. Register New Student\n";
         cout<<" 2. Display Student Record\n";
         cout<<" 3. Enter Student Mark\n";
         cout<<" 4. Display Academic Result\n";
         cout<<" 5. Exit\n";

         cout<<"\n Enter Your Choice: ";
         cin>> menu;

         switch(menu)
         {
         //option 1
          case 1:
            choice = 'Y';
            while(choice =='Y' || choice =='y')
            {
                cin.ignore();

                cout <<"\nStudent regestration\n";
                cout<<"----------------------------\n";

                cout<< "Enrollment Number : ";
                cin>> enrollmentNo;

                cin.ignore();

                cout<< "Student Name : ";
                getline(cin, studentName);

                cout<< "Branch : ";
                getline(cin, branch);

                cout<< "Semester : ";
                cin>> semester;

                cout<< "Mobile Number : ";
                cin>> mobileNo;

                cout<<"\nStudent Regestered Successfully.\n";

                cout<<"\nStudent Information";
                cout<<"----------------------------\n";

                cout<< "Enrollment Number :" <<enrollmentNo <<endl;
                cout<< "Student Namer :" << studentName <<endl;
                cout<< "Branch :" <<branch <<endl;
                cout<< "Semester :" <<semester <<endl;
                cout<< "Mobile Number :" <<mobileNo <<endl;

                cout<<"\nRegestration Another Student (Y/N)  :";
                cin>> choice;
            
            }
            break;

            case 2:
             cout<< "\n Student Record\n";
                    cout<<"\n-------------------------\n";

                    cout<< "Enrollment Number :" <<enrollmentNo <<endl;
                    cout<< "Student Namer :" << studentName <<endl;
                    cout<< "Branch :" <<branch <<endl;
                    cout<< "Semester :" <<semester <<endl;
                    cout<< "Mobile Number :" <<mobileNo <<endl;
                    break;
            
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
    while (menu != 5);
    return 0;
cout<<"                                       -developed by Kunj M.Patel-26cs081";


}
