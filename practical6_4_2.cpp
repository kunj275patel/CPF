#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){

    int n1, n2;
    cout<<endl<<"***********************************************************************";
    cout<<endl<<"*                 MERGED SORTED ARRAYS                    *"<<endl;
    cout<<endl<<"***********************************************************************";

    cout<<"\nEnter size of first array : ";
    cin>> n1;

    int arr1[100];

    cout<<"\nEnter element in sorted order : ";

    for(int i=0; i<n1; i++)
    {
        cin>> arr1[i];
    }

    //second array
    cout<<"\nEnter size of second array : ";
    cin>> n2;

    int arr2[100];
    cout<<"\nEnter element in sorted order : \n";

    for(int j=0; j<n1; j++)
    {
        cin>> arr2[j];
    }

    //third array
    int merged[200];

    int i=0;
    int j=0;
    int k=0;

    while(i< n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while(i < n1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    cout<<"\nFirst Array\n";

    for(int i =0; i<n1; i++)
    {
        cout<< arr1[i] << " ";
    }

    cout<<"\nSecond Array\n";

    for(int i =0; i<n1; i++)
    {
        cout<< arr2[i] <<" ";
    }

    cout<<endl<<"--------------------------------------------------------------------------"<<endl;

     cout<<"\nMergedArray\n";

    for(int i =0; i<n1 + n2; i++)
    {
        cout<< merged[i] <<" ";
    }

    cout<<endl<<"--------------------------------------------------------------------------"<<endl;

    cout<<"                                       -developed by Kunj M.Patel-26cs081";

}
