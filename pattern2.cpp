#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i,j;
    char k;

    for(i=1 ;i<=5; i++){

        for(j=1; j<=i; j++)
        {
            k=j+ 96;
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}