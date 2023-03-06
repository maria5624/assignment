//program whether a number is palindrome
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
cout<<"Number was:"<<num<<endl;
cout<<"Reverse is:"<<rev<<endl;
if(num==rev)
cout<<"So, number is Palindrome";
else
cout<<"So, number is not Palindrome";
return 0;
}