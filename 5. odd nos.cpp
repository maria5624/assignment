//Write a Program to print only odd numbers from array list (Using array).
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
		{
		for(int i=0;i<5;i++)
		{
			cout<<"enter values"<<i+1<<":";
			cin>>arr[i];
		}
		cout<<"values are:";
				for( int i=0;i<5;i++)
				{
					cout<<arr[i]<<"\t";
				}
			}
		cout<<endl<<"odd numbers are:";
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i]<<" ";
	}

	return 0;
}