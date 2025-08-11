//Write a program in c++ to setup the swap the values of two variables without using any extra variable.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"\nBefore swapping:a="<<a<<",b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping:a="<<a<<",b="<<b<<endl;
    return 0;
}