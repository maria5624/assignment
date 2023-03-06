//Write a program to find the 2nd largest element in the array.
#include <iostream>
using namespace std;
 
int main()
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
    return 0;
}