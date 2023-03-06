//Write a program to count odd and even integers in an array.
#include<iostream>
using namespace std;
int main()
{
		int arr[5]; int i;
			{
		for( i=0;i<5;i++)
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
int even_count=0; int odd_count=0;
	
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2==0)
even_count++;
			
	}
		cout<<endl<<"total even numbers are"<<even_count;
		
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2!=0)
			odd_count++;
	}
	cout<<endl<<"total odd numbers are:"<<odd_count;
return 0;
}



