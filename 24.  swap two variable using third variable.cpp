// program to swap two variable using third variable
#include<iostream>
using namespace std;
int main()
{
int n1, n2, temp;
cout<<"Enter first number:";
cin>>n1;
cout<<"Enter second number:";
cin>>n2;
temp=n1;
n1=n2;
n2=temp;
cout<<"Numbers after swapping are:="<<endl;
cout<<"First number after swapping: "<<n1<<endl;
cout<<"Second number after swapping: "<<n2;
return 0;
}