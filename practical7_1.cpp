#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
    {
        string en,br;
        char name[50],first[30],last[30],key[50];
        
        cout<<"******************************************\n";
        cout<<"   STUDENT MANAGMENT SYSTEM    \n";
        cout<<"****************************************** \n";

        cout<<"Enter Enrollment Number :";
        cin>>en;
        cout<<"Enter Student Name : ";
        cin.ignore();
        cin.getline(name,30);
        cout<<"Enter Branch : ";
        cin>>br;

        cout<<"---------------------------------------------- \n";
        cout<<" Student reference Id \n";
        cout<<name<<"-"<<en;

        //first name
        cout<<endl<<"---------------------------------------------- \n";
        int i=0;
        while(name[i] != ' ' && name[i] != '\0' )
        {
            first[i]= name[i];
            i++;
        }

        cout<<"First Name : \n";
        cout<<first;

        //last name
         while( name[i] != '\0')
        {
            i++;
        }

        while( name[i] != ' ' && i>=0)
        {
            i--;
        }

        cout<<endl;
        int j=0;
        while( name[i] != '\0')
        {
            last[j]=name[i + 1];
            j++;
            i++;
        }

        cout<<"Last Name :\n";
        cout<<last;
        
        cout<<endl<<"---------------------------------------------- \n";
        cout<<"Enter keyword : ";
        cin>>key;

        int nameLn= strlen(name);
        int keyLn= strlen(key);

       
       while(j != keyLn)
       {
        if(name[i]==key[j])
        {
            i++;
            j++;
        }
        else{
            i++;
        }
       }
       if(j == keyLn)
       {
        cout<<"KeyWord Found";
       }
       else cout<<"not";
        
        cout<<endl<<"---------------------------------------------- \n";
        cout<<"Student Report";
        cout<<"Enrollment Number : "<<en<<endl;
        cout<<"Student Name : "<<name<<endl;
         cout<<"Branch : "<<br<<endl;
    }