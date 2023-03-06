//CONCATENATE ALL PROGRAM (11-19) USING SWITCH STATEMENT AS DISCUSSED IN CLASS
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
		cout<<"enter 1 for separating even and odd number:"<<endl;
		cout<<"enter 2 for counting even and odd number:"<<endl;
		cout<<"enter 3 for sorting in ascending order:"<<endl;
		cout<<"enter 4 for sorting in descending order:"<<endl;
		cout<<"enter 5 for 2nd smallest element in array:"<<endl;
		cout<<"enter 6 for 2nd largest element in array:"<<endl;
		cout<<"enter 7 for  checking if two array are same or not:"<<endl;
	     cout<<"enter 8 for to merge two unsorted array:"<<endl;
		cout<<"enter 9 for maximum difference btw two number:"<<endl;
			cout<<"enter any number from 1 to 9:"<<endl;
		cin>>n;
	}
		switch(n)
		{
	case 1:
		{
			cout<<endl<<"even numbers are:";
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2==0)
		cout<<arr[i]<<" ";
	}
		cout<<endl<<"odd numbers are:";
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i]<<" ";
	}
	break;
		}
		case 2:
			{
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
	break;
			}
			case 3:
				{
					int arr[5];int i; int j; int temp;
      cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    break;
				}
  
    
 case 4:
 	{
 	int arr[5];int i; int j; int temp;
      cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted descending order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
 break;

	 }
	 case 5:
	 	{
	 		int arr[5];int n;int p; int i; int j;
      cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
              p=arr[i];
			  arr[i]=arr[j];
			  arr[j]=p;  
            }
        }
    }
    cout<<"second smallest element:"<<arr[1]<<endl;
    break;
		 }
		 case 6:
		 	{
		 		 int arr[5];int n;int p; int i; int j;
      cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] < arr[j])
            {
              p=arr[i];
			  arr[i]=arr[j];
			  arr[j]=p;  
            }
        }
    }
    cout<<"second largest element:"<<arr[1]<<endl;
    break;
			 }
			 case 7:
			 	{
			 	int a[100], b[100], c[100], i, j, k=0;
   int a_size, b_size, x, cnt=0;
   cout<<"Enter the Size of First Array (max.100): ";
   cin>>a_size;
   cout<<"Enter "<<a_size<<" Elements for First Array: ";
   for(i=0; i<a_size; i++)
      cin>>a[i];
   cout<<"Enter the Size of Second Array (max.100): ";
   cin>>b_size;
   cout<<"Enter "<<b_size<<" Elements for Second Array: ";
   for(i=0; i<b_size; i++)
      cin>>b[i];
   for(i=0; i<a_size; i++)
   {
      for(j=0; j<b_size; j++)
      {
         if(a[i]==b[j])
         {
            cnt = 0;
            for(x=0; x<k; x++)
            {
               if(a[i]==c[x])
                  cnt++;
            }
            if(cnt==0)
            {
               c[k] = a[i];
               k++;
            }
         }
      }
   }
   if(k==0)
      cout<<"\nCommon Element not Found!";
   else if(k==1)
   {
      cout<<"\nHere is only 1 Common Element:\n";
      cout<<c[0];
   }
   else
   {
      cout<<"\nHere are all "<<k<<" Common elements:\n";
      for(i=0; i<k; i++)
         cout<<c[i]<<" ";
   }
   cout<<endl;
			 		break;
				 }
			case 8:
			{
				 int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>sizeTwo;
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    break;
				}
				case 9:
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
	        cout<<" and "<<small<<"is"<<big<<endl;
break;
}				
		default:
			{
				cout<<"invalid:";

			}
	}
}
}