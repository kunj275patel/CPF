#include<iostream>
using namespace std;

void addition();
int subtraction();
void multiplication(int a,int b);
int division(int a,int b);
int sum;
 int mul;


int main(){
  addition();
  cout<<endl;
  int sub= subtraction();
  cout<<"Subtraction is "<<sub<<endl;
  cout<<"Multiplication is ";
  multiplication(5,5);
  cout<<endl;
  int divis= division(6,3);
  cout<<"Division is"<<divis;

}
void addition(){
    int a,b,sub;
    cout<<"Enter Number A :"<<endl;
    cin>>a;
    cout<<"Enetr Number B :"<<endl;
    cin>>b;
    sum= a+b;
    cout<<"Addition :"<<sum;
}
int subtraction(){
    int a,b,sub;
    cout<<"Enter Number A :"<<endl;
    cin>>a;
    cout<<"Enetr Number B :"<<endl;
    cin>>b;
    sub=a-b;
    return sub;

}
void multiplication(int a,int b){
   
    mul=a*b;
    cout<<"Multiplication :"<<mul;
}
int division(int a,int b){
   
    float div=a/b ;
    return div;
}