//Write a program that accept inputs 5 number from user. Accept an input number for searching and check that number is present in array or not?
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
		bool flag;
			for(int  i=0;i<5;i++)
			{
				if(min==arr[i])
			flag++;
			}
			cout<<endl<<"the minimum no is"<<min<<endl;
			if(flag==1)
			cout<<"value found"<<endl;
			else
				cout<<"value not found"<<endl;
			return 0;
	}
	
}