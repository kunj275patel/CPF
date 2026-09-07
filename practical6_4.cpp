#include<iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3];
    cout<<"Matrix A : "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix B : "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"] : ";
            cin>>b[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"*********************************************************************************************"<<endl;
    cout<<"                                      MATRIX MULTIPLICATION                                  "<<endl;
    cout<<"*********************************************************************************************"<<endl;
    cout<<endl;
    cout<<"First Matrix"<<endl;
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Second Matrix"<<endl;
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Resultant Matrix"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int sum=0;
            for(int k=0; k<3; k++)
            {
                sum += a[i][k]*b[k][j];
            }
            cout<<sum<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    return 0;
}