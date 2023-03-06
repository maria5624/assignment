// factorial of a number
#include<iostream>
using namespace std;
int main()
{
int num;
long fact=1;
cout<<"Enter a number:=";
cin>>num;
if(num<0)
cout<<"Factorial of a negative number is not defined";
if(num==0)
cout<<"Factorial of zero is 1";
else
{
while(num>0)
{
fact=fact*num;
num--;
}
cout<<"Factorial:="<<fact;
}
return 0;
}