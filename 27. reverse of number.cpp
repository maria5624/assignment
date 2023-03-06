//reverse of a number
#include<iostream>
using namespace std;
int main()
{
int num,rev=0,rem,temp;
cout<<"enter a number:=";
cin>>num;
temp=num;
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp/=10;
}
cout<<"Reverse of a number is:"<<rev;
return 0;
}