#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter a number :";
    cin>>n;
    for(i=1 ;i<=n; i++){

        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(k=i; k>=1; k--)
            {
                cout<<k<<" ";
            }
        for(k=2; k<=i; k++)
            {
                cout<<k<<" ";
            }
        
        cout<<"\n";
    }
}