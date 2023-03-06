//program to  swap two numbers without a third variable
#include<iostream>
using namespace std;
int main()
{
int n1, n2;
cout<<"Enter first number:";
cin>>n1;
cout<<"Enter second number:";
cin>>n2;
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
cout<<"Numbers after swapping:="<<endl;
cout<<"First number after swapping: "<<n1<<endl;
cout<<"Second number after swapping: "<<n2<<endl;
return 0;
}