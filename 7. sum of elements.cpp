//Write a Program to find sum of elements in a given array.
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int sum=0;
	for(int i=0;i<5;i++)

	{
	cout<<"enter array elements:";	
    cin>>arr[i];
	sum+=arr[i];
	}
	cout<<"sum is:"<<sum;
}