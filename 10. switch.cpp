//CONCATENATE ALL PROGRAM (1-9) USING SWITCH STATEMENT AS DISCUSSED IN CLASS
#include<iostream>
using namespace std;
int main()
{
	int n; int arr[5];
	{
		for(int i=0;i<5;i++)
		{
			cout<<"enter values"<<i+1<<":";
			cin>>arr[i];
		}
		cout<<"enter 1 for searching minimum number:"<<endl;
		cout<<"enter 2 for searching maximum number:"<<endl;
		cout<<"enter 3 for searching equal number:"<<endl;
		cout<<"enter 4 for counting the number:"<<endl;
		cout<<"enter 5 for searching odd number:"<<endl;
		cout<<"enter 6 for finding even number:"<<endl;
		cout<<"enter 7 for  finding the sum of number:"<<endl;
	     cout<<"enter 8 for finding reverse of number:"<<endl;
		cout<<"enter 9 for unique number:"<<endl;
			cout<<"enter any number from 1 to 9:"<<endl;
		cin>>n;
	}
		switch(n)
		{
	case 1:
		{
			int min=arr[0];
			for(int  i=0;i<5;i++)
			{
				if(min>arr[i])
			min=arr[i];
			}
			cout<<endl<<"the minimum no is"<<min;
			break;	
		}
			
	case 2:
		{
				int max=arr[0];
			for(int  i=0;i<5;i++)
			{
				if(max<arr[i])
			max=arr[i];
			}
			cout<<endl<<"the maximum no is"<<max;
			break;	
		}
			
	case 3:
				{
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
				break;
				}
	case 4:
		{
				int count;
		int min=5;
			for(int  i=0;i<5;i++)
			{
				if(min==arr[i])
			count++;
			}

			cout<<endl<<"value found in array"<<count;
			break;
		}
	case 5:
		{
			
					cout<<"odd numbers are:"<<endl;
	for(int i=0; i<5;i++)
			{
				if(arr[i]%2!=0)
			cout<<arr[i]<<" ";
				}
			break;
		}
	case 6:
			{
					cout<<"even numbers are:"<<endl;
					for(int i=0; i<5;i++)
			{
				if(arr[i]%2==0)
				cout<<arr[i]<<" ";
			}

				break;

			}
			case 7:
				{
					int sum=0;
				for(int i=0;i<5;i++)

				{
				cout<<"enter array elements:";	
    			cin>>arr[i];
				sum+=arr[i];
				}
				cout<<"sum is:"<<sum;
				break;	
				}
				
	case 8:
		{
			cout<<"reverse order of the array is:\n";
				for(int i=5;i>=0;i--)
				cout<<arr[i]<<" ";
			break;	
		}
		case 9:
			{
				 cout<<"unique number"<<endl;
					for(int i=0;i<5;i++)
				{
					int count=0;
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
			break;
		}
   
    default:
    	{
    		cout<<"invalid";
		}
		}
		return 0;
}