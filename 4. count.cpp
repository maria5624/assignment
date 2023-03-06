//Write a program that accept inputs 5 number from user. Accept an input number for searching and check how many times that number comes in list?
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
		int count;
		int min=5;
			for(int  i=0;i<5;i++)
			{
				if(min==arr[i])
			count++;
			}

			cout<<endl<<"value found in array"<<count;
			return 0;
	}
	
}