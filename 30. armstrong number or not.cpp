//program to check whether a number is Armstrong number or not
#include<iostream>
using namespace std;
int main()
{
int num,sum=0,rem,temp;
cout<<"enter any three digits number:=";
cin>>num;
temp=num;
while(temp>0)
{
rem=temp%10;
temp=temp/10;
sum=sum+rem*rem*rem;
}
if(sum==num)
cout<<"Number is Armstrong";
else
cout<<"Number is not Armstrong";
return 0;
}