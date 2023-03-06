// Write a program that accept inputs 5 number from user and print the minimum number in the list.
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
		int min=arr[0];
			for(int  i=0;i<5;i++)
			{
				if(min>arr[i])
			min=arr[i];
			}
			cout<<endl<<"the minimum no is"<<min;
			return 0;
	}
	
}