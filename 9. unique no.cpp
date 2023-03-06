//Write a program to print all unique elements in an array.
#include<iostream>
using namespace std;
int main()
{
 int count=0;
   int arr[5];
   cout<<"\nEnter the array elements";
		for(int i=0;i<5;i++)
		{
			  cin>>arr[i];
		}
      
        cout<<"unique number"<<endl;
					for(int i=0;i<5;i++)
				{
					count=0;
					for(int j=0;j<5;j++)
					{
						if(arr[i]==arr[j])	
						{
							count++;
						}
					}
					if(count==1)
					{
					cout<<arr[i]<<" ";
					}
			
	}
	cout<<endl;
	return 0;
		
			}
			
		
	
