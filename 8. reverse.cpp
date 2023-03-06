//Write a Program to reverse an array.
#include<iostream>
using namespace std;
int main()
{
	int arr[5];int i;
	for(i=0;i<5;i++)
	{
		cout<<"enter an integer:";
		cin>>arr[i];
	}
	cout<<"reverse order of the array is:\n";
	for(i=4;i>=0;i--)
	cout<<arr[i]<<" ";

	return 0;
}