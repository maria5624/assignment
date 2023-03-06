//Write a program to find Maximum the difference between two elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int arr[5]; int big;int i;int small;

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
				big= small=arr[0];
				for(i=0;i<5;i++)
				{
				if(arr[i]>big)	
				big=arr[i];
				if(arr[i] < small)  
            small = arr[i]; 
				}
			cout<<endl<<"The largest difference between"<<big-small;
	        cout<<" and "<<big<<"is"<<small<<endl;
			return 0;
		}
	}
	
