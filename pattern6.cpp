#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i,j,k,n;
    char l;
    cout<<"Enter a number :";
    cin>>n;
    for(i=1 ;i<=n; i++){

        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(k=i; k>=1; k--)
            {
                l= k+64;
                cout<<l<<" ";
            }
        for(k=2; k<=i; k++)
            {
                l= k+64;
                cout<<l<<" ";
            }
        
        cout<<"\n";
    }
}